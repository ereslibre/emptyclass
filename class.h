class A
{
public:
    A();
    A(const A &a);
    virtual ~A();

    A &operator=(const A &a);

    A &operator+=(const A &a);
    A &operator-=(const A &a);
    A &operator*=(const A &a);
    A &operator/=(const A &a);
    A &operator%=(const A &a);
    A &operator^=(const A &a);
    A &operator&=(const A &a);
    A &operator|=(const A &a);
    A &operator<<=(const A &a);
    A &operator>>=(const A &a);

    A operator+(const A &a) const;
    A operator-(const A &a) const;
    A operator*(const A &a) const;
    A operator/(const A &a) const;
    A operator%(const A &a) const;
    A operator^(const A &a) const;
    A operator&(const A &a) const;
    A operator|(const A &a) const;
    A operator<<(const A &a) const;
    A operator>>(const A &a) const;

    bool operator==(const A &a) const;
    bool operator!=(const A &a) const;
    bool operator<(const A &a) const;
    bool operator>(const A &a) const;
    bool operator<=(const A &a) const;
    bool operator>=(const A &a) const;
    bool operator&&(const A &a) const;
    bool operator||(const A &a) const;

private:
    class Private;
    Private *d;
};

