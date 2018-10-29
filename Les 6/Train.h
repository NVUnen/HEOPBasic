#pragma once


class Train {
    public:
        Train();

        virtual float ticketprice() = 0;
        virtual float income() = 0;
        virtual float allowance() = 0;

        float kilometerprice = 0.20f;






};

