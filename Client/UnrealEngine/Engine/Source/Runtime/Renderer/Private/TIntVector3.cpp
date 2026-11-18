// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ToString @ 1448aa970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Math::TIntVector3<int>::ToString(TIntVector3<int> *this,FString *__return_storage_ptr__)

{
  TStringBuilderBase<wchar_t> *pTVar1;
  wchar_t *pwVar2;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_138.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_118,2,"X=",2);
  pTVar1 = TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"%d");
  if (pTVar1->End < pTVar1->CurPos + 3) {
    TStringBuilderBase<wchar_t>::Extend(pTVar1,3);
  }
  pwVar2 = FGenericPlatformString::Convert<char,wchar_t>(pTVar1->CurPos,3," Y=",3);
  pTVar1->CurPos = pwVar2;
  pTVar1 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"%d");
  if (pTVar1->End < pTVar1->CurPos + 3) {
    TStringBuilderBase<wchar_t>::Extend(pTVar1,3);
  }
  pwVar2 = FGenericPlatformString::Convert<char,wchar_t>(pTVar1->CurPos,3," Z=",3);
  pTVar1->CurPos = pwVar2;
  TStringBuilderBase<wchar_t>::AppendfImpl(pTVar1,L"%d");
  ::FString::AppendChars
            (__return_storage_ptr__,local_138.Base,
             (int)((longlong)local_138.CurPos - (longlong)local_138.Base >> 1));
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return __return_storage_ptr__;
}

// TIntVector3<int><double> @ 144a43d60

TIntVector3<int> * __thiscall
UE::Math::TIntVector3<int>::TIntVector3<int><double>
          (TIntVector3<int> *this,TVector<double> *param_1)

{
  (this->field0_0x0)._s_0.X = (int)(param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = (int)(param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = (int)(param_1->field0_0x0)._s_0.Z;
  return this;
}

// operator== @ 144c1eef0

bool __thiscall
UE::Math::TIntVector3<int>::operator==(TIntVector3<int> *this,TIntVector3<int> *param_1)

{
  if ((((this->field0_0x0)._s_0.X == (param_1->field0_0x0)._s_0.X) &&
      ((this->field0_0x0)._s_0.Y == (param_1->field0_0x0)._s_0.Y)) &&
     ((this->field0_0x0)._s_0.Z == (param_1->field0_0x0)._s_0.Z)) {
    return true;
  }
  return false;
}

// TIntVector3<signed_char><__int64> @ 14546b670

TIntVector3<signed_char> * __thiscall
UE::Math::TIntVector3<signed_char>::TIntVector3<signed_char><__int64>
          (TIntVector3<signed_char> *this,TIntVector3<__int64> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TIntVector3<signed_char> *pTVar4;
  char cVar5;
  
  lVar1 = (param_1->field0_0x0)._s_0.X;
  cVar5 = (char)lVar1;
  if (lVar1 != cVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TIntVector3<signed_char> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (this->field0_0x0)._s_0.X = cVar5;
  lVar1 = (param_1->field0_0x0)._s_0.Y;
  cVar5 = (char)lVar1;
  if (lVar1 != cVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TIntVector3<signed_char> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (this->field0_0x0)._s_0.Y = cVar5;
  lVar1 = (param_1->field0_0x0)._s_0.Z;
  cVar5 = (char)lVar1;
  if (lVar1 != cVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TIntVector3<signed_char> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (this->field0_0x0)._s_0.Z = cVar5;
  return this;
}

// operator>> @ 14547ca10

TIntVector3<signed_char> __thiscall
UE::Math::TIntVector3<signed_char>::operator>>(TIntVector3<signed_char> *this,schar param_1)

{
  undefined7 in_register_00000011;
  byte in_R8B;
  
  *(schar *)CONCAT71(in_register_00000011,param_1) = (this->field0_0x0)._s_0.X >> (in_R8B & 0x1f);
  *(schar *)(CONCAT71(in_register_00000011,param_1) + 1) =
       (this->field0_0x0)._s_0.Y >> (in_R8B & 0x1f);
  *(schar *)(CONCAT71(in_register_00000011,param_1) + 2) =
       (this->field0_0x0)._s_0.Z >> (in_R8B & 0x1f);
  return (TIntVector3<signed_char>)SUB83(CONCAT71(in_register_00000011,param_1),0);
}

// operator<< @ 14547ca40

TIntVector3<__int64> * __thiscall
UE::Math::TIntVector3<__int64>::operator<<
          (TIntVector3<__int64> *this,TIntVector3<__int64> *__return_storage_ptr__,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (this->field0_0x0)._s_0.X;
  lVar2 = (this->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->field0_0x0)._s_0.Z << ((byte)param_1 & 0x3f);
  (__return_storage_ptr__->field0_0x0)._s_0.X = lVar1 << param_1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = lVar2 << param_1;
  return __return_storage_ptr__;
}

// operator- @ 14547cbf0

TIntVector3<__int64> * __thiscall
UE::Math::TIntVector3<__int64>::operator-
          (TIntVector3<__int64> *this,TIntVector3<__int64> *__return_storage_ptr__,
          TIntVector3<__int64> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = (this->field0_0x0)._s_0.Z;
  lVar2 = (this->field0_0x0)._s_0.Y;
  lVar3 = (param_1->field0_0x0)._s_0.Y;
  lVar4 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = lVar2 - lVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = lVar1 - lVar4;
  return __return_storage_ptr__;
}

