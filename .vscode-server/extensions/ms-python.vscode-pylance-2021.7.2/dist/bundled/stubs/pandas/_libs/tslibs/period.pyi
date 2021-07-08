from __future__ import annotations
from datetime import datetime
from typing import Any

def is_period_object(obj: object) -> bool: ...
def get_period_ordinal(dts: datetime, freq: int) -> int: ...

class IncompatibleFrequency(ValueError): ...


class Period():
    def __init__(
        self,
        value: Any = ...,
        freqstr: Any = ...,
        ordinal: Any = ...,
        year: Any = ...,
        month: int = ...,
        quarter: Any = ...,
        day: int = ...,
        hour: int = ...,
        minute: int = ...,
        second: int = ...,
    ) -> None: ...
    def asfreq(self, *args, **kwargs) -> Period: ...

    @classmethod
    def now(cls) -> Period: ...
    def strftime(self, *args, **kwargs) -> str: ...
    def to_timestamp(self, *args, **kwargs) -> Timestamp: ...
    def __add__(self, other) -> Period: ...
    def __eq__(self, other) -> bool: ...
    def __ge__(self, other) -> bool: ...
    def __gt__(self, other) -> bool: ...
    def __hash__(self) -> int: ...
    def __init__(self, *args, **kwargs) -> None: ...
    def __le__(self, other) -> bool: ...
    def __lt__(self, other) -> bool: ...
    def __new__(cls, *args, **kwargs) -> Period: ...
    def __ne__(self, other) -> bool: ...
    def __radd__(self, other) -> Period: ...
    def __reduce__(self, *args, **kwargs) -> Any: ... # what should this be?
    def __repr__(self) -> str: ...
    def __rsub__(self, other) -> Period: ...
    def __setstate__(self, *args, **kwargs) -> Any: ... # what should this be?
    def __str__(self) -> str: ...
    @property
    def day(self) -> int: ...
    @property
    def dayofweek(self) -> int: ...
    @property
    def dayofyear(self) -> int: ...
    @property
    def daysinmonth(self) -> int: ...
    @property
    def days_in_month(self) -> int: ...
    @property
    def end_time(self) -> Timestamp: ...
    @property
    def freq(self) -> Any: ...
    @property
    def freqstr(self) -> str: ...
    @property
    def ordinal(self) -> int: ...
    @property
    def hour(self) -> int: ...
    @property
    def is_leap_year(self) -> bool: ...
    @property
    def minute(self) -> int: ...
    @property
    def month(self) -> int: ...
    @property
    def ordinal(self) -> int: ...
    @property
    def quarter(self) -> int: ...
    @property
    def qyear(self) -> int: ...
    @property
    def second(self) -> int: ...
    @property
    def start_time(self) -> Timestamp: ...
    @property
    def week(self) -> int: ...
    @property
    def weekday(self) -> int: ...
    @property
    def weekofyear(self) -> int: ...
    @property
    def year(self) -> int: ...
    # Static methods
    @staticmethod
    def now() -> Period: ...
    # Methods
    def asfreq(self, freq: str, how: str = ...) -> Period: ...
    def strftime(self, fmt: str) -> str: ...
    def to_timestamp(self, freq: str, how: str = ...) -> Timestamp: ...

from .timestamps import Timestamp
