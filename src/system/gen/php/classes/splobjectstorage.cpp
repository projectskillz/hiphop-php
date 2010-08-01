/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#include <php/classes/iterator.h>
#include <php/classes/splobjectstorage.h>
#include <runtime/ext/ext.h>
#include <runtime/eval/eval.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* preface starts */
/* preface finishes */
/* SRC: classes/splobjectstorage.php line 3 */
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_splobjectstorage
Variant c_splobjectstorage::os_getInit(const char *s, int64 hash) {
  DECLARE_SYSTEM_GLOBALS(g);
  if (hash < 0) hash = hash_string(s);
  switch (hash & 3) {
    case 0:
      HASH_RETURN(0x1C79FCB6D76A8068LL, 
                  0LL, "index");
      break;
    case 2:
      HASH_RETURN(0x77112DE97B68FFDALL, 
                  SystemScalarArrays::ssa_[0], "storage");
      break;
    default:
      break;
  }
  return c_ObjectData::os_getInit(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_GET_splobjectstorage
Variant c_splobjectstorage::os_get(const char *s, int64 hash) {
  return c_ObjectData::os_get(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_GET_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_splobjectstorage
Variant &c_splobjectstorage::os_lval(const char *s, int64 hash) {
  return c_ObjectData::os_lval(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_GETARRAY_splobjectstorage
void c_splobjectstorage::o_getArray(Array &props) const {
  if (isInitialized(m_storage)) props.set(String("\000SplObjectStorage\000storage", 25, AttachLiteral), m_storage.isReferenced() ? ref(m_storage) : m_storage, 0x56E3143B78CB1B27LL, true);
  props.set(String("\000SplObjectStorage\000index", 23, AttachLiteral), m_index, 0x6EB02C38EF32BE8DLL, true);
  c_ObjectData::o_getArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_GETARRAY_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_SETARRAY_splobjectstorage
void c_splobjectstorage::o_setArray(CArrRef props) {
  props->load(String("\000SplObjectStorage\000storage", 25, AttachLiteral), m_storage);
  if (props->exists(String("\000SplObjectStorage\000index", 23, AttachLiteral))) m_index = props->get(String("\000SplObjectStorage\000index", 23, AttachLiteral));
  c_ObjectData::o_setArray(props);
}
#endif // OMIT_JUMP_TABLE_CLASS_SETARRAY_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_get_splobjectstorage
Variant c_splobjectstorage::o_get(CStrRef prop, int64 phash, bool error /* = true */, const char *context /* = NULL */) {
  const char *s = context;
  if (!s) { context = s = FrameInjection::GetClassName(false); }
  int64 hash = hash_string_i(s);
  switch (hash & 1) {
    case 1:
      HASH_GUARD(0x5BA243B9FBA7A64FLL, splobjectstorage) { return o_getPrivate(prop, phash, error); }
      break;
    default:
      break;
  }
  return c_splobjectstorage::o_getPublic(prop, phash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_get_PUBLIC_splobjectstorage
Variant c_splobjectstorage::o_getPublic(CStrRef s, int64 hash, bool error /* = true */) {
  return c_ObjectData::o_getPublic(s, hash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_get_PRIVATE_splobjectstorage
Variant c_splobjectstorage::o_getPrivate(CStrRef s, int64 hash, bool error /* = true */) {
  if (hash < 0) hash = hash_string(s.data(), s.length());
  switch (hash & 3) {
    case 0:
      HASH_RETURN_STRING(0x1C79FCB6D76A8068LL, m_index,
                         "index", 5);
      break;
    case 2:
      HASH_RETURN_STRING(0x77112DE97B68FFDALL, m_storage,
                         "storage", 7);
      break;
    default:
      break;
  }
  return o_getPublic(s, hash, error);
}
#endif // OMIT_JUMP_TABLE_CLASS_get_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_exists_splobjectstorage
bool c_splobjectstorage::o_exists(CStrRef prop, int64 phash, const char *context /* = NULL */) const {
  const char *s = context;
  if (!s) { context = s = FrameInjection::GetClassName(false); }
  int64 hash = hash_string_i(s);
  switch (hash & 1) {
    case 1:
      HASH_GUARD(0x5BA243B9FBA7A64FLL, splobjectstorage) { return o_existsPrivate(prop, phash); }
      break;
    default:
      break;
  }
  return c_splobjectstorage::o_existsPublic(prop, phash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_splobjectstorage
bool c_splobjectstorage::o_existsPublic(CStrRef s, int64 hash) const {
  return c_ObjectData::o_existsPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_splobjectstorage
bool c_splobjectstorage::o_existsPrivate(CStrRef s, int64 hash) const {
  if (hash < 0) hash = hash_string(s.data(), s.length());
  switch (hash & 3) {
    case 0:
      HASH_EXISTS_STRING(0x1C79FCB6D76A8068LL, "index", 5);
      break;
    case 2:
      HASH_EXISTS_STRING(0x77112DE97B68FFDALL, "storage", 7);
      break;
    default:
      break;
  }
  return o_existsPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_exists_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_set_splobjectstorage
Variant c_splobjectstorage::o_set(CStrRef prop, int64 phash, CVarRef v, bool forInit /* = false */, const char *context /* = NULL */) {
  const char *s = context;
  if (!s) { context = s = FrameInjection::GetClassName(false); }
  int64 hash = hash_string_i(s);
  switch (hash & 1) {
    case 1:
      HASH_GUARD(0x5BA243B9FBA7A64FLL, splobjectstorage) { return o_setPrivate(prop, phash, v, forInit); }
      break;
    default:
      break;
  }
  return c_splobjectstorage::o_setPublic(prop, phash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_set_PUBLIC_splobjectstorage
Variant c_splobjectstorage::o_setPublic(CStrRef s, int64 hash, CVarRef v, bool forInit /* = false */) {
  return c_ObjectData::o_setPublic(s, hash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_set_PRIVATE_splobjectstorage
Variant c_splobjectstorage::o_setPrivate(CStrRef s, int64 hash, CVarRef v, bool forInit /* = false */) {
  if (hash < 0) hash = hash_string(s.data(), s.length());
  switch (hash & 3) {
    case 0:
      HASH_SET_STRING(0x1C79FCB6D76A8068LL, m_index,
                      "index", 5);
      break;
    case 2:
      HASH_SET_STRING(0x77112DE97B68FFDALL, m_storage,
                      "storage", 7);
      break;
    default:
      break;
  }
  return o_setPublic(s, hash, v, forInit);
}
#endif // OMIT_JUMP_TABLE_CLASS_set_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_lval_splobjectstorage
Variant& c_splobjectstorage::o_lval(CStrRef prop, int64 phash, const char *context /* = NULL */) {
  const char *s = context;
  if (!s) { context = s = FrameInjection::GetClassName(false); }
  int64 hash = hash_string_i(s);
  switch (hash & 1) {
    case 1:
      HASH_GUARD(0x5BA243B9FBA7A64FLL, splobjectstorage) { return o_lvalPrivate(prop, phash); }
      break;
    default:
      break;
  }
  return c_splobjectstorage::o_lvalPublic(prop, phash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_splobjectstorage
Variant& c_splobjectstorage::o_lvalPublic(CStrRef s, int64 hash) {
  return c_ObjectData::o_lvalPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_splobjectstorage
Variant& c_splobjectstorage::o_lvalPrivate(CStrRef s, int64 hash) {
  if (hash < 0) hash = hash_string(s.data(), s.length());
  switch (hash & 1) {
    case 0:
      HASH_RETURN_STRING(0x77112DE97B68FFDALL, m_storage,
                         "storage", 7);
      break;
    default:
      break;
  }
  return o_lvalPublic(s, hash);
}
#endif // OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_CONSTANT_splobjectstorage
Variant c_splobjectstorage::os_constant(const char *s) {
  return c_ObjectData::os_constant(s);
}
#endif // OMIT_JUMP_TABLE_CLASS_CONSTANT_splobjectstorage
IMPLEMENT_CLASS(splobjectstorage)
ObjectData *c_splobjectstorage::cloneImpl() {
  c_splobjectstorage *obj = NEW(c_splobjectstorage)();
  cloneSet(obj);
  return obj;
}
void c_splobjectstorage::cloneSet(c_splobjectstorage *clone) {
  clone->m_storage = m_storage.isReferenced() ? ref(m_storage) : m_storage;
  clone->m_index = m_index;
  ObjectData::cloneSet(clone);
}
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
Variant c_splobjectstorage::o_invoke(const char *s, CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 4:
      HASH_GUARD(0x6413CB5154808C44LL, valid) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::valid", 0, 1);
        return (t_valid());
      }
      break;
    case 10:
      HASH_GUARD(0x1670096FDE27AF6ALL, rewind) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::rewind", 0, 1);
        return (t_rewind(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x62DD82BFEB88A4ACLL, attach) {
        if (count != 1) return throw_wrong_arguments("splobjectstorage::attach", count, 1, 1, 1);
        return (t_attach(params[0]), null);
      }
      break;
    case 16:
      HASH_GUARD(0x5CEFA5A265104D10LL, count) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::count", 0, 1);
        return (t_count());
      }
      HASH_GUARD(0x61B94551FA22D290LL, contains) {
        if (count != 1) return throw_wrong_arguments("splobjectstorage::contains", count, 1, 1, 1);
        return (t_contains(params[0]));
      }
      break;
    case 17:
      HASH_GUARD(0x56EDB60C824E8C51LL, key) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::key", 0, 1);
        return (t_key());
      }
      break;
    case 21:
      HASH_GUARD(0x3C7D0AC0EBA9A695LL, detach) {
        if (count != 1) return throw_wrong_arguments("splobjectstorage::detach", count, 1, 1, 1);
        return (t_detach(params[0]), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3C6D50F3BB8102B8LL, next) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::next", 0, 1);
        return (t_next(), null);
      }
      break;
    case 28:
      HASH_GUARD(0x5B3A4A72846B21DCLL, current) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::current", 0, 1);
        return (t_current());
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke(s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
Variant c_splobjectstorage::o_invoke_few_args(const char *s, int64 hash, int count, CVarRef a0, CVarRef a1, CVarRef a2, CVarRef a3, CVarRef a4, CVarRef a5) {
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 4:
      HASH_GUARD(0x6413CB5154808C44LL, valid) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::valid", 0, 1);
        return (t_valid());
      }
      break;
    case 10:
      HASH_GUARD(0x1670096FDE27AF6ALL, rewind) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::rewind", 0, 1);
        return (t_rewind(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x62DD82BFEB88A4ACLL, attach) {
        if (count != 1) return throw_wrong_arguments("splobjectstorage::attach", count, 1, 1, 1);
        return (t_attach(a0), null);
      }
      break;
    case 16:
      HASH_GUARD(0x5CEFA5A265104D10LL, count) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::count", 0, 1);
        return (t_count());
      }
      HASH_GUARD(0x61B94551FA22D290LL, contains) {
        if (count != 1) return throw_wrong_arguments("splobjectstorage::contains", count, 1, 1, 1);
        return (t_contains(a0));
      }
      break;
    case 17:
      HASH_GUARD(0x56EDB60C824E8C51LL, key) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::key", 0, 1);
        return (t_key());
      }
      break;
    case 21:
      HASH_GUARD(0x3C7D0AC0EBA9A695LL, detach) {
        if (count != 1) return throw_wrong_arguments("splobjectstorage::detach", count, 1, 1, 1);
        return (t_detach(a0), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3C6D50F3BB8102B8LL, next) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::next", 0, 1);
        return (t_next(), null);
      }
      break;
    case 28:
      HASH_GUARD(0x5B3A4A72846B21DCLL, current) {
        if (count > 0) return throw_toomany_arguments("splobjectstorage::current", 0, 1);
        return (t_current());
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke_few_args(s, hash, count, a0, a1, a2, a3, a4, a5);
}
#endif // OMIT_JUMP_TABLE_CLASS_INVOKE_splobjectstorage
#ifndef OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_splobjectstorage
Variant c_splobjectstorage::os_invoke(const char *c, const char *s, CArrRef params, int64 hash, bool fatal) {
  int count __attribute__((__unused__)) = params.size();
  return c_ObjectData::os_invoke(c, s, params, hash, fatal);
}
#endif // OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_splobjectstorage
Variant c_splobjectstorage::o_invoke_from_eval(const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  if (hash < 0) hash = hash_string_i(s);
  switch (hash & 31) {
    case 4:
      HASH_GUARD(0x6413CB5154808C44LL, valid) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("splobjectstorage::valid", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_valid());
      }
      break;
    case 10:
      HASH_GUARD(0x1670096FDE27AF6ALL, rewind) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("splobjectstorage::rewind", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_rewind(), null);
      }
      break;
    case 12:
      HASH_GUARD(0x62DD82BFEB88A4ACLL, attach) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("splobjectstorage::attach", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_attach(a0), null);
      }
      break;
    case 16:
      HASH_GUARD(0x5CEFA5A265104D10LL, count) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("splobjectstorage::count", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_count());
      }
      HASH_GUARD(0x61B94551FA22D290LL, contains) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("splobjectstorage::contains", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_contains(a0));
      }
      break;
    case 17:
      HASH_GUARD(0x56EDB60C824E8C51LL, key) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("splobjectstorage::key", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_key());
      }
      break;
    case 21:
      HASH_GUARD(0x3C7D0AC0EBA9A695LL, detach) {
        Variant a0;
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count != 1) return throw_wrong_arguments("splobjectstorage::detach", count, 1, 1, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
          if (it == params.end()) break;
          a0 = (*it)->eval(env);
          it++;
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_detach(a0), null);
      }
      break;
    case 24:
      HASH_GUARD(0x3C6D50F3BB8102B8LL, next) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("splobjectstorage::next", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_next(), null);
      }
      break;
    case 28:
      HASH_GUARD(0x5B3A4A72846B21DCLL, current) {
        const std::vector<Eval::ExpressionPtr> &params = caller->params();
        int count __attribute__((__unused__)) = params.size();
        if (count > 0) return throw_toomany_arguments("splobjectstorage::current", 0, 1);
        std::vector<Eval::ExpressionPtr>::const_iterator it = params.begin();
        do {
        } while(false);
        for (; it != params.end(); ++it) {
          (*it)->eval(env);
        }
        return (t_current());
      }
      break;
    default:
      break;
  }
  return c_ObjectData::o_invoke_from_eval(s, env, caller, hash, fatal);
}
Variant c_splobjectstorage::os_invoke_from_eval(const char *c, const char *s, Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *caller, int64 hash, bool fatal) {
  return c_ObjectData::os_invoke_from_eval(c, s, env, caller, hash, fatal);
}
struct ObjectStaticCallbacks cw_splobjectstorage = {
  c_splobjectstorage::os_getInit,
  c_splobjectstorage::os_get,
  c_splobjectstorage::os_lval,
  c_splobjectstorage::os_invoke,
  c_splobjectstorage::os_constant,
};
void c_splobjectstorage::init() {
  m_storage = SystemScalarArrays::ssa_[0];
  m_index = 0LL;
}
/* SRC: classes/splobjectstorage.php line 7 */
void c_splobjectstorage::t_rewind() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::rewind);
  x_rewind(toObject(m_storage));
} /* function */
/* SRC: classes/splobjectstorage.php line 11 */
bool c_splobjectstorage::t_valid() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::valid);
  return !same(x_key(ref(lval(m_storage))), false);
} /* function */
/* SRC: classes/splobjectstorage.php line 15 */
int64 c_splobjectstorage::t_key() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::key);
  return m_index;
} /* function */
/* SRC: classes/splobjectstorage.php line 19 */
Variant c_splobjectstorage::t_current() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::current);
  return x_current(ref(lval(m_storage)));
} /* function */
/* SRC: classes/splobjectstorage.php line 23 */
void c_splobjectstorage::t_next() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::next);
  x_next(ref(lval(m_storage)));
  m_index++;
} /* function */
/* SRC: classes/splobjectstorage.php line 28 */
int c_splobjectstorage::t_count() {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::count);
  return x_count(m_storage);
} /* function */
/* SRC: classes/splobjectstorage.php line 32 */
bool c_splobjectstorage::t_contains(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::contains);
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIterPtr iter3 = map2.begin("splobjectstorage"); !iter3->end(); iter3->next()) {
          LOOP_COUNTER_CHECK(1);
          iter3->second(v_object);
          {
            if (same(v_object, v_obj)) {
              {
                return true;
              }
            }
          }
        }
      }
    }
  }
  return false;
} /* function */
/* SRC: classes/splobjectstorage.php line 43 */
void c_splobjectstorage::t_attach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::attach);
  if ((x_is_object(v_obj) && !(t_contains(v_obj)))) {
    {
      {
        Variant tmp1((v_obj));
        m_storage.append((tmp1));
      }
    }
  }
} /* function */
/* SRC: classes/splobjectstorage.php line 49 */
void c_splobjectstorage::t_detach(CVarRef v_obj) {
  INSTANCE_METHOD_INJECTION_BUILTIN(SplObjectStorage, SplObjectStorage::detach);
  DECLARE_SYSTEM_GLOBALS(g);
  Primitive v_idx = 0;
  Variant v_object;

  if (x_is_object(v_obj)) {
    {
      {
        LOOP_COUNTER(1);
        Variant map2 = m_storage;
        for (ArrayIterPtr iter3 = map2.begin("splobjectstorage"); !iter3->end(); iter3->next()) {
          LOOP_COUNTER_CHECK(1);
          iter3->second(v_object);
          v_idx = iter3->first();
          {
            if (same(v_object, v_obj)) {
              {
                lval(m_storage).weakRemove(v_idx);
                o_root_invoke_few_args("rewind", 0x1670096FDE27AF6ALL, 0);
                return;
              }
            }
          }
        }
      }
    }
  }
} /* function */
Object co_splobjectstorage(CArrRef params, bool init /* = true */) {
  return Object((NEW(c_splobjectstorage)())->dynCreate(params, init));
}
Variant pm_php$classes$splobjectstorage_php(bool incOnce /* = false */, LVariableTable* variables /* = NULL */) {
  {
    DECLARE_SYSTEM_GLOBALS(g);
    bool &alreadyRun = g->run_pm_php$classes$splobjectstorage_php;
    if (alreadyRun) { if (incOnce) return true;}
    else alreadyRun = true;
    if (!variables) variables = g;
  }
  PSEUDOMAIN_INJECTION(run_init::classes/splobjectstorage.php);
  DECLARE_SYSTEM_GLOBALS(g);
  LVariableTable *gVariables __attribute__((__unused__)) = get_variable_table();
  return true;
} /* function */

///////////////////////////////////////////////////////////////////////////////
}
