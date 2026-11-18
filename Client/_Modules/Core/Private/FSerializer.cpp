// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// BeginNode @ 14162bdb0

void __thiscall
FGPUBreadcrumbCrashData::FSerializer::BeginNode(FSerializer *this,FString *param_1,EState param_2)

{
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar2;
  wchar_t _C;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  int iVar6;
  FString *this_00;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  FScriptContainerElement local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  iVar6 = (param_1->Data).ArrayNum;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  iVar9 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar9 = 0;
  }
  ::FString::Reserve(&local_70,iVar9);
  iVar9 = (param_1->Data).ArrayNum;
  pFVar7 = (param_1->Data).AllocatorInstance.Data;
  pFVar11 = pFVar7 + (longlong)iVar9 * 2 + -2;
  if (iVar9 == 0) {
    pFVar11 = pFVar7 + (longlong)iVar9 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar7 == pFVar11) break;
    _C = *(wchar_t *)pFVar7;
    iVar6 = iswdigit(_C);
    if (iVar6 == 0) {
      ::FString::AppendChar(&local_70,_C);
    }
    pFVar7 = pFVar7 + 2;
  }
  uVar8 = local_70.Data.ArrayNum - 1;
  FVar4.Data = local_70.Data.AllocatorInstance.Data;
  if (local_70.Data.ArrayNum == 0) {
    uVar8 = 0;
    FVar4.Data = (FScriptContainerElement *)L"";
  }
  FSHA1::UpdateWithString(&this->FullHash,(wchar_t *)FVar4.Data,uVar8);
  if (param_2 == Active) {
    uVar8 = local_70.Data.ArrayNum - 1;
    FVar4.Data = local_70.Data.AllocatorInstance.Data;
    if (local_70.Data.ArrayNum == 0) {
      uVar8 = 0;
      FVar4.Data = (FScriptContainerElement *)L"";
    }
    FSHA1::UpdateWithString(&this->ActiveHash,(wchar_t *)FVar4.Data,uVar8);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  iVar9 = (this->ChildStack).ArrayNum;
  if (0 < iVar9) {
    uVar8 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar8 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->ChildStack).AllocatorInstance.Data[(longlong)(this->ChildStack).ArrayNum + -1] ==
        (FScriptContainerElement)0x0) {
      ::FString::AppendChars(&this->String,L",{",2);
      iVar9 = (this->ChildStack).ArrayNum;
      uVar10 = iVar9 - 1;
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->ChildStack).AllocatorInstance.Data[(longlong)(this->ChildStack).ArrayNum + -1] =
           (FScriptContainerElement)0x1;
    }
    else {
      ::FString::AppendChars(&this->String,L",",1);
    }
  }
  this_00 = ::FString::Replace(param_1,&local_40,L"{",L"(",IgnoreCase);
  ::FString::Replace(this_00,&local_50,L"}",L")",IgnoreCase);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_60,L"{{%s},%c");
  iVar9 = local_60.Data.ArrayNum + -1;
  if (local_60.Data.ArrayNum == 0) {
    iVar9 = 0;
  }
  ::FString::AppendChars(&this->String,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar9);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  pTVar2 = &this->ChildStack;
  local_78[0] = (FScriptContainerElement)0x0;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar7 <= local_78) && (local_78 < pFVar7 + (this->ChildStack).ArrayMax)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = (this->ChildStack).ArrayNum;
  piVar1 = &(this->ChildStack).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ChildStack).ArrayNum = iVar9 + 1;
  (pTVar2->AllocatorInstance).Data[iVar9] = local_78[0];
  return;
}

// EndNode @ 1416382f0

void __thiscall FGPUBreadcrumbCrashData::FSerializer::EndNode(FSerializer *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  if ((this->ChildStack).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildStack.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformCrashContext.cpp"
                       ,0x95,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->ChildStack).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->ChildStack).ArrayNum;
  iVar5 = iVar2 + -1;
  FVar1 = (this->ChildStack).AllocatorInstance.Data[(longlong)iVar2 + -1];
  (this->ChildStack).ArrayNum = iVar5;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,&(this->ChildStack).AllocatorInstance,iVar5,&(this->ChildStack).ArrayMax);
  if (FVar1 != (FScriptContainerElement)0x0) {
    ::FString::AppendChars(&this->String,L"}}",2);
    return;
  }
  ::FString::AppendChar(&this->String,L'}');
  return;
}

// GetResult @ 141645cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FQueueData * __thiscall
FGPUBreadcrumbCrashData::FSerializer::GetResult
          (FSerializer *this,FQueueData *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FQueueData *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_b8 [32];
  uchar local_60;
  uchar uStack_5f;
  uchar uStack_5e;
  uchar uStack_5d;
  uchar uStack_5c;
  uchar uStack_5b;
  uchar uStack_5a;
  uchar uStack_59;
  uchar uStack_58;
  uchar uStack_57;
  uchar uStack_56;
  uchar uStack_55;
  uchar uStack_54;
  uchar uStack_53;
  uchar uStack_52;
  uchar uStack_51;
  uchar local_50;
  uchar uStack_4f;
  uchar uStack_4e;
  uchar uStack_4d;
  uchar local_4c;
  uchar uStack_4b;
  uchar uStack_4a;
  uchar uStack_49;
  uchar uStack_48;
  uchar uStack_47;
  uchar uStack_46;
  uchar uStack_45;
  uchar uStack_44;
  uchar uStack_43;
  uchar uStack_42;
  uchar uStack_41;
  uchar uStack_40;
  uchar uStack_3f;
  uchar uStack_3e;
  uchar uStack_3d;
  uchar local_3c;
  uchar uStack_3b;
  uchar uStack_3a;
  uchar uStack_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->ChildStack).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChildStack.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\GenericPlatform\\GenericPlatformCrashContext.cpp"
                       ,0xa4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FQueueData *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar5 = 0;
  iVar6 = iVar5;
  if ((FSerializer *)&stack0xffffffffffffff68 != this) {
    pFVar4 = (this->String).Data.AllocatorInstance.Data;
    (this->String).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (this->String).Data.ArrayNum;
    iVar6 = (this->String).Data.ArrayMax;
    (this->String).Data.ArrayNum = 0;
    (this->String).Data.ArrayMax = 0;
  }
  FSHA1::Final(&this->FullHash);
  local_60 = '\0';
  uStack_5f = '\0';
  uStack_5e = '\0';
  uStack_5d = '\0';
  uStack_5c = '\0';
  uStack_5b = '\0';
  uStack_5a = '\0';
  uStack_59 = '\0';
  uStack_58 = '\0';
  uStack_57 = '\0';
  uStack_56 = '\0';
  uStack_55 = '\0';
  uStack_54 = '\0';
  uStack_53 = '\0';
  uStack_52 = '\0';
  uStack_51 = '\0';
  local_50 = '\0';
  uStack_4f = '\0';
  uStack_4e = '\0';
  uStack_4d = '\0';
  FSHA1::GetHash(&this->FullHash,&stack0xffffffffffffffa0);
  FSHA1::Final(&this->ActiveHash);
  local_4c = '\0';
  uStack_4b = '\0';
  uStack_4a = '\0';
  uStack_49 = '\0';
  uStack_48 = '\0';
  uStack_47 = '\0';
  uStack_46 = '\0';
  uStack_45 = '\0';
  uStack_44 = '\0';
  uStack_43 = '\0';
  uStack_42 = '\0';
  uStack_41 = '\0';
  uStack_40 = '\0';
  uStack_3f = '\0';
  uStack_3e = '\0';
  uStack_3d = '\0';
  local_3c = '\0';
  uStack_3b = '\0';
  uStack_3a = '\0';
  uStack_39 = '\0';
  FSHA1::GetHash(&this->ActiveHash,&stack0xffffffffffffffb4);
  (__return_storage_ptr__->BreadcrumbString).Data.AllocatorInstance.Data = pFVar4;
  (__return_storage_ptr__->BreadcrumbString).Data.ArrayNum = iVar5;
  (__return_storage_ptr__->BreadcrumbString).Data.ArrayMax = iVar6;
  *(undefined8 *)(__return_storage_ptr__->FullHash).Hash = _local_60;
  *(undefined8 *)((__return_storage_ptr__->FullHash).Hash + 8) = _uStack_58;
  *(undefined4 *)((__return_storage_ptr__->FullHash).Hash + 0x10) = _local_50;
  *(undefined8 *)(__return_storage_ptr__->ActiveHash).Hash = _local_4c;
  *(undefined8 *)((__return_storage_ptr__->ActiveHash).Hash + 8) = _uStack_44;
  *(undefined4 *)((__return_storage_ptr__->ActiveHash).Hash + 0x10) = _local_3c;
  return __return_storage_ptr__;
}

// Sanitize @ 1416595e0

FString * __cdecl
FGPUBreadcrumbCrashData::FSerializer::Sanitize(FString *__return_storage_ptr__,FString *param_1)

{
  FString *this;
  FString local_18;
  
  this = ::FString::Replace(param_1,&local_18,L"{",L"(",IgnoreCase);
  ::FString::Replace(this,__return_storage_ptr__,L"}",L")",IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SanitizeForHash @ 141659650

FString * __cdecl
FGPUBreadcrumbCrashData::FSerializer::SanitizeForHash
          (FString *__return_storage_ptr__,FString *param_1)

{
  wchar_t _C;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::Reserve(__return_storage_ptr__,iVar2);
  iVar2 = (param_1->Data).ArrayNum;
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 2 + -2;
  if (iVar2 == 0) {
    pFVar4 = pFVar3 + (longlong)iVar2 * 2;
  }
  while( true ) {
    if ((param_1->Data).ArrayNum != iVar2) {
      `TCheckedPointerIterator<wchar_t_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    _C = *(wchar_t *)pFVar3;
    iVar1 = iswdigit(_C);
    if (iVar1 == 0) {
      ::FString::AppendChar(__return_storage_ptr__,_C);
    }
    pFVar3 = pFVar3 + 2;
  }
  return __return_storage_ptr__;
}

