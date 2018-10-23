/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef StatementReindex_hpp
#define StatementReindex_hpp

#include <WCDB/Statement.hpp>

namespace WCDB {

class StatementReindex : public StatementSyntax<Syntax::ReindexSTMT> {
public:
    StatementReindex& reindex();
    StatementReindex& collation(const SyntaxString& collation);
    StatementReindex& table(const SyntaxString& table);
    StatementReindex& index(const SyntaxString& index);
    StatementReindex& schema(const Schema& schema);
};

} // namespace WCDB

#endif /* StatementReindex_hpp */
