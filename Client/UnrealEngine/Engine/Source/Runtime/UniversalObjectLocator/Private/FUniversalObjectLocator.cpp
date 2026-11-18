// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 29

// StaticStruct @ 144344520

UScriptStruct * __cdecl FUniversalObjectLocator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocator.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UScriptStruct_FUniversalObjectLocator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniversalObjectLocator,(UObject *)pUVar1,
                         L"UniversalObjectLocator");
  }
  return Z_Registration_Info_UScriptStruct_FUniversalObjectLocator.OuterSingleton;
}

// FUniversalObjectLocator @ 144345ac0

FUniversalObjectLocator * __thiscall
FUniversalObjectLocator::FUniversalObjectLocator
          (FUniversalObjectLocator *this,UObject *param_1,UObject *param_2,UObject *param_3)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = &(this->Fragments).ArrayMax;
  (this->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fragments).ArrayNum = 0;
  *piVar1 = 0;
  DestructItems<FUniversalObjectLocatorFragment,int>((FUniversalObjectLocatorFragment *)0x0,0);
  (this->Fragments).ArrayNum = 0;
  if ((param_1 != (UObject *)0x0) && (bVar2 = AddFragment(this,param_1,param_2,param_3), bVar2)) {
    return this;
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data,
             (this->Fragments).ArrayNum);
  (this->Fragments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return this;
}

// FUniversalObjectLocator @ 144345b80

FUniversalObjectLocator * __thiscall
FUniversalObjectLocator::FUniversalObjectLocator(FUniversalObjectLocator *this)

{
  (this->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Fragments).ArrayNum = 0;
  (this->Fragments).ArrayMax = 0;
  return this;
}

// AddFragment @ 144346940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUniversalObjectLocator::AddFragment
          (FUniversalObjectLocator *this,UObject *param_1,UObject *param_2,UObject *param_3)

{
  int *piVar1;
  FScriptContainerElement FVar2;
  short sVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  UObject *pUVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  FFragmentType *pFVar11;
  undefined1 *puVar12;
  FInitializeResult *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  FAllocatedPayload local_90;
  FInitializeParams local_80;
  FInitializeResult local_70;
  undefined1 local_60 [31];
  FScriptContainerElement FStack_41;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar11 = UE::UniversalObjectLocator::FindBestFragmentType(param_1,param_2);
  bVar7 = false;
  if (pFVar11 != (FFragmentType *)0x0) {
    UE::UniversalObjectLocator::MakeFragmentTypeHandle((FFragmentType *)(local_60 + 0x1e));
    stack0xffffffffffffffbe = (ushort)local_60[0x1e];
    pUVar4 = (pFVar11->PayloadType).field0_0x0.DebugPtr;
    sVar3 = *(short *)((longlong)&pUVar4->_padding_ + 4);
    FUniversalObjectLocatorFragment::AllocatePayload
              ((FUniversalObjectLocatorFragment *)local_60,&local_90,
               (longlong)((int)pUVar4->_padding_ + -1 + (int)sVar3 & -(int)sVar3),(longlong)sVar3);
    (*(pFVar11->StaticBindings).FragmentDebugInitializer)(local_90.DebugVFTablePtr);
    (**(code **)(pUVar4->_padding_ + 0x2f8))(pUVar4,local_90.Payload,1);
    local_80.Object = param_1;
    local_80.Context = param_2;
    if ((stack0xffffffffffffffbe & 0x100) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsInitialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                         ,0x1e8,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
    puVar12 = local_60;
    if (((byte)FStack_41 & 2) == 0) {
      puVar12 = (undefined1 *)local_60._0_8_;
    }
    pFVar13 = (*(pFVar11->InstanceBindings).Initialize)
                        (&local_70,
                         puVar12 + ((ulonglong)(uint)(1 << ((byte)FStack_41 >> 2 & 0x1f)) &
                                   0xfffffffe),&local_80);
    pUVar6 = pFVar13->RelativeToContext;
    cVar9 = (char)*(undefined4 *)&pFVar13->Type;
    if (cVar9 == '\x02') {
      bVar7 = false;
    }
    else {
      if ((((cVar9 == '\x01') && (pUVar6 != param_2)) &&
          ((pUVar6 != (UObject *)0x0 ||
           (bVar7 = `FUniversalObjectLocator::AddFragment'::__l12::<lambda_1>::operator()(local_98),
           bVar7)))) && (param_3 != pUVar6)) {
        AddFragment(this,pUVar6,(UObject *)0x0,param_3);
      }
      iVar10 = (this->Fragments).ArrayNum;
      piVar1 = &(this->Fragments).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)this,piVar1);
      }
      bVar7 = true;
      (this->Fragments).ArrayNum = iVar10 + 1;
      pFVar14 = (this->Fragments).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
      FVar2 = pFVar14[0x1f];
      pFVar14[0x1e] = (FScriptContainerElement)local_60[0x1e];
      pFVar14[0x1f] = (FScriptContainerElement)((byte)FVar2 & 0xfe | (byte)FStack_41 & 1);
      pFVar14[0x1f] =
           (FScriptContainerElement)((byte)FVar2 & 0xfc | (byte)FStack_41 & 1 | (byte)FStack_41 & 2)
      ;
      pFVar14[0x1f] = FStack_41;
      *(undefined8 *)pFVar14 = local_60._0_8_;
      *(undefined8 *)(pFVar14 + 8) = local_60._8_8_;
      *(undefined8 *)(pFVar14 + 0x10) = local_60._16_8_;
      *(undefined4 *)(pFVar14 + 0x18) = local_60._24_4_;
      *(undefined2 *)(pFVar14 + 0x1c) = local_60._28_2_;
      FStack_41 = (FScriptContainerElement)0x0;
      stack0xffffffffffffffbe = 0xff;
    }
    if ((((byte)FStack_41 & 1) != 0) && (GIsRequestingExit == false)) {
      FUniversalObjectLocatorFragment::DestroyPayload((FUniversalObjectLocatorFragment *)local_60);
    }
  }
  return bVar7;
}

// AddFragment @ 144346b70

void __thiscall
FUniversalObjectLocator::AddFragment
          (FUniversalObjectLocator *this,FUniversalObjectLocatorFragment *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  
  iVar3 = (this->Fragments).ArrayNum;
  piVar1 = &(this->Fragments).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)this,piVar1);
  }
  (this->Fragments).ArrayNum = iVar3 + 1;
  pFVar5 = (this->Fragments).AllocatorInstance.Data + (longlong)iVar3 * 0x20;
  pFVar5[0x1e] = (FScriptContainerElement)(param_1->FragmentType).Handle;
  FVar4 = (FScriptContainerElement)
          (((byte)pFVar5[0x1f] ^ param_1->bIsInitialized) & 1 ^ (byte)pFVar5[0x1f]);
  pFVar5[0x1f] = FVar4;
  FVar4 = (FScriptContainerElement)(((byte)FVar4 ^ param_1->field_0x1f) & 2 ^ (byte)FVar4);
  pFVar5[0x1f] = FVar4;
  pFVar5[0x1f] = (FScriptContainerElement)
                 (((byte)FVar4 ^ param_1->field_0x1f) & 3 ^ param_1->field_0x1f);
  uVar2 = *(undefined8 *)(param_1->Data + 8);
  *(undefined8 *)pFVar5 = *(undefined8 *)param_1->Data;
  *(undefined8 *)(pFVar5 + 8) = uVar2;
  *(undefined8 *)(pFVar5 + 0x10) = *(undefined8 *)(param_1->Data + 0x10);
  *(undefined4 *)(pFVar5 + 0x18) = *(undefined4 *)(param_1->Data + 0x18);
  *(undefined2 *)(pFVar5 + 0x1c) = *(undefined2 *)(param_1->Data + 0x1c);
  *(undefined2 *)&param_1->FragmentType = 0xff;
  return;
}

// AsyncFind @ 144346e80

FResolveResult * __thiscall
FUniversalObjectLocator::AsyncFind
          (FUniversalObjectLocator *this,FResolveResult *__return_storage_ptr__,UObject *param_1)

{
  FResolveParams local_28;
  
  local_28.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  local_28.Flags = Async;
  local_28.Context = param_1;
  Resolve(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// AsyncLoad @ 144346ec0

FResolveResult * __thiscall
FUniversalObjectLocator::AsyncLoad
          (FUniversalObjectLocator *this,FResolveResult *__return_storage_ptr__,UObject *param_1)

{
  FResolveParams local_28;
  
  local_28.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  local_28.Flags = Async|Load;
  local_28.Context = param_1;
  Resolve(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// AsyncUnload @ 144346f00

FResolveResult * __thiscall
FUniversalObjectLocator::AsyncUnload
          (FUniversalObjectLocator *this,FResolveResult *__return_storage_ptr__,UObject *param_1)

{
  FResolveParams local_28;
  
  local_28.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  local_28.Flags = Async|Unload;
  local_28.Context = param_1;
  Resolve(this,__return_storage_ptr__,&local_28);
  return __return_storage_ptr__;
}

// ExportTextItem @ 144347680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUniversalObjectLocator::ExportTextItem
          (FUniversalObjectLocator *this,FString *param_1,FUniversalObjectLocator *param_2,
          UObject *param_3,int param_4,UObject *param_5)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  ToString(this,&local_138);
  ::FString::AppendChar(param_1,L'(');
  lVar1 = (longlong)local_138.CurPos - (longlong)local_138.Base;
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  ::FString::AppendChars(param_1,local_138.Base,(int)(lVar1 >> 1));
  ::FString::AppendChar(param_1,L')');
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return true;
}

// ForEachFragment @ 144347b30

bool __thiscall
FUniversalObjectLocator::ForEachFragment
          (FUniversalObjectLocator *this,
          TFunctionRef<bool___cdecl(int,int,FUniversalObjectLocatorFragment_const_&)> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int local_res8 [2];
  uint local_res18 [4];
  
  iVar1 = (this->Fragments).ArrayNum;
  uVar7 = 0;
  if (0 < iVar1) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Fragments).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      local_res8[0] = iVar1;
      local_res18[0] = uVar7;
      cVar5 = (**(code **)param_1)
                        (*(undefined8 *)&param_1->field_0x8,local_res18,local_res8,
                         (this->Fragments).AllocatorInstance.Data + (ulonglong)uVar7 * 0x20);
      if (cVar5 == '\0') {
        return false;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar1);
  }
  return true;
}

// FromString @ 144347bf0

FUniversalObjectLocator * __cdecl
FUniversalObjectLocator::FromString
          (FUniversalObjectLocator *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          FParseStringParams *param_2)

{
  TStringView<wchar_t> local_38;
  FParseStringResult local_28;
  
  local_38.DataPtr = param_1->DataPtr;
  local_38.Size = param_1->Size;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  (__return_storage_ptr__->Fragments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Fragments).ArrayNum = 0;
  (__return_storage_ptr__->Fragments).ArrayMax = 0;
  TryParseString(__return_storage_ptr__,&local_28,&local_38,param_2);
  if (local_28.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.ErrorMessage.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetDefaultFlags @ 144347dd0

EFragmentTypeFlags __thiscall
FUniversalObjectLocator::GetDefaultFlags(FUniversalObjectLocator *this)

{
  int iVar1;
  FFragmentType *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  EFragmentTypeFlags EVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Fragments).ArrayNum;
  EVar5 = None;
  pFVar3 = (this->Fragments).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->Fragments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FUniversalObjectLocatorFragment_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve
                       ((FFragmentTypeHandle *)(pFVar3 + 0x1e));
    if (pFVar2 != (FFragmentType *)0x0) {
      EVar5 = EVar5 | pFVar2->Flags;
    }
    pFVar3 = pFVar3 + 0x20;
  }
  return EVar5;
}

// GetLastFragment @ 144347ed0

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocator::GetLastFragment(FUniversalObjectLocator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  uint uVar5;
  
  iVar1 = (this->Fragments).ArrayNum;
  if (iVar1 == 0) {
    return (FUniversalObjectLocatorFragment *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUniversalObjectLocatorFragment *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FUniversalObjectLocatorFragment *)
         ((this->Fragments).AllocatorInstance.Data +
         (longlong)((this->Fragments).ArrayNum + -1) * 0x20);
}

// GetLastFragment @ 144347f50

FUniversalObjectLocatorFragment * __thiscall
FUniversalObjectLocator::GetLastFragment(FUniversalObjectLocator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  uint uVar5;
  
  iVar1 = (this->Fragments).ArrayNum;
  if (iVar1 == 0) {
    return (FUniversalObjectLocatorFragment *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUniversalObjectLocatorFragment *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FUniversalObjectLocatorFragment *)
         ((this->Fragments).AllocatorInstance.Data +
         (longlong)((this->Fragments).ArrayNum + -1) * 0x20);
}

// GetLastFragmentType @ 144347fd0

FFragmentType * __thiscall
FUniversalObjectLocator::GetLastFragmentType(FUniversalObjectLocator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FFragmentType *pFVar4;
  uint uVar5;
  
  iVar1 = (this->Fragments).ArrayNum;
  if (iVar1 == 0) {
    return (FFragmentType *)0x0;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFragmentType *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar4 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve
                     ((FFragmentTypeHandle *)
                      ((this->Fragments).AllocatorInstance.Data +
                      (longlong)((this->Fragments).ArrayNum + -1) * 0x20 + 0x1e));
  return pFVar4;
}

// GetLastFragmentTypeHandle @ 144348060

FFragmentTypeHandle __thiscall
FUniversalObjectLocator::GetLastFragmentTypeHandle(FUniversalObjectLocator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  FFragmentType *pFVar6;
  FRegistry *pFVar7;
  undefined1 *in_RDX;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar1 = (this->Fragments).ArrayNum;
  if (iVar1 == 0) {
    *in_RDX = 0xff;
    return (FFragmentTypeHandle)(uchar)in_RDX;
  }
  uVar5 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar5 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (FFragmentTypeHandle)uVar4;
    }
  }
  pFVar6 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve
                     ((FFragmentTypeHandle *)
                      ((this->Fragments).AllocatorInstance.Data +
                      (longlong)((this->Fragments).ArrayNum + -1) * 0x20 + 0x1e));
  if (pFVar6 == (FFragmentType *)0x0) {
    uVar9 = 0xff;
  }
  else {
    pFVar7 = UE::UniversalObjectLocator::FRegistry::Get();
    lVar8 = (longlong)pFVar6 - (longlong)(pFVar7->FragmentTypes).AllocatorInstance.Data;
    lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
    uVar9 = (lVar8 >> 4) - (lVar8 >> 0x3f);
    if (0xfe < uVar9) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentTypeOffset < std::numeric_limits<uint8>::max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                         ,0x3e,L"Maximum number of UOL FragmentTypes reached");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (FFragmentTypeHandle)uVar4;
      }
    }
    if ((char)uVar9 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InHandleOffset != 0xff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragmentTypeHandle.h"
                         ,0x1c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (FFragmentTypeHandle)uVar4;
      }
    }
  }
  *in_RDX = (char)uVar9;
  return (FFragmentTypeHandle)(uchar)in_RDX;
}

// ImportTextItem @ 144348480

bool __thiscall
FUniversalObjectLocator::ImportTextItem
          (FUniversalObjectLocator *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4,FArchive *param_5)

{
  wchar_t *pwVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  FParseStringResult *pFVar5;
  UObject *pUVar6;
  FParseStringParams local_res10 [8];
  TStringView<wchar_t> local_68;
  FParseStringResult local_58;
  FSoftObjectPath local_40;
  
  pwVar1 = *param_1;
  if ((pwVar1 != (wchar_t *)0x0) && (*pwVar1 == L'(')) {
    pwVar3 = wcschr(pwVar1,L')');
    pwVar1 = *param_1;
    if ((pwVar1 != pwVar3) && (lVar4 = (longlong)pwVar3 - (longlong)pwVar1 >> 1, lVar4 < 0x7fffffff)
       ) {
      local_68.DataPtr = pwVar1 + 1;
      local_res10[0].Flags = None;
      local_68.Size = (int)lVar4 + -1;
      pFVar5 = TryParseString(this,&local_58,&local_68,local_res10);
      bVar2 = pFVar5->bSuccess;
      if (local_58.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.ErrorMessage.TextData.Reference + 0x10))();
      }
      if (bVar2 != false) {
        *param_1 = pwVar3 + 1;
        return true;
      }
    }
  }
  local_40.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_40.AssetPath.PackageName.Number = 0;
  local_40.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_40.AssetPath.AssetName.Number = 0;
  local_40.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.SubPathString.Data.ArrayNum = 0;
  local_40.SubPathString.Data.ArrayMax = 0;
  bVar2 = FSoftObjectPath::ImportTextItem(&local_40,param_1,param_2,param_3,param_4,param_5);
  if (bVar2) {
    pUVar6 = FSoftObjectPath::ResolveObject(&local_40);
    Reset(this,pUVar6,(UObject *)0x0,(UObject *)0x0);
  }
  if (local_40.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.SubPathString.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// Reset @ 144349400

void __thiscall
FUniversalObjectLocator::Reset
          (FUniversalObjectLocator *this,UObject *param_1,UObject *param_2,UObject *param_3)

{
  int *piVar1;
  int iVar2;
  FUniversalObjectLocatorFragment *pFVar3;
  bool bVar4;
  
  piVar1 = &(this->Fragments).ArrayMax;
  pFVar3 = (FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data;
  iVar2 = (this->Fragments).ArrayNum;
  if ((this->Fragments).ArrayMax < 0) {
    DestructItems<FUniversalObjectLocatorFragment,int>(pFVar3,iVar2);
    (this->Fragments).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<FUniversalObjectLocatorFragment,int>(pFVar3,iVar2);
    (this->Fragments).ArrayNum = 0;
  }
  if ((param_1 != (UObject *)0x0) && (bVar4 = AddFragment(this,param_1,param_2,param_3), bVar4)) {
    return;
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data,
             (this->Fragments).ArrayNum);
  (this->Fragments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Reset @ 1443494e0

void __thiscall FUniversalObjectLocator::Reset(FUniversalObjectLocator *this)

{
  int *piVar1;
  
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data,
             (this->Fragments).ArrayNum);
  piVar1 = &(this->Fragments).ArrayMax;
  (this->Fragments).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// Resolve @ 144349c40

FResolveResult * __thiscall
FUniversalObjectLocator::Resolve
          (FUniversalObjectLocator *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FResolveResult *pFVar4;
  
  bVar3 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar3) || (GIsGarbageCollecting != false)) {
    plVar1 = &(__return_storage_ptr__->Value)._padding_;
    *(byte *)plVar1 = (byte)*plVar1 & 0xfc;
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  if ((param_1->Flags & (Unload|Load)) == (Unload|Load)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Load | ELocatorResolveFlags::Unload)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                       ,0x3a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FResolveResult *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (((param_1->Flags & WillWait) != None) && ((param_1->Flags & Async) == None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::WillWait) || EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Async)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                       ,0x3c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FResolveResult *)(*pcVar2)();
      return pFVar4;
    }
  }
  if ((param_1->Flags & Async) != None) {
    ResolveAsyncImpl(this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  ResolveSyncImpl(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// ResolveAsyncImpl @ 144349dc0

FResolveResult * __thiscall
FUniversalObjectLocator::ResolveAsyncImpl
          (FUniversalObjectLocator *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  int *piVar1;
  int iVar2;
  ELocatorResolveFlags EVar3;
  atomic<int> aVar4;
  FUniversalObjectLocatorFragment *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  FResolveResult *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *this_00;
  undefined1 local_res18;
  undefined7 uStack_4f;
  FResolveResultData local_48;
  
  if (((param_1->Flags & Async) == None) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAnyFlags(Params.Flags, ELocatorResolveFlags::Async)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                         ,0x90,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FResolveResult *)(*pcVar7)();
    return pFVar9;
  }
  if ((this->Fragments).ArrayNum == 0) {
    plVar6 = &(__return_storage_ptr__->Value)._padding_;
    *(byte *)plVar6 = (byte)*plVar6 & 0xfc;
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value).TypeIndex = '\0';
    return __return_storage_ptr__;
  }
  pTVar10 = ::operator_new(0x70);
  pTVar11 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    this_00 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_144349fab:
    if (((this_00->_padding_ == 0) || (*(longlong *)&this_00->SharedReferenceCount == 0)) ||
       (*(int *)(*(longlong *)&this_00->SharedReferenceCount + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00->_padding_ = (longlong)this_00;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&this_00->SharedReferenceCount) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar6 = *(longlong **)&this_00->SharedReferenceCount;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(TReferenceControllerBase<1> **)&this_00->SharedReferenceCount = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
    pTVar10 = pTVar11;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) goto LAB_144349f37;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TIntrusiveReferenceController<`FUniversalObjectLocator::ResolveAsyncImpl'::`2'::FState,1>
          ::_vftable_;
    EVar3 = param_1->Flags;
    pTVar11 = pTVar10 + 2;
    pTVar11->_padding_ = 0;
    pTVar10[1]._padding_ = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    aVar4 = (atomic<int>)(this->Fragments).ArrayNum;
    pFVar5 = (FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data;
    pTVar10[2].SharedReferenceCount = aVar4;
    if (aVar4 == (atomic<int>)0x0) {
      pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,(int)aVar4,0,(ForAnyElementType *)pTVar11,(int)aVar4,
                 (int *)&pTVar10[2].WeakReferenceCount);
      ConstructItems<FUniversalObjectLocatorFragment,FUniversalObjectLocatorFragment,int>
                ((FScriptContainerElement *)pTVar11->_padding_,pFVar5,(int)aVar4);
    }
    *(byte *)&pTVar10[5].SharedReferenceCount = *(byte *)&pTVar10[5].SharedReferenceCount & 0xfc;
    this_00 = pTVar10 + 1;
    *(undefined1 *)&pTVar10[4].SharedReferenceCount = 0;
    pTVar10[5]._padding_ = 0;
    *(undefined1 *)&pTVar10[6]._padding_ = 0;
    pTVar10[6].SharedReferenceCount = (atomic<int>)0xffffffff;
    *(ELocatorResolveFlags *)&pTVar10[6].WeakReferenceCount = EVar3;
    pTVar10[6].WeakReferenceCount.field_0x1 = 0;
    pTVar11 = pTVar10;
    if (this_00 != (TReferenceControllerBase<1> *)0x0) goto LAB_144349fab;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar9 = (FResolveResult *)(*pcVar7)();
      return pFVar9;
    }
  }
  LOCK();
  pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
  UNLOCK();
  pTVar11 = pTVar10;
LAB_144349f37:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FResolveResult *)(*pcVar7)();
    return pFVar9;
  }
  local_48._8_8_ = CONCAT71(uStack_4f,local_res18) & 0xfffffffffffffffc;
  local_48.Object = (UObject *)0x0;
  `FUniversalObjectLocator::ResolveAsyncImpl'::__l2::FState::ProcessNext(this_00,&local_48);
  if ((this_00 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar9 = (FResolveResult *)(*pcVar7)();
    return pFVar9;
  }
  TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
  ::
  TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
            (&__return_storage_ptr__->Value,
             (TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
              *)(this_00 + 4));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return __return_storage_ptr__;
}

// ResolveSyncImpl @ 14434a0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FResolveResult * __thiscall
FUniversalObjectLocator::ResolveSyncImpl
          (FUniversalObjectLocator *this,FResolveResult *__return_storage_ptr__,
          FResolveParams *param_1)

{
  byte bVar1;
  int iVar2;
  uchar uVar3;
  TFutureState<UE::UniversalObjectLocator::FResolveResultData> *pTVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  FResolveResult *pFVar8;
  FFragmentType *pFVar9;
  void *pvVar10;
  FResolveResultData *pFVar11;
  TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
  *this_00;
  code *pcVar12;
  FUniversalObjectLocatorFragment *this_01;
  ulonglong uVar13;
  ulonglong uVar14;
  UObject *pUVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  uint local_d8;
  FResolveParams *local_d0;
  longlong local_c8;
  FUniversalObjectLocator *local_c0;
  FResolveParams local_b8;
  TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
  local_a0;
  longlong local_88;
  byte bStack_80;
  undefined7 uStack_7f;
  byte local_78;
  FResolveResult local_70;
  TFutureState<UE::UniversalObjectLocator::FResolveResultData> *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d0 = param_1;
  local_c0 = this;
  if (((param_1->Flags & Async) != None) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Params.Flags, ELocatorResolveFlags::Async)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                         ,0x4c,L""), bVar6)) {
    pcVar12 = (code *)swi(3);
    pFVar8 = (FResolveResult *)(*pcVar12)();
    return pFVar8;
  }
  bVar1 = bStack_80 & 0xfc;
  uVar16 = 0;
  iVar2 = (this->Fragments).ArrayNum;
  local_88 = 0;
  local_78 = 0;
  if (iVar2 == 0) {
    (__return_storage_ptr__->Value).TypeIndex = '\0';
    (__return_storage_ptr__->Value)._padding_ = 0;
    (__return_storage_ptr__->Value)._padding_ = CONCAT71(uStack_7f,bStack_80) & 0xfffffffffffffffc;
  }
  else {
    bStack_80 = bVar1;
    if (iVar2 == 1) {
      FUniversalObjectLocatorFragment::Resolve
                ((FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data,
                 __return_storage_ptr__,local_d0);
      uVar16 = (ulonglong)local_78;
      if ((1 < local_78) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar12 = (code *)swi(3);
        pFVar8 = (FResolveResult *)(*pcVar12)();
        return pFVar8;
      }
LAB_14434a1c8:
      pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar16];
LAB_14434a659:
      if (pcVar12 !=
          UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::
          Destruct) {
        (*pcVar12)(&local_88);
      }
    }
    else {
      local_a0._padding_ = local_a0._padding_ & 0xfffffffffffffffc;
      pUVar15 = local_d0->Context;
      local_a0._padding_ = 0;
      local_a0._16_8_ = local_a0._16_8_ & 0xffffffffffffff00;
      if (0 < iVar2) {
        local_d8 = iVar2 - 1;
        uVar17 = uVar16;
        uVar14 = uVar16;
        local_c8 = (longlong)iVar2;
        do {
          iVar2 = (this->Fragments).ArrayNum;
          uVar18 = (uint)uVar14;
          uVar7 = 0;
          if ((int)uVar18 < iVar2) {
            uVar7 = ~uVar18 >> 0x1f;
          }
          if (uVar7 == 0) {
            local_e8 = (longlong)(int)uVar18;
            local_e0 = (longlong)iVar2;
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar12 = (code *)swi(3);
              pFVar8 = (FResolveResult *)(*pcVar12)();
              return pFVar8;
            }
          }
          this_01 = (FUniversalObjectLocatorFragment *)
                    ((this->Fragments).AllocatorInstance.Data + uVar16);
          local_b8.ParameterBuffer = (FResolveParameterBuffer *)0x0;
          local_b8.Flags = local_d0->Flags;
          if (uVar18 != local_d8) {
            local_b8.Flags = local_b8.Flags & ~Unload;
          }
          local_b8.Context = pUVar15;
          pFVar9 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this_01->FragmentType);
          if ((pFVar9 == (FFragmentType *)0x0) || (this_01->bIsInitialized == 0)) {
            local_70.Value._padding_._0_1_ = (byte)local_70.Value._padding_ & 0xfc;
            local_70.Value._padding_ = 0;
            local_70.Value.TypeIndex = 0;
          }
          else {
            pvVar10 = FUniversalObjectLocatorFragment::GetPayload(this_01);
            (*(pFVar9->InstanceBindings).Resolve)(&local_70,pvVar10,&local_b8);
          }
          uVar3 = local_70.Value.TypeIndex;
          local_48 = CONCAT71(local_48._1_7_,local_70.Value.TypeIndex);
          if ((1 < local_70.Value.TypeIndex) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0x105,L""), bVar6)) {
            pcVar12 = (code *)swi(3);
            pFVar8 = (FResolveResult *)(*pcVar12)();
            return pFVar8;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                      ::__l2::MoveConstructors)[uVar3])(&local_58,&local_70);
          uVar5 = local_48;
          uVar14 = uStack_50;
          pTVar4 = local_58;
          local_48 = local_a0._16_8_;
          uVar13 = local_a0._16_8_ & 0xff;
          local_a0._16_8_ = uVar5;
          local_58 = (TFutureState<UE::UniversalObjectLocator::FResolveResultData> *)
                     local_a0._padding_;
          uStack_50 = local_a0._padding_;
          local_a0._padding_ = (longlong)pTVar4;
          local_a0._padding_ = uVar14;
          if ((1 < uVar13) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar12 = (code *)swi(3);
            pFVar8 = (FResolveResult *)(*pcVar12)();
            return pFVar8;
          }
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar13])(&local_58);
          uVar14 = (ulonglong)local_70.Value.TypeIndex;
          if ((1 < local_70.Value.TypeIndex) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar6)) {
            pcVar12 = (code *)swi(3);
            pFVar8 = (FResolveResult *)(*pcVar12)();
            return pFVar8;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14] !=
              UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::
              Destruct) {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar14])(&local_70);
          }
          if ((local_b8.Flags & Unload) != None) {
            TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
            ::
            TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
                      (&__return_storage_ptr__->Value,&local_a0);
            uVar16 = local_a0._16_8_ & 0xff;
            if ((1 < local_a0.TypeIndex) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar12 = (code *)swi(3);
              pFVar8 = (FResolveResult *)(*pcVar12)();
              return pFVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16])(&local_a0);
            uVar16 = (ulonglong)local_78;
            if ((1 < local_78) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar12 = (code *)swi(3);
              pFVar8 = (FResolveResult *)(*pcVar12)();
              return pFVar8;
            }
            pcVar12 = (code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                                ::__l2::Destructors)[uVar16];
            goto LAB_14434a659;
          }
          this_00 = &local_a0;
          if (local_a0.TypeIndex != '\x01') {
            this_00 = (TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
                       *)0x0;
          }
          if (this_00 ==
              (TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
               *)0x0) {
            if ((local_a0.TypeIndex != '\0') &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index == TypeIndex",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                   ,0x97,L""), bVar6)) {
              pcVar12 = (code *)swi(3);
              pFVar8 = (FResolveResult *)(*pcVar12)();
              return pFVar8;
            }
            uVar19 = (undefined4)local_a0._padding_;
            uVar20 = local_a0._padding_._4_4_;
          }
          else {
            pFVar11 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
                                ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)
                                 this_00);
            uVar19 = *(undefined4 *)&pFVar11->Object;
            uVar20 = *(undefined4 *)((longlong)&pFVar11->Object + 4);
          }
          pUVar15 = (UObject *)CONCAT44(uVar20,uVar19);
          if (pUVar15 == (UObject *)0x0) {
            uVar16 = (ulonglong)local_78;
            (__return_storage_ptr__->Value).TypeIndex = local_78;
            if ((1 < local_78) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0x105,L""), bVar6)) {
              pcVar12 = (code *)swi(3);
              pFVar8 = (FResolveResult *)(*pcVar12)();
              return pFVar8;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                          ::__l2::MoveConstructors)[uVar16] ==
                UE::Core::Private::
                TMoveConstructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Construct) {
              (__return_storage_ptr__->Value)._padding_ = local_88;
              (__return_storage_ptr__->Value)._padding_ = CONCAT71(uStack_7f,bStack_80);
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                          ::__l2::MoveConstructors)[uVar16])(__return_storage_ptr__,&local_88);
            }
            uVar16 = local_a0._16_8_ & 0xff;
            if ((1 < local_a0.TypeIndex) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar12 = (code *)swi(3);
              pFVar8 = (FResolveResult *)(*pcVar12)();
              return pFVar8;
            }
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar16])(&local_a0);
            uVar16 = (ulonglong)local_78;
            if ((1 < local_78) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar6)) {
              pcVar12 = (code *)swi(3);
              pFVar8 = (FResolveResult *)(*pcVar12)();
              return pFVar8;
            }
            goto LAB_14434a1c8;
          }
          uVar14 = (ulonglong)(uVar18 + 1);
          uVar17 = uVar17 + 1;
          uVar16 = uVar16 + 0x20;
          this = local_c0;
        } while ((longlong)uVar17 < local_c8);
      }
      TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
      ::
      TVariant<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>
                (&__return_storage_ptr__->Value,&local_a0);
      uVar16 = local_a0._16_8_ & 0xff;
      if ((1 < local_a0.TypeIndex) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar12 = (code *)swi(3);
        pFVar8 = (FResolveResult *)(*pcVar12)();
        return pFVar8;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(&local_a0);
      uVar16 = (ulonglong)local_78;
      if ((1 < local_78) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar12 = (code *)swi(3);
        pFVar8 = (FResolveResult *)(*pcVar12)();
        return pFVar8;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(&local_88);
    }
  }
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 14434a9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUniversalObjectLocator::SerializeFromMismatchedTag
          (FUniversalObjectLocator *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  int *piVar1;
  int *piVar2;
  FName FVar3;
  FUniversalObjectLocatorFragment *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FNameEntryId FVar9;
  int iVar10;
  undefined4 extraout_var;
  FName FVar11;
  undefined8 *****pppppuVar12;
  FScriptContainerElement FVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  size_t _Size;
  FScriptContainerElement *pFVar16;
  ForAnyElementType *pFVar17;
  undefined1 auStackY_118 [32];
  FPropertyTypeName local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  FScriptContainerElement *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  FUtf8String local_98;
  undefined1 local_88 [4];
  uint local_84;
  uint local_80;
  undefined8 ****local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  TFragmentTypeHandle<FDirectPathObjectLocator> local_5a;
  byte local_59;
  undefined8 ****local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  TFragmentTypeHandle<FDirectPathObjectLocator> local_3a;
  byte local_39;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_SoftObjectPath,"SoftObjectPath");
    _Init_thread_footer(&::_TSS0);
  }
  FVar3 = param_1->Type;
  FVar9 = FNameEntryId::FromValidEName((EName)local_88);
  FVar11.Number = 0;
  FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar9.Value);
  if (FVar3 == FVar11) {
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_b0 = 0;
    uStack_a0 = 0;
    local_a8 = 0;
    FUtf8String::Reset(&local_98,0);
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x148))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_b0);
    piVar1 = &(this->Fragments).ArrayMax;
    pFVar4 = (FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data;
    iVar10 = (this->Fragments).ArrayNum;
    if ((this->Fragments).ArrayMax < 1) {
      DestructItems<FUniversalObjectLocatorFragment,int>(pFVar4,iVar10);
      (this->Fragments).ArrayNum = 0;
      if (*piVar1 != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,(ForAnyElementType *)this,0,piVar1);
      }
    }
    else {
      DestructItems<FUniversalObjectLocatorFragment,int>(pFVar4,iVar10);
      (this->Fragments).ArrayNum = 0;
    }
    local_5a = FDirectPathObjectLocator::FragmentType;
    local_59 = local_59 & 2;
    if ((FDirectPathObjectLocator::FragmentType ==
         (TFragmentTypeHandle<FDirectPathObjectLocator>)0xff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                           ,0x17c,
                           L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (((local_59 & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                           ,0x1fa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_59 = local_59 | 1;
    for (lVar5 = 0x3f; 0xfUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
    local_84 = (uint)lVar5;
    if ((0x3f < local_84) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeaderCapacityLog2 <= 63",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                           ,0x5c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_59 = (byte)lVar5 << 2 | local_59 & 3;
    uVar15 = ((ulonglong)(uint)(1 << ((byte)lVar5 & 0x1f)) & 0xfffffffe) + 0x20;
    if (uVar15 < 0x1f) {
      local_59 = local_59 | 2;
      pppppuVar12 = &local_78;
    }
    else {
      pppppuVar12 = FMemory::Malloc(uVar15,8);
      local_59 = local_59 & 0xfd;
      local_78 = pppppuVar12;
    }
    FVar14.Data = local_98.Data.AllocatorInstance.Data;
    uVar15 = (ulonglong)(uint)(1 << (local_59 >> 2 & 0x1f)) & 0xfffffffe;
    pFVar17 = (ForAnyElementType *)((longlong)pppppuVar12 + uVar15 + 0x10);
    *(undefined ***)((uVar15 - 8) + (longlong)pppppuVar12) =
         &___7__TFragmentPayload_UFDirectPathObjectLocator___UniversalObjectLocator_UE__6B_;
    *(undefined8 *)(uVar15 + (longlong)pppppuVar12) = local_a8;
    ((undefined8 *)(uVar15 + (longlong)pppppuVar12))[1] = uStack_a0;
    pFVar17->Data = (FScriptContainerElement *)0x0;
    piVar2 = (int *)((longlong)&pFVar17[1].Data + 4);
    _Size = (size_t)local_98.Data.ArrayNum;
    *(int *)&pFVar17[1].Data = local_98.Data.ArrayNum;
    if (local_98.Data.ArrayNum == 0) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_98.Data.ArrayNum,0,pFVar17,local_98.Data.ArrayNum,piVar2);
      memcpy(pFVar17->Data,FVar14.Data,_Size);
    }
    iVar10 = (this->Fragments).ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)this,piVar1);
    }
    (this->Fragments).ArrayNum = iVar10 + 1;
    pFVar16 = (this->Fragments).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
    *(TFragmentTypeHandle<FDirectPathObjectLocator> *)(pFVar16 + 0x1e) = local_5a;
    FVar13 = (FScriptContainerElement)((local_59 ^ (byte)pFVar16[0x1f]) & 1 ^ (byte)pFVar16[0x1f]);
    pFVar16[0x1f] = FVar13;
    FVar13 = (FScriptContainerElement)(((byte)FVar13 ^ local_59) & 2 ^ (byte)FVar13);
    pFVar16[0x1f] = FVar13;
    pFVar16[0x1f] = (FScriptContainerElement)((local_59 ^ (byte)FVar13) & 3 ^ local_59);
    *(undefined8 *****)pFVar16 = local_78;
    *(undefined8 *)(pFVar16 + 8) = uStack_70;
    *(undefined8 *)(pFVar16 + 0x10) = local_68;
    *(undefined4 *)(pFVar16 + 0x18) = local_60;
    *(undefined2 *)(pFVar16 + 0x1c) = local_5c;
    FVar14.Data = local_98.Data.AllocatorInstance.Data;
  }
  else {
    local_d8[0].Index = (param_1->TypeName).Index;
    bVar7 = UE::FPropertyTypeName::IsStruct(local_d8,NAME_SoftObjectPath);
    if (!bVar7) {
      return false;
    }
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = (FScriptContainerElement *)0x0;
    local_b8 = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x140))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_d0);
    piVar1 = &(this->Fragments).ArrayMax;
    pFVar4 = (FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data;
    iVar10 = (this->Fragments).ArrayNum;
    if ((this->Fragments).ArrayMax < 1) {
      DestructItems<FUniversalObjectLocatorFragment,int>(pFVar4,iVar10);
      (this->Fragments).ArrayNum = 0;
      if (*piVar1 != 1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,(ForAnyElementType *)this,0,piVar1);
      }
    }
    else {
      DestructItems<FUniversalObjectLocatorFragment,int>(pFVar4,iVar10);
      (this->Fragments).ArrayNum = 0;
    }
    local_3a = FDirectPathObjectLocator::FragmentType;
    local_39 = local_39 & 2;
    if ((FDirectPathObjectLocator::FragmentType ==
         (TFragmentTypeHandle<FDirectPathObjectLocator>)0xff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHandle",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                           ,0x17c,
                           L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (((local_39 & 1) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bIsInitialized",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                           ,0x1fa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_39 = local_39 | 1;
    for (lVar5 = 0x3f; 0xfUL >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
    local_80 = (uint)lVar5;
    if ((0x3f < local_80) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeaderCapacityLog2 <= 63",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                           ,0x5c,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_39 = (byte)lVar5 << 2 | local_39 & 3;
    uVar15 = ((ulonglong)(uint)(1 << ((byte)lVar5 & 0x1f)) & 0xfffffffe) + 0x20;
    if (uVar15 < 0x1f) {
      local_39 = local_39 | 2;
      pppppuVar12 = &local_58;
    }
    else {
      pppppuVar12 = FMemory::Malloc(uVar15,8);
      local_39 = local_39 & 0xfd;
      local_58 = pppppuVar12;
    }
    uVar15 = (ulonglong)(uint)(1 << (local_39 >> 2 & 0x1f)) & 0xfffffffe;
    *(undefined ***)((uVar15 - 8) + (longlong)pppppuVar12) =
         &___7__TFragmentPayload_UFDirectPathObjectLocator___UniversalObjectLocator_UE__6B_;
    *(undefined8 *)(uVar15 + (longlong)pppppuVar12) = local_d0;
    ((undefined8 *)(uVar15 + (longlong)pppppuVar12))[1] = uStack_c8;
    *(undefined8 *)(uVar15 + 0x10 + (longlong)pppppuVar12) = 0;
    *(FScriptContainerElement **)(uVar15 + 0x10 + (longlong)pppppuVar12) = local_c0;
    local_c0 = (FScriptContainerElement *)0x0;
    *(undefined4 *)(uVar15 + 0x18 + (longlong)pppppuVar12) = (undefined4)local_b8;
    *(undefined4 *)(uVar15 + 0x1c + (longlong)pppppuVar12) = local_b8._4_4_;
    iVar10 = (this->Fragments).ArrayNum;
    local_b8 = 0;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,(ForAnyElementType *)this,piVar1);
    }
    (this->Fragments).ArrayNum = iVar10 + 1;
    pFVar16 = (this->Fragments).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
    *(TFragmentTypeHandle<FDirectPathObjectLocator> *)(pFVar16 + 0x1e) = local_3a;
    FVar13 = (FScriptContainerElement)((local_39 ^ (byte)pFVar16[0x1f]) & 1 ^ (byte)pFVar16[0x1f]);
    pFVar16[0x1f] = FVar13;
    FVar13 = (FScriptContainerElement)(((byte)FVar13 ^ local_39) & 2 ^ (byte)FVar13);
    pFVar16[0x1f] = FVar13;
    pFVar16[0x1f] = (FScriptContainerElement)((local_39 ^ (byte)FVar13) & 3 ^ local_39);
    *(undefined8 *****)pFVar16 = local_58;
    *(undefined8 *)(pFVar16 + 8) = uStack_50;
    *(undefined8 *)(pFVar16 + 0x10) = local_48;
    *(undefined4 *)(pFVar16 + 0x18) = local_40;
    *(undefined2 *)(pFVar16 + 0x1c) = local_3c;
    FVar14.Data = local_c0;
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return true;
}

// SyncFind @ 14434af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __thiscall
FUniversalObjectLocator::SyncFind(FUniversalObjectLocator *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FResolveResultData *pFVar4;
  FResolveResult *this_00;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  FResolveParams local_58;
  UObject *local_40;
  undefined8 uStack_38;
  FResolveResult local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  local_58.Flags = None;
  local_58.Context = param_1;
  bVar2 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar2) || (GIsGarbageCollecting != false)) {
    local_30.Value._padding_._0_1_ = (byte)local_30.Value._padding_ & 0xfc;
    local_30.Value._padding_ = 0;
    local_30.Value.TypeIndex = 0;
  }
  else {
    if (((local_58.Flags & (Unload|Load)) == (Unload|Load)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Load | ELocatorResolveFlags::Unload)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((((local_58.Flags & WillWait) != None) && ((local_58.Flags & Async) == None)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::WillWait) || EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Async)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((local_58.Flags & Async) == None) {
      ResolveSyncImpl(this,&local_30,&local_58);
    }
    else {
      ResolveAsyncImpl(this,&local_30,&local_58);
    }
  }
  this_00 = &local_30;
  if (local_30.Value.TypeIndex != 1) {
    this_00 = (FResolveResult *)0x0;
  }
  if (this_00 == (FResolveResult *)0x0) {
    pUVar3 = (UObject *)local_30.Value._padding_;
    if ((local_30.Value.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), pUVar3 = (UObject *)local_30.Value._padding_, bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  else {
    pFVar4 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
                       ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)this_00);
    local_40 = pFVar4->Object;
    uStack_38 = *(undefined8 *)&pFVar4->Flags;
    pUVar3 = local_40;
  }
  uVar5 = (ulonglong)local_30.Value.TypeIndex;
  if ((1 < local_30.Value.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_30);
  }
  return pUVar3;
}

// SyncLoad @ 14434b120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UObject * __thiscall
FUniversalObjectLocator::SyncLoad(FUniversalObjectLocator *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FResolveResultData *pFVar4;
  FResolveResult *this_00;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  FResolveParams local_58;
  UObject *local_40;
  undefined8 uStack_38;
  FResolveResult local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.Flags = Load;
  local_58.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  local_58.Context = param_1;
  bVar2 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar2) || (GIsGarbageCollecting != false)) {
    local_30.Value._padding_._0_1_ = (byte)local_30.Value._padding_ & 0xfc;
    local_30.Value._padding_ = 0;
    local_30.Value.TypeIndex = 0;
  }
  else {
    if (((local_58.Flags & (Unload|Load)) == (Unload|Load)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Load | ELocatorResolveFlags::Unload)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((((local_58.Flags & WillWait) != None) && ((local_58.Flags & Async) == None)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::WillWait) || EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Async)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                           ,0x3c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
    if ((local_58.Flags & Async) == None) {
      ResolveSyncImpl(this,&local_30,&local_58);
    }
    else {
      ResolveAsyncImpl(this,&local_30,&local_58);
    }
  }
  this_00 = &local_30;
  if (local_30.Value.TypeIndex != 1) {
    this_00 = (FResolveResult *)0x0;
  }
  if (this_00 == (FResolveResult *)0x0) {
    pUVar3 = (UObject *)local_30.Value._padding_;
    if ((local_30.Value.TypeIndex != 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), pUVar3 = (UObject *)local_30.Value._padding_, bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UObject *)(*pcVar1)();
      return pUVar3;
    }
  }
  else {
    pFVar4 = TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
                       ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)this_00);
    local_40 = pFVar4->Object;
    uStack_38 = *(undefined8 *)&pFVar4->Flags;
    pUVar3 = local_40;
  }
  uVar5 = (ulonglong)local_30.Value.TypeIndex;
  if ((1 < local_30.Value.TypeIndex) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UObject *)(*pcVar1)();
    return pUVar3;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5] !=
      UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar5])(&local_30);
  }
  return pUVar3;
}

// SyncUnload @ 14434b2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUniversalObjectLocator::SyncUnload(FUniversalObjectLocator *this,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FResolveResult *this_00;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  FResolveParams local_48;
  FResolveResult local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_48.Flags = Unload;
  local_48.ParameterBuffer = (FResolveParameterBuffer *)0x0;
  local_48.Context = param_1;
  bVar2 = UE::IsSavingPackage((UObject *)0x0);
  if ((bVar2) || (GIsGarbageCollecting != false)) {
    local_30.Value._padding_._0_1_ = (byte)local_30.Value._padding_ & 0xfc;
    local_30.Value._padding_ = 0;
    local_30.Value.TypeIndex = 0;
  }
  else {
    if ((local_48.Flags & (Unload|Load)) == (Unload|Load)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Load | ELocatorResolveFlags::Unload)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                         ,0x3a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (((local_48.Flags & WillWait) != None) && ((local_48.Flags & Async) == None)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::WillWait) || EnumHasAllFlags(Params.Flags, ELocatorResolveFlags::Async)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocator.cpp"
                         ,0x3c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((local_48.Flags & Async) == None) {
      ResolveSyncImpl(this,&local_30,&local_48);
    }
    else {
      ResolveAsyncImpl(this,&local_30,&local_48);
    }
  }
  this_00 = &local_30;
  if (local_30.Value.TypeIndex != 1) {
    this_00 = (FResolveResult *)0x0;
  }
  if (this_00 == (FResolveResult *)0x0) {
    if (local_30.Value.TypeIndex != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    TFutureBase<UE::UniversalObjectLocator::FResolveResultData>::Get
              ((TFutureBase<UE::UniversalObjectLocator::FResolveResultData> *)this_00);
  }
  uVar3 = (ulonglong)local_30.Value.TypeIndex;
  if (1 < local_30.Value.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3] !=
      UE::Core::Private::TDestructorCaller<UE::UniversalObjectLocator::FResolveResultData>::Destruct
     ) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::UniversalObjectLocator::FResolveResultData,TFuture<UE::UniversalObjectLocator::FResolveResultData>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar3])(&local_30);
  }
  return;
}

// ToString @ 14434b750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniversalObjectLocator::ToString
          (FUniversalObjectLocator *this,TStringBuilderBase<wchar_t> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FFragmentType *pFVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_168.bIsDynamic = false;
  local_168.bIsExternal = false;
  local_168.Base = local_148;
  local_168.CurPos = local_148;
  local_168.End = (wchar_t *)local_48;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (param_1,UE::UniversalObjectLocator::MagicLeadingString.DataPtr,7);
  iVar6 = (this->Fragments).ArrayNum;
  iVar7 = 0;
  iVar10 = 0;
  uVar8 = 0;
  if (0 < iVar6) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar6) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_170 = (longlong)iVar6;
        local_178 = (longlong)(int)uVar8;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar5 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve
                         ((FFragmentTypeHandle *)
                          ((this->Fragments).AllocatorInstance.Data +
                          (longlong)(int)uVar8 * 0x20 + 0x1e));
      if (pFVar5 != (FFragmentType *)0x0) {
        if (iVar7 != 0) {
          if (param_1->End < param_1->CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(param_1,1);
          }
          *param_1->CurPos = L'/';
          param_1->CurPos = param_1->CurPos + 1;
        }
        ::FName::AppendString(&pFVar5->FragmentTypeID,param_1);
        iVar7 = iVar7 + 1;
      }
      iVar6 = (this->Fragments).ArrayNum;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar6);
    if (iVar7 != 0) {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"?",1);
      iVar6 = (this->Fragments).ArrayNum;
      uVar8 = 0;
      if (0 < iVar6) {
        lVar11 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar8 < iVar6) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if (uVar4 == 0) {
            local_170 = (longlong)iVar6;
            local_178 = (longlong)(int)uVar8;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          pFVar9 = (this->Fragments).AllocatorInstance.Data + lVar11;
          pFVar5 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve
                             ((FFragmentTypeHandle *)(pFVar9 + 0x1e));
          if ((pFVar5 != (FFragmentType *)0x0) &&
             ((pFVar5->PayloadType).field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
            if (iVar10 != 0) {
              if (param_1->End < param_1->CurPos + 1) {
                TStringBuilderBase<wchar_t>::Extend(param_1,1);
              }
              *param_1->CurPos = L'&';
              param_1->CurPos = param_1->CurPos + 1;
            }
            local_168.CurPos = local_168.Base;
            if ((((byte)pFVar9[0x1f] & 1) == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("bIsInitialized",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorFragment.cpp"
                                   ,0x1f0,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = pFVar9 + 0x1f;
            if (((byte)*pFVar1 & 2) == 0) {
              pFVar9 = *(FScriptContainerElement **)pFVar9;
            }
            UE::UniversalObjectLocator::FFragmentType::ToString
                      (pFVar5,pFVar9 + ((ulonglong)(uint)(1 << ((byte)*pFVar1 >> 2 & 0x1f)) &
                                       0xfffffffe),&local_168);
            if ((int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1) != 0) {
              TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"payload%i=");
              TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                        (param_1,local_168.Base,
                         (int)((longlong)local_168.CurPos - (longlong)local_168.Base >> 1));
            }
            iVar10 = iVar10 + 1;
          }
          iVar6 = (this->Fragments).ArrayNum;
          uVar8 = uVar8 + 1;
          lVar11 = lVar11 + 0x20;
        } while ((int)uVar8 < iVar6);
      }
      goto LAB_14434ba25;
    }
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(param_1,L"none",4);
LAB_14434ba25:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
  return;
}

// TryParseString @ 14434c320

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FParseStringResult * __thiscall
FUniversalObjectLocator::TryParseString
          (FUniversalObjectLocator *this,FParseStringResult *__return_storage_ptr__,
          TStringView<wchar_t> *param_1,FParseStringParams *param_2)

{
  int *piVar1;
  wchar_t _C;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FParseStringResult *pFVar13;
  FText *pFVar14;
  FText *pFVar15;
  FTextFormat *pFVar16;
  FFragmentType *pFVar17;
  FText *pFVar18;
  uint uVar19;
  FName *pFVar20;
  char cVar21;
  uint uVar22;
  FUniversalObjectLocatorFragment *this_00;
  int iVar23;
  wchar_t *pwVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  FParseStringResult local_3a8;
  FUniversalObjectLocator local_390;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_380;
  int local_370;
  wchar_t *local_368;
  int iStack_360;
  undefined4 uStack_35c;
  wchar_t *local_358;
  int iStack_350;
  undefined4 uStack_34c;
  FName local_348 [2];
  wchar_t *local_338;
  int iStack_330;
  undefined4 uStack_32c;
  undefined1 local_324 [4];
  undefined1 local_320 [4];
  undefined1 local_31c [8];
  FName local_314;
  undefined1 local_30c [4];
  wchar_t *local_308;
  int iStack_300;
  undefined4 uStack_2fc;
  FParseStringResult local_2f8;
  FParseStringResult local_2e0;
  wchar_t *local_2c8;
  undefined8 uStack_2c0;
  wchar_t *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  undefined8 uStack_2a0;
  wchar_t *local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  int iStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  undefined8 uStack_270;
  wchar_t *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FTextFormat local_248;
  FText local_238;
  FFormatArgumentValue local_228;
  undefined4 local_208;
  FText local_1f8;
  TStringView<wchar_t> local_1e8;
  TStringView<wchar_t> local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  TArrayView<wchar_t_const_,int> local_198;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  TArrayView<wchar_t_const_,int> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FText local_98;
  FTextFormat local_88;
  TStringView<wchar_t> local_78;
  FText local_68 [2];
  
  bVar25 = false;
  FText::FText(&local_3a8.ErrorMessage);
  local_3a8.NumCharsParsed = 0;
  local_3a8.bSuccess = false;
  iVar9 = param_1->Size;
  if (7 < param_1->Size) {
    iVar9 = 7;
  }
  local_c8 = UE::UniversalObjectLocator::MagicLeadingString;
  iVar10 = 0;
  if (0 < iVar9) {
    iVar10 = iVar9;
  }
  if ((iVar10 == 7) &&
     (iVar9 = FGenericPlatformStricmp::Strnicmp
                        (UE::UniversalObjectLocator::MagicLeadingString.DataPtr,param_1->DataPtr,7),
     iVar9 == 0)) {
    local_2c8 = param_1->DataPtr;
    uStack_2c0 = *(undefined8 *)&param_1->Size;
    iVar9 = (int)*(undefined8 *)&param_1->Size;
    if ((iVar9 < 7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumToProgress <= CurrentString.Len()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorStringParams.cpp"
                           ,0xb,L"Attempting to progress past the end of the current string!"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FParseStringResult *)(*pcVar4)();
      return pFVar13;
    }
    local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + 7;
    iVar10 = iVar9;
    if (iVar9 + -7 < iVar9) {
      iVar10 = iVar9 + -7;
    }
    iStack_360 = 0;
    if (0 < iVar10) {
      iStack_360 = iVar10;
    }
    local_368 = local_2c8 + ((longlong)iVar9 - (longlong)iStack_360);
    param_1->DataPtr = local_368;
    *(ulonglong *)&param_1->Size = CONCAT44(uStack_35c,iStack_360);
    iVar9 = param_1->Size;
    if (iVar9 != 0) {
      iVar10 = 4;
      if (iVar9 < 4) {
        iVar10 = iVar9;
      }
      iVar10 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,L"none",(longlong)iVar10);
      if ((iVar10 == 0) && (iVar9 == 4)) {
        DestructItems<FUniversalObjectLocatorFragment,int>
                  ((FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data,
                   (this->Fragments).ArrayNum);
        piVar1 = &(this->Fragments).ArrayMax;
        (this->Fragments).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)this,0,piVar1);
        }
        local_3a8.bSuccess = true;
        UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                  (__return_storage_ptr__,&local_3a8);
      }
      else {
        local_390.Fragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_390.Fragments.ArrayNum = 0;
        local_390.Fragments.ArrayMax = 0;
        do {
          if (bVar25) goto joined_r0x00014434c961;
          local_d8.DataPtr = param_1->DataPtr;
          local_d8.Size = param_1->Size;
          local_d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
          local_2b8 = L"/?#";
          uStack_2b0 = 3;
          local_e8._12_4_ = uStack_2ac;
          local_e8.ArrayNum = 3;
          local_e8.DataPtr = L"/?#";
          iVar10 = UE::String::FindFirstOfAnyChar(&local_d8,&local_e8,CaseSensitive,(int *)0x0);
          local_308 = param_1->DataPtr;
          iStack_300 = param_1->Size;
          uStack_2fc = *(undefined4 *)&param_1->field_0xc;
          if (iVar10 == -1) {
            local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + iVar9;
            param_1->DataPtr = (wchar_t *)0x0;
            param_1->Size = 0;
LAB_14434c778:
            iVar9 = local_390.Fragments.ArrayNum;
            if (local_390.Fragments.ArrayNum == local_390.Fragments.ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,(ForAnyElementType *)&local_390,&local_390.Fragments.ArrayMax
                                );
            }
            local_390.Fragments.ArrayNum = iVar9 + 1;
            local_1e8.DataPtr = local_308;
            local_1e8.Size = iStack_300;
            local_1e8._12_4_ = uStack_2fc;
            *(undefined2 *)
             &((FUniversalObjectLocatorFragment *)
              (local_390.Fragments.AllocatorInstance.Data + (longlong)iVar9 * 0x20))->FragmentType =
                 0xff;
            FUniversalObjectLocatorFragment::TryParseFragmentType
                      ((FUniversalObjectLocatorFragment *)
                       (local_390.Fragments.AllocatorInstance.Data + (longlong)iVar9 * 0x20),
                       &local_2f8,&local_1e8,param_2);
            local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + local_2f8.NumCharsParsed;
            if (local_2f8.bSuccess == false) {
              bVar25 = (param_2->Flags & ErrorMessaging) == None;
              if (bVar25) {
                pFVar14 = FText::FText(&local_1c8);
              }
              else {
                local_1d8.DataPtr = local_308;
                local_1d8.Size = iStack_300;
                local_1d8._12_4_ = uStack_2fc;
                pFVar14 = FText::FromStringView(&local_98,&local_1d8);
                pFVar15 = FText::AsLocalizable_Advanced_LocText
                                    (&local_1a8,L"UOL",L"Error_InvalidFragmentType",
                                     L"Fragment Type specifier is invalid: {0}.");
                pFVar16 = FTextFormat::FTextFormat(&local_88,pFVar15,Default);
                pFVar14 = FText::Format<FText>(&local_1b8,pFVar16,pFVar14);
              }
              bVar7 = FText::IsEmpty(pFVar14);
              TVar6.Reference = local_3a8.ErrorMessage.TextData.Reference;
              if (!bVar7) {
                pIVar2 = (pFVar14->TextData).Reference;
                if (local_3a8.ErrorMessage.TextData.Reference != pIVar2) {
                  local_3a8.ErrorMessage.TextData.Reference = pIVar2;
                  if (pIVar2 != (ITextData *)0x0) {
                    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_320);
                  }
                  if (TVar6.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
                  }
                }
                local_3a8.ErrorMessage.Flags = pFVar14->Flags;
              }
              local_3a8.bSuccess = false;
              UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                        (__return_storage_ptr__,&local_3a8);
              if ((bVar25) && (local_1c8.TextData.Reference != (ITextData *)0x0)) {
                (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
              }
              if ((!bVar25) && (local_1b8.TextData.Reference != (ITextData *)0x0)) {
                (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
              }
              local_2e0.ErrorMessage.TextData.Reference = local_2f8.ErrorMessage.TextData.Reference;
              if ((!bVar25) && (local_1a8.TextData.Reference != (ITextData *)0x0)) {
                (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
                local_2e0.ErrorMessage.TextData.Reference =
                     local_2f8.ErrorMessage.TextData.Reference;
              }
              goto LAB_14434c92e;
            }
            if (local_2f8.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_2f8.ErrorMessage.TextData.Reference + 0x10))();
            }
          }
          else {
            if (((iVar10 < 0) || (iVar9 <= iVar10)) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index >= 0 && Index < Size",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                    ,0x234,
                                    L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                   ), bVar25)) {
              pcVar4 = (code *)swi(3);
              pFVar13 = (FParseStringResult *)(*pcVar4)();
              return pFVar13;
            }
            local_368 = param_1->DataPtr;
            iVar9 = param_1->Size;
            bVar25 = local_368[iVar10] == L'?';
            iVar11 = iVar9;
            if (iVar10 < iVar9) {
              iVar11 = iVar10;
            }
            iVar23 = 0;
            if (0 < iVar11) {
              iVar23 = iVar11;
            }
            uStack_2fc = uStack_35c;
            iStack_300 = iVar23;
            iStack_360 = iVar23;
            local_308 = local_368;
            if (((iVar10 < 0) || (iVar9 <= iVar10)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index >= 0 && Index < Size",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                                   ,0x234,
                                   L"Index out of bounds on StringView: index %i on a view with a length of %i"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              pFVar13 = (FParseStringResult *)(*pcVar4)();
              return pFVar13;
            }
            if (param_1->DataPtr[iVar10] == L'#') {
              local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + iVar10;
              param_1->DataPtr = (wchar_t *)0x0;
              param_1->Size = 0;
            }
            else {
              local_2a8 = param_1->DataPtr;
              uStack_2a0 = *(undefined8 *)&param_1->Size;
              iVar10 = iVar10 + 1;
              iVar9 = (int)*(undefined8 *)&param_1->Size;
              if ((iVar9 < iVar10) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("NumToProgress <= CurrentString.Len()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorStringParams.cpp"
                                     ,0xb,
                                     L"Attempting to progress past the end of the current string!"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                pFVar13 = (FParseStringResult *)(*pcVar4)();
                return pFVar13;
              }
              local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + iVar10;
              iVar11 = iVar9;
              if (iVar9 - iVar10 < iVar9) {
                iVar11 = iVar9 - iVar10;
              }
              iStack_350 = 0;
              if (0 < iVar11) {
                iStack_350 = iVar11;
              }
              local_358 = local_2a8 + ((longlong)iVar9 - (longlong)iStack_350);
              param_1->DataPtr = local_358;
              *(ulonglong *)&param_1->Size = CONCAT44(uStack_34c,iStack_350);
            }
            if (iVar23 != 0) goto LAB_14434c778;
          }
          iVar9 = param_1->Size;
        } while (iVar9 != 0);
LAB_14434cd7d:
        if (this != &local_390) {
          DestructItems<FUniversalObjectLocatorFragment,int>
                    ((FUniversalObjectLocatorFragment *)(this->Fragments).AllocatorInstance.Data,
                     (this->Fragments).ArrayNum);
          pFVar3 = (this->Fragments).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (this->Fragments).AllocatorInstance.Data = local_390.Fragments.AllocatorInstance.Data;
          (this->Fragments).ArrayNum = local_390.Fragments.ArrayNum;
          (this->Fragments).ArrayMax = local_390.Fragments.ArrayMax;
          local_390.Fragments.ArrayNum = 0;
          local_390.Fragments.ArrayMax = 0;
          local_390.Fragments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        local_3a8.bSuccess = true;
        UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
                  (__return_storage_ptr__,&local_3a8);
LAB_14434c939:
        DestructItems<FUniversalObjectLocatorFragment,int>
                  ((FUniversalObjectLocatorFragment *)local_390.Fragments.AllocatorInstance.Data,
                   local_390.Fragments.ArrayNum);
        if ((FUniversalObjectLocatorFragment *)local_390.Fragments.AllocatorInstance.Data !=
            (FUniversalObjectLocatorFragment *)0x0) {
          FMemory::Free(local_390.Fragments.AllocatorInstance.Data);
        }
      }
      goto LAB_14434d1d9;
    }
    bVar25 = (param_2->Flags & ErrorMessaging) == None;
    if (bVar25) {
      pFVar14 = FText::FText(&local_128);
    }
    else {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_f8,L"UOL",L"Error_EmptyPath",L"Path is empty.");
    }
    bVar7 = FText::IsEmpty(pFVar14);
    TVar6.Reference = local_3a8.ErrorMessage.TextData.Reference;
    if (!bVar7) {
      pIVar2 = (pFVar14->TextData).Reference;
      if (local_3a8.ErrorMessage.TextData.Reference != pIVar2) {
        local_3a8.ErrorMessage.TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))();
        }
        if (TVar6.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
        }
      }
      local_3a8.ErrorMessage.Flags = pFVar14->Flags;
    }
    (__return_storage_ptr__->ErrorMessage).TextData.Reference =
         local_3a8.ErrorMessage.TextData.Reference;
    local_3a8.bSuccess = false;
    if (local_3a8.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3a8.ErrorMessage.TextData.Reference + 8))
                (local_3a8.ErrorMessage.TextData.Reference,local_324);
    }
    (__return_storage_ptr__->ErrorMessage).Flags = local_3a8.ErrorMessage.Flags;
    __return_storage_ptr__->NumCharsParsed = local_3a8.NumCharsParsed;
    __return_storage_ptr__->bSuccess = local_3a8.bSuccess;
    local_118.TextData.Reference = local_f8.TextData.Reference;
    if ((bVar25) && (local_128.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))(local_128.TextData.Reference);
      local_118.TextData.Reference = local_f8.TextData.Reference;
    }
  }
  else {
    bVar25 = (param_2->Flags & ErrorMessaging) == None;
    if (bVar25) {
      pFVar14 = FText::FText(&local_108);
    }
    else {
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_118,L"UOL",L"Error_MissingScheme",
                           L"String does not start with uobj://");
    }
    bVar7 = FText::IsEmpty(pFVar14);
    TVar6.Reference = local_3a8.ErrorMessage.TextData.Reference;
    if (!bVar7) {
      pIVar2 = (pFVar14->TextData).Reference;
      if (local_3a8.ErrorMessage.TextData.Reference != pIVar2) {
        local_3a8.ErrorMessage.TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))();
        }
        if (TVar6.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
        }
      }
      local_3a8.ErrorMessage.Flags = pFVar14->Flags;
    }
    (__return_storage_ptr__->ErrorMessage).TextData.Reference =
         local_3a8.ErrorMessage.TextData.Reference;
    local_3a8.bSuccess = false;
    if (local_3a8.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3a8.ErrorMessage.TextData.Reference + 8))
                (local_3a8.ErrorMessage.TextData.Reference,local_30c);
    }
    (__return_storage_ptr__->ErrorMessage).Flags = local_3a8.ErrorMessage.Flags;
    __return_storage_ptr__->NumCharsParsed = local_3a8.NumCharsParsed;
    __return_storage_ptr__->bSuccess = local_3a8.bSuccess;
    if ((bVar25) && (local_108.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))(local_108.TextData.Reference);
    }
  }
  if ((!bVar25) && (local_118.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_118.TextData.Reference + 0x10))(local_118.TextData.Reference);
  }
LAB_14434d1d9:
  if (local_3a8.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3a8.ErrorMessage.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
joined_r0x00014434c961:
  if (iVar9 == 0) goto LAB_14434cd7d;
  local_188.DataPtr = param_1->DataPtr;
  local_188.Size = param_1->Size;
  local_188._12_4_ = *(undefined4 *)&param_1->field_0xc;
  uStack_290 = 2;
  local_298 = L"&#";
  local_198._12_4_ = uStack_28c;
  local_198.ArrayNum = 2;
  local_198.DataPtr = L"&#";
  iVar11 = UE::String::FindFirstOfAnyChar(&local_188,&local_198,CaseSensitive,(int *)0x0);
  uVar26 = *(undefined4 *)&param_1->DataPtr;
  uVar27 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  local_338 = param_1->DataPtr;
  iVar10 = param_1->Size;
  uVar28 = *(undefined4 *)&param_1->field_0xc;
  iStack_330 = param_1->Size;
  uStack_32c = *(undefined4 *)&param_1->field_0xc;
  if (iVar11 == -1) {
    local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + iVar9;
    param_1->DataPtr = (wchar_t *)0x0;
    param_1->Size = 0;
LAB_14434caba:
    uVar22 = 0;
    local_178.DataPtr._0_4_ = uVar26;
    local_178.DataPtr._4_4_ = uVar27;
    local_178.Size = iVar10;
    local_178._12_4_ = uVar28;
    local_370 = UE::String::FindFirstChar(&local_178,L'=',CaseSensitive);
    if (local_370 == -1) goto LAB_14434cd63;
    local_78 = PayloadString;
    iVar9 = iVar10;
    if (7 < iVar10) {
      iVar9 = 7;
    }
    iVar11 = 0;
    if (0 < iVar9) {
      iVar11 = iVar9;
    }
    if (iVar11 != 7) goto LAB_14434cd63;
    pwVar24 = (wchar_t *)CONCAT44(uVar27,uVar26);
    local_358 = pwVar24;
    iVar9 = FGenericPlatformStricmp::Strnicmp(PayloadString.DataPtr,pwVar24,7);
    if ((iVar9 != 0) || (iVar10 < 9)) goto LAB_14434cd63;
    iVar9 = iVar10;
    if (iVar10 + -7 < iVar10) {
      iVar9 = iVar10 + -7;
    }
    iVar11 = 0;
    if (0 < iVar9) {
      iVar11 = iVar9;
    }
    local_368 = (wchar_t *)(longlong)iVar10;
    pwVar24 = pwVar24 + ((longlong)local_368 - (longlong)iVar11);
    if (iVar11 == 0) {
LAB_14434cd5e:
      local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + iVar10;
      goto LAB_14434cd63;
    }
    iVar9 = 1;
    iVar23 = 0;
    if (iVar11 < 1) goto LAB_14434cd5e;
    do {
      _C = *pwVar24;
      iVar12 = iswdigit(_C);
      if (iVar12 == 0) break;
      iVar12 = (ushort)_C - 0x30;
      if ((uVar22 != 0) || (iVar12 != 0)) {
        iVar12 = iVar12 * iVar9;
        iVar9 = iVar9 * 10;
        if ((uVar22 * 10 < uVar22) ||
           (uVar19 = uVar22 * 10 + iVar12, bVar25 = uVar19 < uVar22, uVar22 = uVar19, bVar25))
        goto LAB_14434cd5e;
      }
      iVar23 = iVar23 + 1;
      pwVar24 = pwVar24 + 1;
    } while (iVar23 < iVar11);
    if ((((iVar23 == 0) || (0x7fffffff < uVar22)) || ((uint)local_390.Fragments.ArrayNum <= uVar22))
       || (iVar23 + 7 != local_370)) goto LAB_14434cd5e;
    iVar23 = iVar23 + 8;
    if (iVar10 < iVar23) {
      bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumToProgress <= CurrentString.Len()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorStringParams.cpp"
                          ,0xb,L"Attempting to progress past the end of the current string!");
      if (bVar25) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FParseStringResult *)(*pcVar4)();
        return pFVar13;
      }
    }
    local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + iVar23;
    if (iVar10 - iVar23 < iVar10) {
      iVar10 = iVar10 - iVar23;
    }
    iStack_250 = 0;
    if (0 < iVar10) {
      iStack_250 = iVar10;
    }
    pwVar24 = local_358 + ((longlong)local_368 - (longlong)iStack_250);
    uVar5._4_4_ = uStack_24c;
    uVar5._0_4_ = iStack_250;
    local_338 = pwVar24;
    _iStack_330 = uVar5;
    local_258 = pwVar24;
    if (((iStack_250 == 0) || ((int)uVar22 < 0)) || (local_390.Fragments.ArrayNum <= (int)uVar22))
    goto LAB_14434cd63;
    uVar19 = 0;
    if ((int)uVar22 < local_390.Fragments.ArrayNum) {
      uVar19 = ~uVar22 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar4 = (code *)swi(3);
      pFVar13 = (FParseStringResult *)(*pcVar4)();
      return pFVar13;
    }
    this_00 = (FUniversalObjectLocatorFragment *)
              (local_390.Fragments.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x20);
    local_168.DataPtr = pwVar24;
    local_168._8_8_ = uVar5;
    FUniversalObjectLocatorFragment::TryParseFragmentPayload(this_00,&local_2e0,&local_168,param_2);
    local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + local_2e0.NumCharsParsed;
    if (local_2e0.bSuccess != false) {
      if (local_2e0.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e0.ErrorMessage.TextData.Reference + 0x10))();
      }
      goto LAB_14434cd63;
    }
    pFVar17 = UE::UniversalObjectLocator::FFragmentTypeHandle::Resolve(&this_00->FragmentType);
    if ((param_2->Flags & ErrorMessaging) == None) {
      pFVar14 = FText::FText(&local_148);
      cVar21 = '\0';
      bVar7 = true;
      bVar25 = false;
    }
    else {
      local_158.DataPtr = pwVar24;
      local_158._8_8_ = uVar5;
      pFVar14 = FText::FromStringView(local_68,&local_158);
      if (pFVar17 == (FFragmentType *)0x0) {
        local_348[0].ComparisonIndex.Value = 0;
        local_348[0].Number = 0;
        pFVar20 = local_348;
      }
      else {
        local_314 = pFVar17->FragmentTypeID;
        pFVar20 = &local_314;
      }
      pFVar15 = FText::FromName(&local_b8,pFVar20);
      pFVar18 = FText::AsLocalizable_Advanced_LocText
                          (&local_138,L"UOL",L"Error_InvalidPayload",
                           L"Payload is invalid for fragment type {0}: {1}.");
      pFVar16 = FTextFormat::FTextFormat(&local_a8,pFVar18,Default);
      local_228.Type = Text;
      FText::FText((FText *)&local_228.TextValue,pFVar15);
      if ((local_228.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar25)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FParseStringResult *)(*pcVar4)();
        return pFVar13;
      }
      local_208 = 4;
      FText::FText(&local_1f8,pFVar14);
      if ((local_1f8.TextData.Reference == (ITextData *)0x0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0xbd,
                              L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                             ), bVar25)) {
        pcVar4 = (code *)swi(3);
        pFVar13 = (FParseStringResult *)(*pcVar4)();
        return pFVar13;
      }
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_380.AllocatorInstance,2,&local_380.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_380.AllocatorInstance.Data,&local_228,2);
      local_248.TextFormatData.Object = (pFVar16->TextFormatData).Object;
      local_248.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar16->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_248.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_248.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_248.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_238,&local_248,&local_380);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_380.AllocatorInstance.Data,local_380.ArrayNum);
      if ((FFormatArgumentValue *)local_380.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
      }
      if (local_1f8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
      }
      if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_228.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar16->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar2 = (pFVar15->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pIVar2 = (pFVar14->TextData).Reference;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))();
      }
      pFVar14 = &local_238;
      cVar21 = -0x80;
      bVar7 = false;
      bVar25 = true;
    }
    bVar8 = FText::IsEmpty(pFVar14);
    TVar6.Reference = local_3a8.ErrorMessage.TextData.Reference;
    if (!bVar8) {
      pIVar2 = (pFVar14->TextData).Reference;
      if (local_3a8.ErrorMessage.TextData.Reference != pIVar2) {
        local_3a8.ErrorMessage.TextData.Reference = pIVar2;
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_31c);
        }
        if (TVar6.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
        }
      }
      local_3a8.ErrorMessage.Flags = pFVar14->Flags;
    }
    local_3a8.bSuccess = false;
    UE::UniversalObjectLocator::FParseStringResult::FParseStringResult
              (__return_storage_ptr__,&local_3a8);
    if ((bVar7) && (local_148.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
    if ((bVar25) && (local_238.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
    }
    if ((cVar21 < '\0') && (local_138.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
LAB_14434c92e:
    if (local_2e0.ErrorMessage.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e0.ErrorMessage.TextData.Reference + 0x10))();
    }
    goto LAB_14434c939;
  }
  if (((iVar11 < 0) || (iVar9 <= iVar11)) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index >= 0 && Index < Size",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                          ,0x234,
                          L"Index out of bounds on StringView: index %i on a view with a length of %i"
                         ), bVar25)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FParseStringResult *)(*pcVar4)();
    return pFVar13;
  }
  uVar28 = uStack_27c;
  local_338 = param_1->DataPtr;
  local_278 = param_1->DataPtr;
  uStack_270 = *(undefined8 *)&param_1->Size;
  iVar9 = param_1->Size;
  if (iVar11 < param_1->Size) {
    iVar9 = iVar11;
  }
  iVar10 = 0;
  if (0 < iVar9) {
    iVar10 = iVar9;
  }
  iVar11 = iVar11 + 1;
  local_288._0_4_ = SUB84(local_338,0);
  uVar26 = (undefined4)local_288;
  local_288._4_4_ = (undefined4)((ulonglong)local_338 >> 0x20);
  uVar27 = local_288._4_4_;
  uStack_32c = uStack_27c;
  iStack_330 = iVar10;
  iVar9 = (int)*(undefined8 *)&param_1->Size;
  local_288 = local_338;
  iStack_280 = iVar10;
  if ((iVar9 < iVar11) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumToProgress <= CurrentString.Len()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Private\\UniversalObjectLocatorStringParams.cpp"
                          ,0xb,L"Attempting to progress past the end of the current string!"),
     bVar25)) {
    pcVar4 = (code *)swi(3);
    pFVar13 = (FParseStringResult *)(*pcVar4)();
    return pFVar13;
  }
  local_3a8.NumCharsParsed = local_3a8.NumCharsParsed + iVar11;
  iVar23 = iVar9;
  if (iVar9 - iVar11 < iVar9) {
    iVar23 = iVar9 - iVar11;
  }
  iStack_260 = 0;
  if (0 < iVar23) {
    iStack_260 = iVar23;
  }
  local_268 = local_278 + ((longlong)iVar9 - (longlong)iStack_260);
  param_1->DataPtr = local_268;
  *(ulonglong *)&param_1->Size = CONCAT44(uStack_25c,iStack_260);
  if (iVar10 != 0) goto LAB_14434caba;
LAB_14434cd63:
  iVar9 = param_1->Size;
  goto joined_r0x00014434c961;
}

// operator() @ 1504bd040

bool __thiscall `FUniversalObjectLocator::AddFragment'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3371711698598625909>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3371711698598625909>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

