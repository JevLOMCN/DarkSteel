// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 14

// ToString @ 14e4635a0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TBox2<float>_>::ToString
          (FString *__return_storage_ptr__,TBox2<float> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"bIsValid=%s, Min=(%s), Max=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e4636a0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TBox2<double>_>::ToString
          (FString *__return_storage_ptr__,TBox2<double> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"bIsValid=%s, Min=(%s), Max=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e463790

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TBox<float>_>::ToString
          (FString *__return_storage_ptr__,TBox<float> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"IsValid=%s, Min=(%s), Max=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e4638b0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TBox<double>_>::ToString
          (FString *__return_storage_ptr__,TBox<double> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"IsValid=%s, Min=(%s), Max=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e4639c0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TBoxSphereBounds<float,float>_>::ToString
          (FString *__return_storage_ptr__,TBoxSphereBounds<float,float> *param_1)

{
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e463ae0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TBoxSphereBounds<double,double>_>::ToString
          (FString *__return_storage_ptr__,TBoxSphereBounds<double,double> *param_1)

{
  FString local_38;
  FString local_28 [2];
  
  ::FString::PrintfImpl(local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Origin=%s, BoxExtent=(%s), SphereRadius=(%f)");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e463bf0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TIntRect<int>_>::ToString
          (FString *__return_storage_ptr__,TIntRect<int> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%d Y=%d");
  ::FString::PrintfImpl(&local_28,L"X=%d Y=%d");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Min=(%s) Max=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e463cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TIntVector3<int>_>::ToString
          (FString *__return_storage_ptr__,TIntVector3<int> *param_1)

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

// ToString @ 14e463e30

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TMatrix<float>_>::ToString
          (FString *__return_storage_ptr__,TMatrix<float> *param_1)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar1 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e464030

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TMatrix<double>_>::ToString
          (FString *__return_storage_ptr__,TMatrix<double> *param_1)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar1 = 0;
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_18,L"[%g %g %g %g] ");
  iVar2 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar2 = iVar1;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e4641d0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TSphere<float>_>::ToString
          (FString *__return_storage_ptr__,TSphere<float> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::SanitizeFloat(&local_18,(double)param_1->W,1);
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Center=(%s), Radius=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e4642b0

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<UE::Math::TSphere<double>_>::ToString
          (FString *__return_storage_ptr__,TSphere<double> *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::SanitizeFloat(&local_18,param_1->W,1);
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"Center=(%s), Radius=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14e464380

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<FOrientedBox>::ToString
          (FString *__return_storage_ptr__,FOrientedBox *param_1)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Center= %f, %f, %f | AxisX= %f, %f, %f | AxisY= %f, %f, %f | AxisZ= %f, %f, %f | Extents= %f, %f, %f"
            );
  return __return_storage_ptr__;
}

// ToString @ 14e464400

FString * __cdecl
UE::Interchange::TAttributeTypeTraitsInternal<FTwoVectors>::ToString
          (FString *__return_storage_ptr__,FTwoVectors *param_1)

{
  FString local_28;
  FString local_18;
  
  ::FString::PrintfImpl(&local_18,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(&local_28,L"X=%3.3f Y=%3.3f Z=%3.3f");
  ::FString::PrintfImpl(__return_storage_ptr__,L"V1=(%s) V2=(%s)");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

