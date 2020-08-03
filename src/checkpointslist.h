// Copyright (c) 2020 The Beyondcoin Core developers
// Copyright (c) 2020 The Beyondtoshi
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_CHECKPOINTSLIST_H
#define BITCOIN_CHECKPOINTSLIST_H

static CheckPoint checkpoints_main[] = {
    {
        {     0, uint256S("0a9e3b5fce3aee6e04f06dfd6ad380a6c0f9d8420f53a4ca97845756ee5d56e7")},
        {  2016, uint256S("4634e6d5576aaeac9962aa71d4a14cbea593cbe2ee8dec3b35013c433a90e2e1")},
        {  4032, uint256S("069e7c1ee71176920f1dcf03d8d6b0d39c811873d8e0a912ffbf96db235307a1")},
        {  6048, uint256S("6690d77629136b546eace011747986e3f8e5262ba0f880713b7a6f086e0b278b")},
        {  8064, uint256S("a74124dc8802f31a37d86777b6d972ab7b825d28f351ef3366d85aa48218b846")},
        { 10080, uint256S("8995e6b36b94eb3bcc6258d65fc13b95f03115fee10a3c0e1593e58130f38783")},
        { 12096, uint256S("161dd4ef5904c58c42b8ca1854bcc1ad7d26e346293b31d7f0bee706ee87394a")},
        { 14112, uint256S("0efac2da1f2aba9329dca6884898630c11a87010125b418983be7fef13601c58")},
        { 16128, uint256S("59d2bbf3ea2f0094dc1bd2924f82df18f4b04832c7b0c54182eb814ee0cae7c9")},
        { 18144, uint256S("97d3e636460acb36a5f65ef84c92b4fa1f0902026a98027253bfd9e80f06742c")},
        { 20160, uint256S("4ac036e3b7b06eb9c1598e95ca9894054c987d86635b0c00ea6386aebdbeff38")},
        { 28224, uint256S("f8a1baa91a81fbede774878982b540d56cee4bbbfa8e5d6ce7e03d030172dd09")},
        { 36288, uint256S("3c4891e8bda65bbd45e6f7ab63d257afaffd04fa341f7f6afd2d765b14486356")},
        { 44352, uint256S("a93d5e64828d81f398942528fa8117758586248d63c2601120373f3c60df4929")},
        { 52416, uint256S("48525f181fef67737ae4902b0602e412ff98c42521f9f2f0e96e2bc8d027abf2")},
        { 60480, uint256S("bd3e841ad2cbbd522e1e92d617dcae2e5c226457ef1330e82db1b06c04230e14")},
        { 68544, uint256S("9a68906949af97eceb4a2633f7699f3db6538a0d87c46bf1787297dacf723041")},
        { 76608, uint256S("912f4fcf66197b901a1b0b2e8b78f1de10087a1515e7e1403a77e1bf3094cfcd")},
        { 84672, uint256S("0811c06502983c62a0905b8a90f7524b5f2566951852df6f89dd928952a13e5d")},
        { 92736, uint256S("210119fcd307909da3c034012c83ff258a89db262d2fa9adca0e63c054990d49")},
        //{ 111864, uint256S("")},
    }
};

static CheckPoint checkpoints_test[] = {
    {
        { 0, uint256S("e4c23a189582c0a7719569717bfeb59b478a20367c5b36dd6fb18b7df4ecab51")},
        // { 2016, uint256S("")},
    }
};

#endif // BITCOIN_CHECKPOINTSLIST_H
