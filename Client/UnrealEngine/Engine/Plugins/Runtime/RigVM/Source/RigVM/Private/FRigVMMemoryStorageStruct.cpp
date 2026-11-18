// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 39

// GetData<unsigned_char> @ 14a077050

uchar * __thiscall
FRigVMMemoryStorageStruct::GetData<unsigned_char>(FRigVMMemoryStorageStruct *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uchar *puVar7;
  
  piVar1 = &(this->LinkedProperties).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Properties.IsValidIndex(InPropertyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryStorageStruct.h"
                         ,0x84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  lVar2 = this->_padding_;
  lVar3 = *(longlong *)((this->LinkedProperties).AllocatorInstance.Data + (longlong)param_1 * 8);
  if ((*(int *)(lVar3 + 0x30) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    puVar7 = (uchar *)(*pcVar4)();
    return puVar7;
  }
  return (uchar *)(*(int *)(lVar3 + 0x44) + lVar2);
}

// GetData<FRigVMTrait> @ 14a077180

FRigVMTrait * __thiscall
FRigVMMemoryStorageStruct::GetData<FRigVMTrait>(FRigVMMemoryStorageStruct *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FRigVMTrait *pFVar7;
  
  piVar1 = &(this->LinkedProperties).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Properties.IsValidIndex(InPropertyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryStorageStruct.h"
                         ,0x84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRigVMTrait *)(*pcVar4)();
    return pFVar7;
  }
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRigVMTrait *)(*pcVar4)();
    return pFVar7;
  }
  lVar2 = this->_padding_;
  lVar3 = *(longlong *)((this->LinkedProperties).AllocatorInstance.Data + (longlong)param_1 * 8);
  if ((*(int *)(lVar3 + 0x30) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRigVMTrait *)(*pcVar4)();
    return pFVar7;
  }
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FRigVMTrait *)(*pcVar4)();
    return pFVar7;
  }
  return (FRigVMTrait *)(*(int *)(lVar3 + 0x44) + lVar2);
}

// GetData<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14a0772b0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMMemoryStorageStruct::GetData<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FRigVMMemoryStorageStruct *this,FProperty *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  
  uVar6 = GetPropertyIndex(this,param_1);
  if (uVar6 == 0xffffffff) {
    return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  }
  piVar1 = &(this->LinkedProperties).ArrayNum;
  if ((((int)uVar6 < 0) || (*piVar1 <= (int)uVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Properties.IsValidIndex(InPropertyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryStorageStruct.h"
                         ,0x84,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar7 = 0;
  if ((int)uVar6 < *piVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  lVar2 = this->_padding_;
  lVar3 = *(longlong *)((this->LinkedProperties).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  if ((*(int *)(lVar3 + 0x30) < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5))
  {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  if ((lVar2 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)(*(int *)(lVar3 + 0x44) + lVar2);
}

// operator= @ 14a07d870

FRigVMMemoryStorageStruct * __thiscall
FRigVMMemoryStorageStruct::operator=
          (FRigVMMemoryStorageStruct *this,FRigVMMemoryStorageStruct *param_1)

{
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FRigVMPropertyPath *pFVar5;
  
  if (this != param_1) {
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)this,(UScriptStruct *)param_1->_padding_,
               (uchar *)param_1->_padding_);
  }
  this->MemoryType = param_1->MemoryType;
  TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>::operator=
            (&this->PropertyPathDescriptions,&param_1->PropertyPathDescriptions);
  pTVar1 = &this->LinkedProperties;
  if (pTVar1 != &param_1->LinkedProperties) {
    iVar4 = (param_1->LinkedProperties).ArrayNum;
    piVar2 = &(this->LinkedProperties).ArrayMax;
    _Src = (param_1->LinkedProperties).AllocatorInstance.Data;
    (this->LinkedProperties).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  pTVar3 = &this->PropertyPaths;
  if (pTVar3 != &param_1->PropertyPaths) {
    DestructItems<FRigVMPropertyPath,int>
              ((FRigVMPropertyPath *)(pTVar3->AllocatorInstance).Data,(this->PropertyPaths).ArrayNum
              );
    iVar4 = (param_1->PropertyPaths).ArrayNum;
    piVar2 = &(this->PropertyPaths).ArrayMax;
    pFVar5 = (FRigVMPropertyPath *)(param_1->PropertyPaths).AllocatorInstance.Data;
    (this->PropertyPaths).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      ConstructItems<FRigVMPropertyPath,FRigVMPropertyPath,int>
                ((pTVar3->AllocatorInstance).Data,pFVar5,iVar4);
    }
  }
  this->CachedMemoryHash = param_1->CachedMemoryHash;
  return this;
}

// GetProperty @ 14a098220

FProperty * __thiscall
FRigVMMemoryStorageStruct::GetProperty(FRigVMMemoryStorageStruct *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FProperty *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LinkedProperties).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FProperty *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FProperty **)((this->LinkedProperties).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// StaticStruct @ 14a0ab840

UScriptStruct * __cdecl FRigVMMemoryStorageStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMMemoryStorageStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMMemoryStorageStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMMemoryStorageStruct,(UObject *)pUVar1,
                         L"RigVMMemoryStorageStruct");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMMemoryStorageStruct.OuterSingleton;
}

// FRigVMMemoryStorageStruct @ 14a0bd720

FRigVMMemoryStorageStruct * __thiscall
FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct
          (FRigVMMemoryStorageStruct *this,ERigVMMemoryType param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this);
  this->MemoryType = param_1;
  (this->PropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPathDescriptions).ArrayNum = 0;
  (this->PropertyPathDescriptions).ArrayMax = 0;
  (this->LinkedProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedProperties).ArrayNum = 0;
  (this->LinkedProperties).ArrayMax = 0;
  (this->PropertyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPaths).ArrayNum = 0;
  (this->PropertyPaths).ArrayMax = 0;
  this->CachedMemoryHash = 0;
  return this;
}

// FRigVMMemoryStorageStruct @ 14a0bd770

FRigVMMemoryStorageStruct * __thiscall
FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct
          (FRigVMMemoryStorageStruct *this,ERigVMMemoryType param_1,
          TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *param_3)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this);
  this->MemoryType = param_1;
  (this->PropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPathDescriptions).ArrayNum = 0;
  (this->PropertyPathDescriptions).ArrayMax = 0;
  (this->LinkedProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedProperties).ArrayNum = 0;
  (this->LinkedProperties).ArrayMax = 0;
  (this->PropertyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPaths).ArrayNum = 0;
  (this->PropertyPaths).ArrayMax = 0;
  this->CachedMemoryHash = 0;
  AddProperties(this,param_2,param_3);
  return this;
}

// FRigVMMemoryStorageStruct @ 14a0bd7f0

FRigVMMemoryStorageStruct * __thiscall
FRigVMMemoryStorageStruct::FRigVMMemoryStorageStruct(FRigVMMemoryStorageStruct *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this);
  this->MemoryType = Invalid;
  (this->PropertyPathDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPathDescriptions).ArrayNum = 0;
  (this->PropertyPathDescriptions).ArrayMax = 0;
  (this->LinkedProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LinkedProperties).ArrayNum = 0;
  (this->LinkedProperties).ArrayMax = 0;
  (this->PropertyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPaths).ArrayNum = 0;
  (this->PropertyPaths).ArrayMax = 0;
  this->CachedMemoryHash = 0;
  return this;
}

// ~FRigVMMemoryStorageStruct @ 14a0c2dc0

void __thiscall
FRigVMMemoryStorageStruct::~FRigVMMemoryStorageStruct(FRigVMMemoryStorageStruct *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRigVMPropertyPath,int>
            ((FRigVMPropertyPath *)(this->PropertyPaths).AllocatorInstance.Data,
             (this->PropertyPaths).ArrayNum);
  pFVar1 = (this->PropertyPaths).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LinkedProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FRigVMPropertyPathDescription,int>
            ((FRigVMPropertyPathDescription *)
             (this->PropertyPathDescriptions).AllocatorInstance.Data,
             (this->PropertyPathDescriptions).ArrayNum);
  pFVar1 = (this->PropertyPathDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FInstancedStruct::Reset((FInstancedStruct *)this);
  return;
}

// AddProperties @ 14a0cb2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

void __thiscall
FRigVMMemoryStorageStruct::AddProperties
          (FRigVMMemoryStorageStruct *this,
          TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_> *param_2)

{
  FRigVMPropertyDescription *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  uint uVar10;
  FRigVMPropertyDescription *this_00;
  longlong lVar11;
  undefined1 auStackY_128 [32];
  undefined1 local_d8 [8];
  ForAnyElementType local_d0;
  undefined8 local_c8;
  FPropertyBagPropertyDesc *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FString local_a8;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_98;
  FPropertyBagPropertyDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar10 = param_1->ArrayNum;
  local_d0.Data = (FScriptContainerElement *)0x0;
  local_c8 = 0;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar10,&local_d0,0,(int *)((longlong)&local_c8 + 4));
  }
  iVar7 = param_1->ArrayNum;
  this_00 = (FRigVMPropertyDescription *)(param_1->AllocatorInstance).Data;
  pFVar1 = this_00 + iVar7;
  do {
    if (param_1->ArrayNum != iVar7) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<FRigVMPropertyDescription_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d8);
    }
    iVar5 = (int)local_c8;
    if (this_00 == pFVar1) {
      local_b8 = (FPropertyBagPropertyDesc *)local_d0.Data;
      if (((int)local_c8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iStack_b0 = iVar5;
      local_98._12_4_ = uStack_ac;
      local_98.ArrayNum = iVar5;
      local_98.DataPtr = local_b8;
      FInstancedPropertyBag::AddProperties((FInstancedPropertyBag *)this,&local_98,true);
      TArray<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>::operator=
                (&this->PropertyPathDescriptions,param_2);
      RefreshLinkedProperties(this);
      RefreshPropertyPaths(this);
      iVar7 = (this->LinkedProperties).ArrayNum;
      lVar9 = (longlong)iVar7;
      if (iVar7 == param_1->ArrayNum) {
        uVar10 = 0;
        if (0 < iVar7) {
          lVar11 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar10 < param_1->ArrayNum) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (param_1->AllocatorInstance).Data;
            iVar7 = *(int *)(pFVar2 + lVar11 + 0x40);
            if (1 < iVar7) {
              if (iVar7 == UE::RigVM::RigVMCore::Private::EmptyBraces.Data.ArrayNum) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)(pFVar2 + lVar11 + 0x38),
                                   (wchar_t *)
                                   UE::RigVM::RigVMCore::Private::EmptyBraces.Data.AllocatorInstance
                                   .Data);
                bVar4 = iVar7 == 0;
              }
              else {
                bVar4 = iVar7 + UE::RigVM::RigVMCore::Private::EmptyBraces.Data.ArrayNum == 1;
              }
              if (!bVar4) {
                SetDataFromString(this,uVar10,(FString *)(pFVar2 + lVar11 + 0x38));
              }
            }
            uVar10 = uVar10 + 1;
            lVar11 = lVar11 + 0x48;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4145273276119121319>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                           ,0x259,"NumProperties == InPropertyDescriptions.Num()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (1 < (byte)LogRigVM._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
        }
      }
      this->CachedMemoryHash = 0;
      if ((FPropertyBagPropertyDesc *)local_d0.Data != (FPropertyBagPropertyDesc *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      return;
    }
    if ((FPropertyBagPropertyDesc *)local_d0.Data !=
        (FPropertyBagPropertyDesc *)(local_d0.Data + (longlong)(int)local_c8 * 0x40)) {
      FVar8.Data = local_d0.Data;
      do {
        if (((FPropertyBagPropertyDesc *)FVar8.Data)->Name == this_00->Name) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4145273276119121781>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                             ,0x8b,
                             "BagDescriptors.FindByPredicate([&RigVMDescriptor](const FPropertyBagPropertyDesc& Desc) { return Desc.Name == RigVMDescriptor.Name; }) == nullptr"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (1 < (byte)LogRigVM._0_1_) {
            ::FName::ToString(&this_00->Name,&local_a8);
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
          }
          break;
        }
        FVar8.Data = FVar8.Data + 0x40;
      } while ((FPropertyBagPropertyDesc *)FVar8.Data !=
               (FPropertyBagPropertyDesc *)(local_d0.Data + (longlong)(int)local_c8 * 0x40));
    }
    GeneratePropertyBagDescriptor(&local_88,this_00);
    if (local_88.ValueType != None) {
      if (((local_d0.Data <= &local_88) &&
          (&local_88 < (FPropertyBagPropertyDesc *)(local_d0.Data + (longlong)local_c8._4_4_ * 0x40)
          )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (int)local_c8;
      if ((int)local_c8 == local_c8._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x840,&local_d0,(int *)((longlong)&local_c8 + 4));
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar5 + 1);
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)(local_d0.Data + (longlong)iVar5 * 0x40),&local_88);
    }
    this_00 = this_00 + 1;
  } while( true );
}

// AddStructReferencedObjects @ 14a0ccf40

void __thiscall
FRigVMMemoryStorageStruct::AddStructReferencedObjects
          (FRigVMMemoryStorageStruct *this,FReferenceCollector *param_1)

{
  return;
}

// CopyProperty @ 14a0d1a80

bool __cdecl
FRigVMMemoryStorageStruct::CopyProperty(FRigVMMemoryHandle *param_1,FRigVMMemoryHandle *param_2)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uchar *puVar5;
  FProperty *pFVar6;
  uchar *puVar7;
  FProperty *pFVar8;
  char *pcVar9;
  FRigVMPropertyPath *this;
  FRigVMPropertyPath *this_00;
  int iVar10;
  
  pFVar6 = param_1->Property;
  puVar1 = param_2->Ptr;
  pFVar8 = param_2->Property;
  this = &FRigVMPropertyPath::Empty;
  if (param_2->PropertyPath != (FRigVMPropertyPath *)0x0) {
    this = param_2->PropertyPath;
  }
  puVar5 = param_1->Ptr;
  this_00 = &FRigVMPropertyPath::Empty;
  if (param_1->PropertyPath != (FRigVMPropertyPath *)0x0) {
    this_00 = param_1->PropertyPath;
  }
  if ((pFVar6 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((pFVar8 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ee,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar5 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ef,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar1 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1f0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((this_00->Segments).ArrayNum != 0) {
    puVar5 = FRigVMPropertyPath::GetData_Internal(this_00,puVar5,pFVar6);
    pFVar6 = FRigVMPropertyPath::GetTailProperty(this_00);
  }
  puVar7 = puVar1;
  if ((this->Segments).ArrayNum != 0) {
    puVar7 = FRigVMPropertyPath::GetData_Internal(this,puVar1,pFVar8);
    pFVar8 = FRigVMPropertyPath::GetTailProperty(this);
  }
  if (puVar5 == (uchar *)0x0) {
    if ((this_00->Segments).ArrayNum != 0) {
      return false;
    }
    iVar10 = 0x203;
    pcVar9 = "!InTargetPropertyPath.IsEmpty()";
  }
  else {
    if (puVar1 != (uchar *)0x0) {
      bVar3 = CopyProperty(pFVar6,puVar5,pFVar8,puVar7);
      return bVar3;
    }
    if ((this->Segments).ArrayNum != 0) {
      return false;
    }
    iVar10 = 0x208;
    pcVar9 = "!InSourcePropertyPath.IsEmpty()";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar9,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                     ,iVar10,L"");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// CopyProperty @ 14a0d1c50

bool __cdecl
FRigVMMemoryStorageStruct::CopyProperty
          (FRigVMMemoryStorageStruct *param_1,int param_2,FRigVMPropertyPath *param_3,
          FRigVMMemoryStorageStruct *param_4,int param_5,FRigVMPropertyPath *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FProperty *pFVar5;
  FProperty *pFVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  char *pcVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  
  if ((param_1 == (FRigVMMemoryStorageStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetStorage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x217,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_4 == (FRigVMMemoryStorageStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceStorage != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x218,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar5 = GetProperty(param_1,param_2);
  pFVar6 = GetProperty(param_4,param_5);
  puVar8 = (uchar *)0x0;
  puVar7 = puVar8;
  if (pFVar5 != (FProperty *)0x0) {
    pFVar1 = (param_1->LinkedProperties).AllocatorInstance.Data;
    for (pFVar12 = pFVar1; pFVar12 != pFVar1 + (longlong)(param_1->LinkedProperties).ArrayNum * 8;
        pFVar12 = pFVar12 + 8) {
      if (*(FProperty **)pFVar12 == pFVar5) {
        iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar1 >> 3);
        goto LAB_14a0d1d1a;
      }
    }
    iVar11 = -1;
LAB_14a0d1d1a:
    if (iVar11 != -1) {
      puVar7 = GetData<unsigned_char>(param_1,iVar11);
    }
  }
  if (pFVar6 != (FProperty *)0x0) {
    pFVar1 = (param_4->LinkedProperties).AllocatorInstance.Data;
    for (pFVar12 = pFVar1; pFVar12 != pFVar1 + (longlong)(param_4->LinkedProperties).ArrayNum * 8;
        pFVar12 = pFVar12 + 8) {
      if (*(FProperty **)pFVar12 == pFVar6) {
        iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar1 >> 3);
        goto LAB_14a0d1d68;
      }
    }
    iVar11 = -1;
LAB_14a0d1d68:
    if (iVar11 != -1) {
      puVar8 = GetData<unsigned_char>(param_4,iVar11);
    }
  }
  if ((pFVar5 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ed,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((pFVar6 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ee,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar7 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ef,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((puVar8 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1f0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_3->Segments).ArrayNum != 0) {
    puVar7 = FRigVMPropertyPath::GetData_Internal(param_3,puVar7,pFVar5);
    pFVar5 = FRigVMPropertyPath::GetTailProperty(param_3);
  }
  puVar9 = puVar8;
  if ((param_6->Segments).ArrayNum != 0) {
    puVar9 = FRigVMPropertyPath::GetData_Internal(param_6,puVar8,pFVar6);
    pFVar6 = FRigVMPropertyPath::GetTailProperty(param_6);
  }
  if (puVar7 == (uchar *)0x0) {
    if ((param_3->Segments).ArrayNum != 0) {
      return false;
    }
    iVar11 = 0x203;
    pcVar10 = "!InTargetPropertyPath.IsEmpty()";
  }
  else {
    if (puVar8 != (uchar *)0x0) {
      bVar3 = CopyProperty(pFVar5,puVar7,pFVar6,puVar9);
      return bVar3;
    }
    if ((param_6->Segments).ArrayNum != 0) {
      return false;
    }
    iVar11 = 0x208;
    pcVar10 = "!InSourcePropertyPath.IsEmpty()";
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar10,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                     ,iVar11,L"");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// CopyProperty @ 14a0d1f10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FRigVMMemoryStorageStruct::CopyProperty
          (FProperty *param_1,uchar *param_2,FProperty *param_3,uchar *param_4)

{
  float fVar1;
  double dVar2;
  EArrayPropertyFlags EVar3;
  int iVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  UPackage *pUVar11;
  longlong lVar12;
  FProperty *pFVar13;
  FProperty *pFVar14;
  longlong lVar15;
  uchar *puVar16;
  longlong lVar17;
  FProperty *pFVar18;
  wchar_t *pwVar19;
  undefined8 uVar20;
  uint uVar21;
  int iVar22;
  FProperty *pFVar23;
  ForElementType<FSetElementId> FVar24;
  FScriptArrayHelper local_f8;
  FString local_d8;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FName local_60;
  FString local_58;
  
  pFVar23 = (FProperty *)0x0;
  iVar22 = 0;
  if ((param_1 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x147,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_3 == (FProperty *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x148,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x149,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x14a,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_3);
  if (cVar9 != '\0') goto LAB_14a0d285d;
  uVar5 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if (((uVar5 >> 8 & 1) == 0) || (param_1 == (FProperty *)0x0)) {
    if (((uVar5 >> 0x20 & 1) == 0) || (param_1 == (FProperty *)0x0)) {
      if ((uVar5 & 0x40) == 0) {
        if ((uVar5 >> 0x30 & 1) == 0) {
          if ((uVar5 >> 0x15 & 1) != 0) {
            if ((param_3 == (FProperty *)0x0) ||
               (pFVar13 = param_3, (*(uint *)(param_3->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
              pFVar13 = pFVar23;
            }
            if (pFVar13 != (FProperty *)0x0) {
              EVar3 = (EArrayPropertyFlags)param_1[1]._padding_;
              local_f8.ElementAlignment = (**(code **)(*(longlong *)param_1[1]._padding_ + 0x168))()
              ;
              local_f8.InnerProperty = (FProperty *)param_1[1]._padding_;
              local_f8.ElementSize = (local_f8.InnerProperty)->ElementSize;
              local_f8.field1_0x8 = (FScriptArrayHelper_u_8)param_2;
              local_f8.ArrayFlags = EVar3;
              if ((local_f8.ElementSize < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              if ((local_f8.InnerProperty == (FProperty *)0x0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              lVar17 = pFVar13[1]._padding_;
              (**(code **)(*(longlong *)pFVar13[1]._padding_ + 0x168))();
              local_a8 = pFVar13[1]._padding_;
              iVar10 = *(int *)(local_a8 + 0x34);
              if ((iVar10 < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ElementSize > 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1177,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              if ((local_a8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("InnerProperty",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                     ,0x1178,L""), bVar7)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              lVar15 = param_1[1]._padding_;
              uVar5 = *(ulonglong *)(*(longlong *)(lVar15 + 8) + 0x18);
              if ((uVar5 >> 8 & 1) == 0) {
                if ((uVar5 >> 0x20 & 1) == 0) {
                  if (lVar15 != 0) {
                    if ((uVar5 & 0x40) == 0) {
                      if ((((uVar5 >> 0x30 & 1) != 0) &&
                          (lVar17 = pFVar13[1]._padding_, lVar17 != 0)) &&
                         ((*(byte *)(*(longlong *)(lVar17 + 8) + 0x18) & 0x40) != 0)) {
                        if (*(longlong *)(lVar17 + 0x70) == 0) {
                          bVar7 = *(longlong *)(lVar15 + 0x78) == 0;
                        }
                        else {
                          bVar7 = *(longlong *)(lVar17 + 0x70) == *(longlong *)(lVar15 + 0x78);
                        }
LAB_14a0d2288:
                        if (bVar7) {
LAB_14a0d2293:
                          FProperty::CopyCompleteValue(param_1,param_2,param_4);
                          return true;
                        }
                      }
                    }
                    else {
                      lVar17 = pFVar13[1]._padding_;
                      if ((lVar17 != 0) &&
                         ((*(ulonglong *)(*(longlong *)(lVar17 + 8) + 0x18) & 0x1000000000000) != 0)
                         ) {
                        lVar12 = *(longlong *)(lVar17 + 0x78);
                        lVar17 = *(longlong *)(lVar15 + 0x70);
                        if (lVar17 != 0) goto LAB_14a0d2285;
                        bVar7 = lVar12 == 0;
                        goto LAB_14a0d2288;
                      }
                    }
                  }
                }
                else if ((*(uint *)(*(longlong *)(pFVar13[1]._padding_ + 8) + 0x18) >> 8 & 1) != 0)
                {
                  iVar22 = *(int *)(param_4 + 8);
                  if (-1 < iVar22) {
                    iVar4 = (local_f8.field1_0x8.FreezableArray)->ArrayNum;
                    if (iVar4 < iVar22) {
                      FScriptArrayHelper::AddValues(&local_f8,iVar22 - iVar4);
                    }
                    else if (iVar22 < iVar4) {
                      FScriptArrayHelper::RemoveValues(&local_f8,iVar22,iVar4 - iVar22);
                    }
                    pFVar13 = pFVar23;
                    while( true ) {
                      iVar22 = (int)pFVar13;
                      if ((local_f8.field1_0x8.FreezableArray)->ArrayNum <= iVar22) break;
                      pFVar18 = pFVar23;
                      if ((local_f8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                        puVar16 = (uchar *)(local_f8.field1_0x8.FreezableArray)->_padding_;
                        if (((local_f8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                           (((ulonglong)puVar16 & 1) != 0)) {
                          puVar16 = &(local_f8.field1_0x8.HeapArray)->field_0x0 +
                                    ((longlong)puVar16 >> 0x18);
                        }
                        pFVar18 = (FProperty *)
                                  (puVar16 + (longlong)local_f8.ElementSize * (longlong)iVar22);
                      }
                      pFVar14 = pFVar23;
                      if (*(int *)(param_4 + 8) != 0) {
                        puVar16 = *(uchar **)param_4;
                        if (((lVar17 & 1) != 0) && (((ulonglong)puVar16 & 1) != 0)) {
                          puVar16 = param_4 + ((longlong)puVar16 >> 0x18);
                        }
                        pFVar14 = (FProperty *)(puVar16 + (longlong)iVar10 * (longlong)iVar22);
                      }
                      pFVar13 = (FProperty *)(ulonglong)(iVar22 + 1);
                      pFVar18->_padding_ = (longlong)(double)*(float *)&pFVar14->_padding_;
                    }
                    return true;
                  }
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((longlong)iVar22);
                }
              }
              else if ((*(ulonglong *)(*(longlong *)(pFVar13[1]._padding_ + 8) + 0x18) & 0x100000000
                       ) != 0) {
                iVar22 = *(int *)(param_4 + 8);
                if (-1 < iVar22) {
                  iVar4 = (local_f8.field1_0x8.FreezableArray)->ArrayNum;
                  if (iVar4 < iVar22) {
                    FScriptArrayHelper::AddValues(&local_f8,iVar22 - iVar4);
                  }
                  else if (iVar22 < iVar4) {
                    FScriptArrayHelper::RemoveValues(&local_f8,iVar22,iVar4 - iVar22);
                  }
                  pFVar13 = pFVar23;
                  while( true ) {
                    iVar22 = (int)pFVar13;
                    if ((local_f8.field1_0x8.FreezableArray)->ArrayNum <= iVar22) break;
                    pFVar18 = pFVar23;
                    if ((local_f8.field1_0x8.FreezableArray)->ArrayNum != 0) {
                      puVar16 = (uchar *)(local_f8.field1_0x8.FreezableArray)->_padding_;
                      if (((local_f8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                         (((ulonglong)puVar16 & 1) != 0)) {
                        puVar16 = &(local_f8.field1_0x8.HeapArray)->field_0x0 +
                                  ((longlong)puVar16 >> 0x18);
                      }
                      pFVar18 = (FProperty *)
                                (puVar16 + (longlong)local_f8.ElementSize * (longlong)iVar22);
                    }
                    pFVar14 = pFVar23;
                    if (*(int *)(param_4 + 8) != 0) {
                      puVar16 = *(uchar **)param_4;
                      if (((lVar17 & 1) != 0) && (((ulonglong)puVar16 & 1) != 0)) {
                        puVar16 = param_4 + ((longlong)puVar16 >> 0x18);
                      }
                      pFVar14 = (FProperty *)(puVar16 + (longlong)iVar10 * (longlong)iVar22);
                    }
                    pFVar13 = (FProperty *)(ulonglong)(iVar22 + 1);
                    *(float *)&pFVar18->_padding_ = (float)(double)pFVar14->_padding_;
                  }
                  return true;
                }
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum((longlong)iVar22);
              }
            }
          }
        }
        else if ((param_3 != (FProperty *)0x0) &&
                ((*(byte *)(param_3->_padding_ + 0x18) & 0x40) != 0)) {
          lVar17 = param_3[1]._padding_;
          lVar12 = param_1[1]._padding_;
          if (lVar17 == 0) {
            bVar7 = lVar12 == 0;
          }
          else {
LAB_14a0d2285:
            bVar7 = lVar17 == lVar12;
          }
          goto LAB_14a0d2288;
        }
      }
      else if ((param_3 != (FProperty *)0x0) &&
              ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x1000000000000) != 0)) {
        if (param_1[1]._padding_ == 0) {
          bVar7 = param_3[1]._padding_ == 0;
        }
        else {
          bVar7 = param_1[1]._padding_ == param_3[1]._padding_;
        }
        if (bVar7) goto LAB_14a0d2293;
      }
    }
    else if (((param_3 != (FProperty *)0x0) &&
             ((*(uint *)(param_3->_padding_ + 0x18) >> 8 & 1) != 0)) &&
            (param_1->ArrayDim == param_3->ArrayDim)) {
      if (param_1->ArrayDim < 1) {
        return true;
      }
      do {
        fVar1 = *(float *)param_4;
        param_4 = (uchar *)((longlong)param_4 + 4);
        uVar21 = (int)pFVar23 + 1;
        pFVar23 = (FProperty *)(ulonglong)uVar21;
        *(double *)param_2 = (double)fVar1;
        param_2 = (uchar *)((longlong)param_2 + 8);
      } while ((int)uVar21 < param_1->ArrayDim);
      return true;
    }
  }
  else if (((param_3 != (FProperty *)0x0) &&
           ((*(ulonglong *)(param_3->_padding_ + 0x18) & 0x100000000) != 0)) &&
          (param_1->ArrayDim == param_3->ArrayDim)) {
    if (param_1->ArrayDim < 1) {
      return true;
    }
    do {
      dVar2 = *(double *)param_4;
      param_4 = (uchar *)((longlong)param_4 + 8);
      uVar21 = (int)pFVar23 + 1;
      pFVar23 = (FProperty *)(ulonglong)uVar21;
      *(float *)param_2 = (float)dVar2;
      param_2 = (uchar *)((longlong)param_2 + 4);
    } while ((int)uVar21 < param_1->ArrayDim);
    return true;
  }
  cVar9 = (**(code **)(param_1->_padding_ + 0x1a0))(param_1,param_3);
  if (cVar9 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`FRigVMMemoryStorageStruct::CopyProperty'::__l123::
             _dynamic_atexit_destructor_for__ReportedErrors__);
      _Init_thread_footer(&::_TSS0);
    }
    local_c8 = (wchar_t *)0x0;
    local_c0 = 0;
    (**(code **)(param_1->_padding_ + 0x68))(param_1,&local_90,&local_c8,0);
    iVar10 = (int)local_c0 + -1;
    if ((int)local_c0 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_90,local_c8,iVar10);
    RigVMTypeUtils::CleanupCPPType(&local_90);
    if (local_c8 != (wchar_t *)0x0) {
      FMemory::Free(local_c8);
    }
    if ((param_3 == (FProperty *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMTypeUtils.h"
                           ,0x1ca,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    local_b8 = (wchar_t *)0x0;
    local_b0 = 0;
    (**(code **)(param_3->_padding_ + 0x68))(param_3,&local_a0,&local_b8,0);
    iVar10 = (int)local_b0 + -1;
    if ((int)local_b0 == 0) {
      iVar10 = 0;
    }
    ::FString::AppendChars(&local_a0,local_b8,iVar10);
    RigVMTypeUtils::CleanupCPPType(&local_a0);
    if (local_b8 != (wchar_t *)0x0) {
      FMemory::Free(local_b8);
    }
    pUVar11 = FField::GetOutermost((FField *)param_1);
    if (pUVar11 != (UPackage *)0x0) {
      local_60 = (FName)pUVar11->_padding_;
      ::FName::ToString(&local_60,&local_58);
    }
    bVar7 = IsThisNotNull(param_1,"FField::GetName");
    if (bVar7) {
      ::FName::ToString((FName *)&param_1->_padding_,&local_70);
    }
    else {
      ::FString::FString(&local_70,L"None");
    }
    bVar7 = IsThisNotNull(param_3,"FField::GetName");
    if (bVar7) {
      ::FName::ToString((FName *)&param_3->_padding_,&local_80);
    }
    else {
      ::FString::FString(&local_80,L"None");
    }
    ::FString::PrintfImpl(&local_d8,L"Failed to copy %s (%s) to %s (%s) in package %s");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if ((pUVar11 != (UPackage *)0x0) &&
       (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      iVar22 = local_d8.Data.ArrayNum + -1;
      pwVar19 = (wchar_t *)local_d8.Data.AllocatorInstance.Data;
    }
    uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar22,pwVar19);
    if (ReportedErrors.Elements._8_4_ != ReportedErrors.Elements._52_4_) {
      FVar24 = (ForElementType<FSetElementId>)0x154c97bb8;
      if (ReportedErrors.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FVar24 = ReportedErrors.Hash.SecondaryData;
      }
      iVar22 = *(int *)((longlong)FVar24 + (ulonglong)(ReportedErrors.HashSize - 1U & uVar21) * 4);
      lVar17 = ReportedErrors.Elements._0_8_;
      uVar20 = local_d8.Data._8_8_;
      while (iVar22 != -1) {
        lVar15 = (longlong)iVar22;
        iVar10 = *(int *)(lVar17 + 8 + lVar15 * 0x18);
        if (iVar10 == (int)uVar20) {
          if (1 < iVar10) {
            iVar10 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)(lVar17 + lVar15 * 0x18),
                                (wchar_t *)local_d8.Data.AllocatorInstance.Data);
            bVar7 = iVar10 == 0;
            lVar17 = ReportedErrors.Elements._0_8_;
            uVar20 = local_d8.Data._8_8_;
            goto LAB_14a0d27d5;
          }
LAB_14a0d27e7:
          if (iVar22 != -1) goto LAB_14a0d282f;
          break;
        }
        bVar7 = iVar10 + (int)uVar20 == 1;
LAB_14a0d27d5:
        if (bVar7) goto LAB_14a0d27e7;
        iVar22 = *(int *)(lVar17 + 0x10 + lVar15 * 0x18);
      }
    }
    if (1 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
    }
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&ReportedErrors,(FString *)&stack0x00000020,(bool *)&local_d8);
LAB_14a0d282f:
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    return false;
  }
LAB_14a0d285d:
  if (param_2 != param_4) {
    if (((uint)(int)param_1->PropertyFlags >> 0x1e & 1) == 0) {
      (**(code **)(param_1->_padding_ + 0xf0))(param_1,param_2,param_4,param_1->ArrayDim);
    }
    else {
      memcpy(param_2,param_4,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    }
  }
  return true;
}

// CopyProperty @ 14a0d2910

bool __cdecl
FRigVMMemoryStorageStruct::CopyProperty
          (FProperty *param_1,uchar *param_2,FRigVMPropertyPath *param_3,FProperty *param_4,
          uchar *param_5,FRigVMPropertyPath *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  char *pcVar5;
  int iVar6;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ed,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_4 == (FProperty *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourceProperty != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ee,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTargetPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1ef,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_5 == (uchar *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSourcePtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x1f0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_3->Segments).ArrayNum != 0) {
    param_2 = FRigVMPropertyPath::GetData_Internal(param_3,param_2,param_1);
    param_1 = FRigVMPropertyPath::GetTailProperty(param_3);
  }
  puVar4 = param_5;
  if ((param_6->Segments).ArrayNum != 0) {
    puVar4 = FRigVMPropertyPath::GetData_Internal(param_6,param_5,param_4);
    param_4 = FRigVMPropertyPath::GetTailProperty(param_6);
  }
  if (param_2 == (uchar *)0x0) {
    if ((param_3->Segments).ArrayNum != 0) {
      return false;
    }
    iVar6 = 0x203;
    pcVar5 = "!InTargetPropertyPath.IsEmpty()";
  }
  else {
    if (param_5 != (uchar *)0x0) {
      bVar2 = CopyProperty(param_1,param_2,param_4,puVar4);
      return bVar2;
    }
    if ((param_6->Segments).ArrayNum != 0) {
      return false;
    }
    iVar6 = 0x208;
    pcVar5 = "!InSourcePropertyPath.IsEmpty()";
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    (pcVar5,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                     ,iVar6,L"");
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// FindPropertyByName @ 14a0dda30

FProperty * __thiscall
FRigVMMemoryStorageStruct::FindPropertyByName(FRigVMMemoryStorageStruct *this,FName *param_1)

{
  FProperty *pFVar1;
  FName local_res8 [4];
  
  FRigVMPropertyDescription::SanitizeName(local_res8);
  if ((UStruct *)this->_padding_ != (UStruct *)0x0) {
    pFVar1 = UStruct::FindPropertyByName((UStruct *)this->_padding_,local_res8[0]);
    return pFVar1;
  }
  return (FProperty *)0x0;
}

// GeneratePropertyBagDescriptor @ 14a0dee80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPropertyBagPropertyDesc * __cdecl
FRigVMMemoryStorageStruct::GeneratePropertyBagDescriptor
          (FPropertyBagPropertyDesc *__return_storage_ptr__,FRigVMPropertyDescription *param_1)

{
  int iVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uchar uVar7;
  bool bVar8;
  FGuid *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  undefined1 auStack_858 [32];
  EPropertyBagPropertyType local_838 [4];
  FPropertyBagContainerTypes local_834;
  FString local_830;
  FGuid local_820;
  TObjectPtr<UObject_const_>_u_0 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  FName local_7f0;
  EPropertyBagPropertyType local_7e8;
  EPropertyBagContainerType local_7e7 [2];
  uchar local_7e5;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined4 local_7d0;
  FBlake3Hash local_7c8;
  FBlake3 local_7a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_858;
  (__return_storage_ptr__->ValueTypeObject).field0_0x0.DebugPtr = (UObject *)0x0;
  (__return_storage_ptr__->ID).A = 0;
  (__return_storage_ptr__->ID).B = 0;
  (__return_storage_ptr__->ID).C = 0;
  (__return_storage_ptr__->ID).D = 0;
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  __return_storage_ptr__->PropertyFlags = 1;
  __return_storage_ptr__->CachedProperty = (FProperty *)0x0;
  __return_storage_ptr__->CachedIndex = -1;
  __return_storage_ptr__->ValueType = None;
  (__return_storage_ptr__->ContainerTypes).Types = (EPropertyBagContainerType  [2])0x0;
  (__return_storage_ptr__->ContainerTypes).NumContainers = '\0';
  local_838[0] = None;
  local_834.Types.Elements[0] = None;
  local_834.Types.Elements[1] = None;
  local_834.NumContainers = '\0';
  bVar8 = GetPropertyTypeDataFromVMDescriptor(param_1,local_838,&local_834);
  uVar7 = local_834.NumContainers;
  if (bVar8) {
    local_808 = (TObjectPtr<UObject_const_>_u_0)param_1->CPPTypeObject;
    FVar2 = param_1->Name;
    if (local_834.NumContainers == '\0') {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_808.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_808.DebugPtr);
      }
      local_7e7[0] = None;
      local_7e7[1] = None;
      local_7e5 = '\0';
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_808.DebugPtr != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_808.DebugPtr);
      }
      local_7e7[0] = local_834.Types.Elements[0];
      local_7e7[1] = local_834.Types.Elements[1];
      local_7e5 = uVar7;
    }
    local_800 = 0;
    local_7f8 = 0;
    local_7e0 = 1;
    local_7d8 = 0;
    local_7d0 = 0xffffffff;
    local_7f0 = FVar2;
    local_7e8 = local_838[0];
    FPropertyBagPropertyDesc::operator=
              (__return_storage_ptr__,(FPropertyBagPropertyDesc *)&local_808.ObjectPtr);
    ::FName::ToString(&param_1->Name,&local_830);
    FBlake3::Reset(&local_7a8);
    pwVar11 = L"";
    iVar10 = local_830.Data.ArrayNum + -1;
    FVar3.Data = local_830.Data.AllocatorInstance.Data;
    if (local_830.Data.ArrayNum == 0) {
      iVar10 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    FBlake3::Update(&local_7a8,FVar3.Data,(longlong)iVar10 * 2);
    iVar1 = (param_1->CPPType).Data.ArrayNum;
    iVar10 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar10 = 0;
    }
    else {
      pwVar11 = (wchar_t *)(param_1->CPPType).Data.AllocatorInstance.Data;
    }
    FBlake3::Update(&local_7a8,pwVar11,(longlong)iVar10 * 2);
    FBlake3::Finalize(&local_7a8,&local_7c8);
    pFVar9 = FGuid::NewGuidFromHash(&local_820,&local_7c8);
    uVar4 = pFVar9->B;
    uVar5 = pFVar9->C;
    uVar6 = pFVar9->D;
    (__return_storage_ptr__->ID).A = pFVar9->A;
    (__return_storage_ptr__->ID).B = uVar4;
    (__return_storage_ptr__->ID).C = uVar5;
    (__return_storage_ptr__->ID).D = uVar6;
    if (local_830.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_830.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetContainerPtr @ 14a0e2ce0

void * __thiscall FRigVMMemoryStorageStruct::GetContainerPtr(FRigVMMemoryStorageStruct *this)

{
  return (void *)this->_padding_;
}

// GetDataAsString @ 14a0e2e80

FString * __thiscall
FRigVMMemoryStorageStruct::GetDataAsString
          (FRigVMMemoryStorageStruct *this,FString *__return_storage_ptr__,FRigVMOperand *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  
  if (param_1->RegisterIndex == 0xffff) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)param_1->RegisterIndex;
    if ((int)uVar3 < (this->LinkedProperties).ArrayNum) goto LAB_14a0e2ee0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(PropertyIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                     ,0x107,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
LAB_14a0e2ee0:
  GetDataAsString(this,__return_storage_ptr__,uVar3,param_2);
  return __return_storage_ptr__;
}

// GetDataAsString @ 14a0e2f10

FString * __thiscall
FRigVMMemoryStorageStruct::GetDataAsString
          (FRigVMMemoryStorageStruct *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  uchar *puVar4;
  FProperty *pFVar5;
  
  if ((param_1 < 0) || ((this->LinkedProperties).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(InPropertyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                       ,0xfb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  puVar4 = GetData<unsigned_char>(this,param_1);
  pFVar5 = GetProperty(this,param_1);
  (**(code **)(pFVar5->_padding_ + 0xe0))(pFVar5,__return_storage_ptr__,puVar4,0,puVar4,0,param_2,0)
  ;
  return __return_storage_ptr__;
}

// GetDataAsStringSafe @ 14a0e31c0

FString * __thiscall
FRigVMMemoryStorageStruct::GetDataAsStringSafe
          (FRigVMMemoryStorageStruct *this,FString *__return_storage_ptr__,FRigVMOperand *param_1,
          int param_2)

{
  ushort uVar1;
  
  uVar1 = param_1->RegisterIndex;
  if ((uVar1 != 0xffff) && ((int)(uint)uVar1 < (this->LinkedProperties).ArrayNum)) {
    GetDataAsString(this,__return_storage_ptr__,(uint)uVar1,param_2);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDataAsStringSafe @ 14a0e3210

FString * __thiscall
FRigVMMemoryStorageStruct::GetDataAsStringSafe
          (FRigVMMemoryStorageStruct *this,FString *__return_storage_ptr__,int param_1,int param_2)

{
  if ((-1 < param_1) && (param_1 < (this->LinkedProperties).ArrayNum)) {
    GetDataAsString(this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetHandle @ 14a0e64e0

FRigVMMemoryHandle * __thiscall
FRigVMMemoryStorageStruct::GetHandle
          (FRigVMMemoryStorageStruct *this,FRigVMMemoryHandle *__return_storage_ptr__,int param_1,
          FRigVMPropertyPath *param_2)

{
  code *pcVar1;
  bool bVar2;
  FRigVMMemoryHandle *pFVar3;
  FProperty *pFVar4;
  uchar *puVar5;
  
  if ((param_1 < 0) || ((this->LinkedProperties).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(InPropertyIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                       ,0x137,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRigVMMemoryHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar4 = GetProperty(this,param_1);
  puVar5 = GetData<unsigned_char>(this,param_1);
  __return_storage_ptr__->Ptr = puVar5;
  __return_storage_ptr__->Property = pFVar4;
  __return_storage_ptr__->PropertyPath = param_2;
  __return_storage_ptr__->LazyBranch = (FRigVMLazyBranch *)0x0;
  return __return_storage_ptr__;
}

// GetMemoryHash @ 14a0e79c0

uint __thiscall FRigVMMemoryStorageStruct::GetMemoryHash(FRigVMMemoryStorageStruct *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FString *pFVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  wchar_t *pwVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  wchar_t *local_68;
  undefined8 local_60;
  FString local_58;
  void *local_48 [2];
  
  uVar12 = this->CachedMemoryHash;
  if (uVar12 == 0) {
    iVar2 = (this->LinkedProperties).ArrayNum;
    pFVar16 = (this->LinkedProperties).AllocatorInstance.Data;
    pFVar1 = pFVar16 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LinkedProperties).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      uVar12 = 0;
      if (pFVar16 == pFVar1) break;
      plVar4 = *(longlong **)pFVar16;
      bVar8 = IsThisNotNull(plVar4,"FField::GetFName");
      if (bVar8) {
        local_res18 = *(FName *)(plVar4 + 4);
      }
      else {
        local_res18.ComparisonIndex.Value = 0;
        local_res18.Number = 0;
      }
      pFVar10 = ::FName::ToString(&local_res18,&local_58);
      iVar3 = (pFVar10->Data).ArrayNum;
      if (iVar3 == 0) {
        pwVar14 = L"";
        uVar9 = uVar12;
      }
      else {
        pwVar14 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
        uVar9 = iVar3 - 1;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,pwVar14);
      uVar17 = this->CachedMemoryHash - uVar9 ^ uVar9 >> 0xd;
      uVar13 = (-0x61c88647 - uVar17) - uVar9 ^ uVar17 << 8;
      uVar19 = (uVar9 - uVar13) - uVar17 ^ uVar13 >> 0xd;
      uVar17 = (uVar17 - uVar19) - uVar13 ^ uVar19 >> 0xc;
      uVar9 = (uVar13 - uVar17) - uVar19 ^ uVar17 << 0x10;
      uVar19 = (uVar19 - uVar9) - uVar17 ^ uVar9 >> 5;
      uVar13 = (uVar17 - uVar19) - uVar9 ^ uVar19 >> 3;
      uVar9 = (uVar9 - uVar13) - uVar19 ^ uVar13 << 10;
      this->CachedMemoryHash = (uVar19 - uVar9) - uVar13 ^ uVar9 >> 0xf;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      puVar11 = (undefined8 *)(**(code **)(*plVar4 + 0x68))(plVar4,local_48,0,0);
      if (*(int *)(puVar11 + 1) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)*puVar11;
        uVar12 = *(int *)(puVar11 + 1) - 1;
      }
      uVar12 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar12,pwVar14);
      uVar13 = this->CachedMemoryHash - uVar12 ^ uVar12 >> 0xd;
      uVar9 = (-0x61c88647 - uVar12) - uVar13 ^ uVar13 << 8;
      uVar17 = (uVar12 - uVar9) - uVar13 ^ uVar9 >> 0xd;
      uVar13 = (uVar13 - uVar17) - uVar9 ^ uVar17 >> 0xc;
      uVar12 = (uVar9 - uVar13) - uVar17 ^ uVar13 << 0x10;
      uVar17 = (uVar17 - uVar12) - uVar13 ^ uVar12 >> 5;
      uVar9 = (uVar13 - uVar17) - uVar12 ^ uVar17 >> 3;
      uVar12 = (uVar12 - uVar9) - uVar17 ^ uVar9 << 10;
      this->CachedMemoryHash = (uVar17 - uVar12) - uVar9 ^ uVar12 >> 0xf;
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
      pFVar16 = pFVar16 + 8;
    }
    if (this->MemoryType == Literal) {
      pFVar16 = (this->LinkedProperties).AllocatorInstance.Data;
      iVar2 = (this->LinkedProperties).ArrayNum;
      pFVar1 = pFVar16 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->LinkedProperties).ArrayNum != iVar2) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar16 == pFVar1) break;
        plVar4 = *(longlong **)pFVar16;
        local_68 = (wchar_t *)0x0;
        local_60 = 0;
        lVar18 = 0;
        if (plVar4 != (longlong *)0x0) {
          pFVar5 = (this->LinkedProperties).AllocatorInstance.Data;
          for (pFVar15 = pFVar5; pFVar15 != pFVar5 + (longlong)(this->LinkedProperties).ArrayNum * 8
              ; pFVar15 = pFVar15 + 8) {
            if (*(longlong **)pFVar15 == plVar4) {
              uVar9 = (uint)((longlong)pFVar15 - (longlong)pFVar5 >> 3);
              goto LAB_14a0e7c77;
            }
          }
          uVar9 = 0xffffffff;
LAB_14a0e7c77:
          if (uVar9 != 0xffffffff) {
            if ((((int)uVar9 < 0) || ((this->LinkedProperties).ArrayNum <= (int)uVar9)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Properties.IsValidIndex(InPropertyIndex)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMMemoryStorageStruct.h"
                                   ,0x8b,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return uVar12;
            }
            uVar13 = uVar12;
            if ((int)uVar9 < (this->LinkedProperties).ArrayNum) {
              uVar13 = ~uVar9 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return uVar12;
            }
            lVar18 = this->_padding_;
            lVar6 = *(longlong *)
                     ((this->LinkedProperties).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
            if ((*(int *)(lVar6 + 0x30) < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return uVar12;
            }
            if ((lVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ContainerPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2de,L""), bVar8)) {
              pcVar7 = (code *)swi(3);
              uVar12 = (*pcVar7)();
              return uVar12;
            }
            lVar18 = *(int *)(lVar6 + 0x44) + lVar18;
          }
        }
        (**(code **)(*plVar4 + 0xe0))(plVar4,&local_68,lVar18,0,lVar18,0,0,0);
        if ((int)local_60 == 0) {
          pwVar14 = L"";
          uVar9 = uVar12;
        }
        else {
          pwVar14 = local_68;
          uVar9 = (int)local_60 - 1;
        }
        uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,pwVar14);
        uVar17 = this->CachedMemoryHash - uVar9 ^ uVar9 >> 0xd;
        uVar13 = (-0x61c88647 - uVar9) - uVar17 ^ uVar17 << 8;
        uVar19 = (uVar9 - uVar13) - uVar17 ^ uVar13 >> 0xd;
        uVar17 = (uVar17 - uVar19) - uVar13 ^ uVar19 >> 0xc;
        uVar9 = (uVar13 - uVar17) - uVar19 ^ uVar17 << 0x10;
        uVar19 = (uVar19 - uVar9) - uVar17 ^ uVar9 >> 5;
        uVar13 = (uVar17 - uVar19) - uVar9 ^ uVar19 >> 3;
        uVar9 = (uVar9 - uVar13) - uVar19 ^ uVar13 << 10;
        this->CachedMemoryHash = (uVar19 - uVar9) - uVar13 ^ uVar9 >> 0xf;
        if (local_68 != (wchar_t *)0x0) {
          FMemory::Free(local_68);
        }
        pFVar16 = pFVar16 + 8;
      }
    }
    uVar12 = this->CachedMemoryHash;
  }
  return uVar12;
}

// GetOperand @ 14a0e8a60

FRigVMOperand __thiscall
FRigVMMemoryStorageStruct::GetOperand(FRigVMMemoryStorageStruct *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 in_register_00000014;
  ERigVMMemoryType *pEVar4;
  int in_R9D;
  
  pEVar4 = (ERigVMMemoryType *)CONCAT44(in_register_00000014,param_1);
  if ((param_2 < 0) || ((this->LinkedProperties).ArrayNum <= param_2)) {
    *pEVar4 = Work;
    pEVar4[2] = ~Work;
    pEVar4[3] = ~Work;
    pEVar4[4] = ~Work;
    pEVar4[5] = ~Work;
  }
  else if (in_R9D == -1) {
    *pEVar4 = this->MemoryType;
    *(short *)(pEVar4 + 2) = (short)param_2;
    pEVar4[4] = ~Work;
    pEVar4[5] = ~Work;
  }
  else {
    if ((in_R9D < 0) || ((this->PropertyPaths).ArrayNum <= in_R9D)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetPropertyPaths().IsValidIndex(InPropertyPathIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0xc3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return SUB86(uVar3,0);
      }
    }
    *pEVar4 = this->MemoryType;
    if (in_R9D < 0) {
      in_R9D = 0xffff;
    }
    *(short *)(pEVar4 + 2) = (short)param_2;
    *(short *)(pEVar4 + 4) = (short)in_R9D;
  }
  return SUB86(pEVar4,0);
}

// GetOperandByName @ 14a0e8cd0

FRigVMOperand __thiscall
FRigVMMemoryStorageStruct::GetOperandByName
          (FRigVMMemoryStorageStruct *this,FName *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ERigVMMemoryType EVar4;
  FProperty *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined2 uVar9;
  int in_R9D;
  FName local_res8;
  
  uVar9 = (undefined2)in_R9D;
  FRigVMPropertyDescription::SanitizeName(&local_res8);
  if (((UStruct *)this->_padding_ != (UStruct *)0x0) &&
     (pFVar5 = UStruct::FindPropertyByName((UStruct *)this->_padding_,local_res8),
     pFVar5 != (FProperty *)0x0)) {
    pFVar1 = (this->LinkedProperties).AllocatorInstance.Data;
    for (pFVar7 = pFVar1; pFVar7 != pFVar1 + (longlong)(this->LinkedProperties).ArrayNum * 8;
        pFVar7 = pFVar7 + 8) {
      if (*(FProperty **)pFVar7 == pFVar5) {
        lVar8 = (longlong)pFVar7 - (longlong)pFVar1 >> 3;
        goto LAB_14a0e8d43;
      }
    }
    lVar8 = 0xffffffff;
LAB_14a0e8d43:
    if ((-1 < (int)lVar8) && ((int)lVar8 < (this->LinkedProperties).ArrayNum)) {
      if (in_R9D == -1) {
        EVar4 = this->MemoryType;
        uVar9 = 0xffff;
      }
      else {
        if (((in_R9D < 0) || ((this->PropertyPaths).ArrayNum <= in_R9D)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetPropertyPaths().IsValidIndex(InPropertyPathIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                               ,0xc3,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return SUB86(uVar6,0);
        }
        if (in_R9D < 0) {
          uVar9 = 0xffff;
        }
        EVar4 = this->MemoryType;
      }
      goto LAB_14a0e8db2;
    }
  }
  uVar9 = 0xffff;
  lVar8 = 0xffff;
  EVar4 = Work;
LAB_14a0e8db2:
  *(ERigVMMemoryType *)&(param_1->ComparisonIndex).Value = EVar4;
  *(short *)((longlong)&(param_1->ComparisonIndex).Value + 2) = (short)lVar8;
  *(undefined2 *)&param_1->Number = uVar9;
  return SUB86(param_1,0);
}

// GetPropertyIndex @ 14a0eae00

int __thiscall
FRigVMMemoryStorageStruct::GetPropertyIndex(FRigVMMemoryStorageStruct *this,FProperty *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1 != (FProperty *)0x0) {
    pFVar1 = (this->LinkedProperties).AllocatorInstance.Data;
    for (pFVar2 = pFVar1; pFVar2 != pFVar1 + (longlong)(this->LinkedProperties).ArrayNum * 8;
        pFVar2 = pFVar2 + 8) {
      if (*(FProperty **)pFVar2 == param_1) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetPropertyIndexByName @ 14a0eaf40

int __thiscall
FRigVMMemoryStorageStruct::GetPropertyIndexByName(FRigVMMemoryStorageStruct *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  FName local_res8 [4];
  
  FRigVMPropertyDescription::SanitizeName(local_res8);
  if (((UStruct *)this->_padding_ != (UStruct *)0x0) &&
     (pFVar2 = UStruct::FindPropertyByName((UStruct *)this->_padding_,local_res8[0]),
     pFVar2 != (FProperty *)0x0)) {
    pFVar1 = (this->LinkedProperties).AllocatorInstance.Data;
    for (pFVar3 = pFVar1; pFVar3 != pFVar1 + (longlong)(this->LinkedProperties).ArrayNum * 8;
        pFVar3 = pFVar3 + 8) {
      if (*(FProperty **)pFVar3 == pFVar2) {
        return (int)((longlong)pFVar3 - (longlong)pFVar1 >> 3);
      }
    }
  }
  return -1;
}

// GetPropertyTypeDataFromVMDescriptor @ 14a0eb110

bool __cdecl
FRigVMMemoryStorageStruct::GetPropertyTypeDataFromVMDescriptor
          (FRigVMPropertyDescription *param_1,EPropertyBagPropertyType *param_2,
          FPropertyBagContainerTypes *param_3)

{
  uchar *puVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  EPropertyBagPropertyType EVar8;
  uint uVar9;
  size_t sVar10;
  FString *pFVar11;
  UClass *pUVar12;
  wchar_t *pwVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  FName local_res8;
  EPropertyBagPropertyType *local_res10;
  FString *local_res18;
  FString *local_res20;
  FString local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString *local_68;
  FString local_60 [2];
  
  if ((param_1->CPPType).Data.ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->CPPType).Data.AllocatorInstance.Data;
  }
  local_res10 = param_2;
  ::FString::FString(&local_d8,pwVar13);
  uVar14 = 0;
  puVar1 = &param_3->NumContainers;
  if (param_3 <= puVar1) {
    memset(param_3,0,2);
  }
  *puVar1 = '\0';
  sVar10 = wcslen(L"TArray<");
  bVar6 = ::FString::StartsWith(&local_d8,L"TArray<",(int)sVar10,IgnoreCase);
  if (bVar6) {
    lVar16 = (longlong)(param_1->Containers).ArrayNum;
    uVar18 = uVar14;
    if (0 < lVar16) {
      do {
        uVar17 = (uint)uVar18;
        uVar9 = 0;
        if ((int)uVar17 < (param_1->Containers).ArrayNum) {
          uVar9 = ~uVar17 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar2 = (param_1->Containers).AllocatorInstance.Data[uVar14];
        if (FVar2 == (FScriptContainerElement)0x1) {
          if (*puVar1 < 2) {
            (param_3->Types).Elements[*puVar1] = Array;
            *puVar1 = *puVar1 + '\x01';
          }
          else {
            bVar6 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6601604169788817495>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\PropertyBag.h"
                               ,0x57,"NumContainers < MaxNestedTypes");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
        }
        else if (FVar2 == (FScriptContainerElement)0x2) {
          local_res20 = &local_d8;
          `FRigVMMemoryStorageStruct::GetPropertyTypeDataFromVMDescriptor'::__l9::<lambda_1>::
          operator()(&local_res20);
        }
        else if (FVar2 == (FScriptContainerElement)0x3) {
          local_res18 = &local_d8;
          `FRigVMMemoryStorageStruct::GetPropertyTypeDataFromVMDescriptor'::__l9::<lambda_2>::
          operator()(&local_res18);
        }
        uVar14 = uVar14 + 1;
        param_2 = local_res10;
        uVar18 = (ulonglong)(uVar17 + 1);
      } while ((longlong)uVar14 < lVar16);
    }
    pFVar11 = FRigVMPropertyDescription::GetTailCPPType(param_1,local_60);
    if (&local_d8 != pFVar11) {
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_d8.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_d8.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
  }
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar15.Data = local_d8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_res8,(wchar_t *)FVar15.Data);
  FLazyName::Resolve(&RigVMTypeUtils::BoolTypeName);
  if (local_res8 == local_c8) {
    EVar8 = Bool;
  }
  else {
    FLazyName::Resolve(&RigVMTypeUtils::UInt8TypeName);
    if (local_res8 == local_c0) {
      EVar8 = Byte;
    }
    else {
      FLazyName::Resolve(&RigVMTypeUtils::Int32TypeName);
      if ((local_res8 == local_b8) ||
         (FLazyName::Resolve(&RigVMTypeUtils::IntTypeName), local_res8 == local_b0)) {
        EVar8 = Int32;
      }
      else {
        FLazyName::Resolve(&RigVMTypeUtils::UInt32TypeName);
        if (local_res8 == local_a8) {
          EVar8 = UInt32;
        }
        else {
          FLazyName::Resolve(&RigVMTypeUtils::Int64TypeName);
          if (local_res8 == local_a0) {
            EVar8 = Int64;
          }
          else {
            FLazyName::Resolve(&RigVMTypeUtils::UInt64TypeName);
            if (local_res8 == local_98) {
              EVar8 = UInt64;
            }
            else {
              FLazyName::Resolve(&RigVMTypeUtils::FloatTypeName);
              if (local_res8 == local_90) {
                EVar8 = Float;
              }
              else {
                FLazyName::Resolve(&RigVMTypeUtils::DoubleTypeName);
                if (local_res8 == local_88) {
                  EVar8 = Double;
                }
                else {
                  FLazyName::Resolve(&RigVMTypeUtils::FNameTypeName);
                  if (local_res8 == local_80) {
                    EVar8 = Name;
                  }
                  else {
                    FLazyName::Resolve(&RigVMTypeUtils::FStringTypeName);
                    if (local_res8 == local_78) {
                      EVar8 = String;
                    }
                    else {
                      FLazyName::Resolve(&RigVMTypeUtils::FTextTypeName);
                      if (local_res8 == local_70) {
                        EVar8 = Text;
                      }
                      else {
                        pUVar4 = param_1->CPPTypeObject;
                        if (pUVar4 != (UObject *)0x0) {
                          pUVar12 = Z_Construct_UClass_UScriptStruct_NoRegister();
                          lVar16 = *(longlong *)&pUVar4->field_0x10;
                          iVar3 = (int)pUVar12->_padding_;
                          if ((iVar3 <= *(int *)(lVar16 + 0x38)) &&
                             ((longlong *)
                              *(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar3 * 8)
                              == &pUVar12->_padding_)) {
                            EVar8 = Struct;
                            goto LAB_14a0eb568;
                          }
                        }
                        pUVar4 = param_1->CPPTypeObject;
                        if (pUVar4 != (UObject *)0x0) {
                          pUVar12 = Z_Construct_UClass_UEnum_NoRegister();
                          lVar16 = *(longlong *)&pUVar4->field_0x10;
                          iVar3 = (int)pUVar12->_padding_;
                          if ((iVar3 <= *(int *)(lVar16 + 0x38)) &&
                             ((longlong *)
                              *(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar3 * 8)
                              == &pUVar12->_padding_)) {
                            EVar8 = Enum;
                            goto LAB_14a0eb568;
                          }
                        }
                        if (param_1->CPPTypeObject == (UObject *)0x0) {
                          local_68 = &local_d8;
                          `FRigVMMemoryStorageStruct::GetPropertyTypeDataFromVMDescriptor'::__l71::
                          <lambda_3>::operator()(&local_68);
                          EVar8 = None;
                        }
                        else {
                          bVar6 = RigVMTypeUtils::IsUClassType(&param_1->CPPType);
                          EVar8 = (bVar6 + '\x06') * '\x02';
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_14a0eb568:
  *param_2 = EVar8;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return EVar8 != None;
}

// GetUserDefinedDependencies @ 14a0f2b10

void __thiscall
FRigVMMemoryStorageStruct::GetUserDefinedDependencies
          (FRigVMMemoryStorageStruct *this,
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  FObjectPtr_u_0 FVar6;
  code *pcVar7;
  bool bVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  longlong *plVar11;
  FObjectPtr_u_0 *pFVar12;
  longlong lVar13;
  ulonglong *puVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  FObjectPtr_u_0 local_68;
  FObjectPtr_u_0 local_60;
  FObjectPtr_u_0 local_58;
  UObject *local_50;
  UObject *local_48 [2];
  
  pFVar16 = (this->LinkedProperties).AllocatorInstance.Data;
  uVar3 = (this->LinkedProperties).ArrayNum;
  uVar10 = (ulonglong)(int)uVar3;
  pFVar1 = pFVar16 + uVar10 * 8;
LAB_14a0f2b45:
  do {
    if ((this->LinkedProperties).ArrayNum != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FProperty_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar16 == pFVar1) {
      return;
    }
    plVar5 = *(longlong **)pFVar16;
    for (plVar11 = plVar5; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[0xf]) {
      if ((*(uint *)(plVar11[1] + 0x18) >> 0x15 & 1) == 0) {
        if (plVar11 == (longlong *)0x0) break;
        if ((*(uint *)(plVar11[1] + 0x18) >> 0x14 & 1) == 0) {
          if ((*(byte *)(plVar11[1] + 0x1e) & 1) == 0) {
            if ((*(byte *)(plVar11[1] + 0x18) >> 6 & 1) == 0) {
              if ((*(uint *)(plVar11[1] + 0x18) >> 0x10 & 1) != 0) {
                if (plVar11 == plVar5) {
                  local_50 = (UObject *)(**(code **)(*plVar11 + 0x208))(plVar11,this->_padding_,0);
                  if ((local_50 != (UObject *)0x0) &&
                     ((*(uint *)&local_50->field_0x8 >> 0x1e & 1) == 0)) {
                    TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::
                    AddUniqueImpl<UObject_const_*_const_&>(param_1,&local_50);
                    uVar10 = (ulonglong)uVar3;
                    pFVar16 = pFVar16 + 8;
                    goto LAB_14a0f2b45;
                  }
                }
                else if ((((plVar5 != (longlong *)0x0) &&
                          ((*(uint *)(plVar5[1] + 0x18) >> 0x15 & 1) != 0)) &&
                         (plVar11 = (longlong *)plVar5[0xf], plVar11 != (longlong *)0x0)) &&
                        ((*(uint *)(plVar11[1] + 0x18) >> 0x10 & 1) != 0)) {
                  lVar13 = this->_padding_;
                  if (((int)plVar5[6] < 1) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2dd,
                                         L"Array index out of bounds: %i from an array of size %i"),
                     bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((lVar13 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ContainerPtr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x2de,L""), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  puVar14 = (ulonglong *)(*(int *)((longlong)plVar5 + 0x44) + lVar13);
                  bVar2 = *(byte *)(plVar5 + 0xe);
                  (**(code **)(*(longlong *)plVar5[0xf] + 0x168))();
                  lVar13 = plVar5[0xf];
                  iVar4 = *(int *)(lVar13 + 0x34);
                  if ((iVar4 < 1) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ElementSize > 0",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x1177,L""), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  if ((lVar13 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("InnerProperty",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                         ,0x1178,L""), bVar8)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  for (iVar15 = 0; iVar15 < (int)puVar14[1]; iVar15 = iVar15 + 1) {
                    if ((int)puVar14[1] == 0) {
                      lVar13 = 0;
                    }
                    else {
                      uVar10 = *puVar14;
                      if (((bVar2 & 1) != 0) && ((uVar10 & 1) != 0)) {
                        uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar14;
                      }
                      lVar13 = (longlong)iVar4 * (longlong)iVar15 + uVar10;
                    }
                    local_48[0] = (UObject *)(**(code **)(*plVar11 + 0x1f8))(plVar11,lVar13);
                    if ((local_48[0] != (UObject *)0x0) &&
                       ((*(uint *)&local_48[0]->field_0x8 >> 0x1e & 1) == 0)) {
                      TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::
                      AddUniqueImpl<UObject_const_*_const_&>(param_1,local_48);
                    }
                  }
                }
              }
              break;
            }
            if (plVar11[0xe] == 0) break;
            pUVar9 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
            bVar8 = FObjectPtr::IsA((FObjectPtr *)(plVar11 + 0xe),pUVar9);
            if ((!bVar8) ||
               (FVar6 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(plVar11 + 0xe))->Handle,
               FVar6.Handle == (UObject *)0x0)) break;
            pFVar12 = &local_58;
            local_58 = FVar6;
          }
          else {
            FVar6 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(plVar11 + 0xf))->Handle;
            if (FVar6.Handle == (UObject *)0x0) break;
            pUVar9 = Z_Construct_UClass_UUserDefinedEnum_NoRegister();
            iVar4 = (int)pUVar9->_padding_;
            if ((*(int *)(*(longlong *)&(FVar6.Handle)->field_0x10 + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&(FVar6.Handle)->field_0x10 + 0x30) +
                 (longlong)iVar4 * 8) != &pUVar9->_padding_)) break;
            pFVar12 = &local_60;
            local_60 = FVar6;
          }
        }
        else {
          if (plVar11[0xe] == 0) break;
          pUVar9 = Z_Construct_UClass_UUserDefinedStruct_NoRegister();
          bVar8 = FObjectPtr::IsA((FObjectPtr *)(plVar11 + 0xe),pUVar9);
          if ((!bVar8) ||
             (FVar6 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)(plVar11 + 0xe))->Handle,
             FVar6.Handle == (UObject *)0x0)) break;
          pFVar12 = &local_68;
          local_68 = FVar6;
        }
        TArray<UObject_const_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<UObject_const_*>
                  (param_1,&pFVar12->Handle);
        break;
      }
    }
    uVar10 = (ulonglong)uVar3;
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// RefreshLinkedProperties @ 14a103590

void __thiscall FRigVMMemoryStorageStruct::RefreshLinkedProperties(FRigVMMemoryStorageStruct *this)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UPropertyBag *pUVar7;
  longlong local_18 [2];
  
  piVar1 = &(this->LinkedProperties).ArrayMax;
  (this->LinkedProperties).ArrayNum = 0;
  if ((this->LinkedProperties).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LinkedProperties).AllocatorInstance,0,piVar1);
  }
  pUVar7 = FInstancedPropertyBag::GetPropertyBagStruct((FInstancedPropertyBag *)this);
  if ((pUVar7 != (UPropertyBag *)0x0) && (local_18[0] = pUVar7->_padding_, local_18[0] != 0)) {
    uVar2 = *(uint *)(*(longlong *)(local_18[0] + 8) + 0x18);
    while ((uVar2 >> 0xf & 1) != 0) {
      pFVar3 = (this->LinkedProperties).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->LinkedProperties).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->LinkedProperties).AllocatorInstance,piVar1);
      }
      (this->LinkedProperties).ArrayNum = iVar6 + 1;
      *(longlong *)((this->LinkedProperties).AllocatorInstance.Data + (longlong)iVar6 * 8) =
           local_18[0];
      local_18[0] = *(longlong *)(local_18[0] + 0x18);
      if (local_18[0] == 0) {
        return;
      }
      uVar2 = *(uint *)(*(longlong *)(local_18[0] + 8) + 0x18);
    }
  }
  return;
}

// RefreshPropertyPaths @ 14a103830

/* WARNING: Removing unreachable block (ram,0x00014a1039a8) */
/* WARNING: Removing unreachable block (ram,0x00014a1039b5) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FRigVMMemoryStorageStruct::RefreshPropertyPaths(FRigVMMemoryStorageStruct *this)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  FRigVMPropertyPath *pFVar6;
  uint uVar7;
  TArray<FRigVMPropertyPathSegment,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FRigVMPropertyPath *pFVar12;
  TArray<FRigVMPropertyPathSegment,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  FRigVMPropertyPath local_68;
  
  TArray<FRigVMPropertyPath,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&this->PropertyPaths,(this->PropertyPathDescriptions).ArrayNum,Default);
  uVar9 = 0;
  if (0 < (this->PropertyPaths).ArrayNum) {
    local_res18 = 0;
    local_res20 = 0;
    do {
      local_88 = 0;
      local_80 = 0;
      uVar7 = ~uVar9 >> 0x1f;
      local_78 = 0;
      local_70 = 0;
      uVar4 = 0;
      if ((int)uVar9 < (this->PropertyPaths).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar10 = (this->PropertyPaths).AllocatorInstance.Data + local_res18;
      if (pFVar10 != (FScriptContainerElement *)&local_88) {
        if (*(void **)pFVar10 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar10);
        }
        *(undefined8 *)pFVar10 = 0;
        local_88 = 0;
        local_80 = 0;
        *(undefined4 *)(pFVar10 + 8) = 0;
        *(undefined4 *)(pFVar10 + 0xc) = 0;
      }
      pFVar11 = pFVar10 + 0x10;
      if (pFVar11 != (FScriptContainerElement *)&local_78) {
        if (*(void **)pFVar11 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar11);
        }
        uVar2 = local_70._4_4_;
        *(undefined8 *)pFVar11 = 0;
        *(undefined4 *)(pFVar10 + 0x18) = 0;
        local_70 = 0;
        local_78 = 0;
        *(undefined4 *)(pFVar10 + 0x1c) = uVar2;
      }
      uVar4 = 0;
      if ((int)uVar9 < (this->PropertyPathDescriptions).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = *(uint *)((this->PropertyPathDescriptions).AllocatorInstance.Data + local_res20);
      if ((-1 < (int)uVar4) && ((int)uVar4 < (this->LinkedProperties).ArrayNum)) {
        uVar5 = 0;
        if ((int)uVar9 < (this->PropertyPathDescriptions).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar10 = (this->PropertyPathDescriptions).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar4 < (this->LinkedProperties).ArrayNum) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = FRigVMPropertyPath::FRigVMPropertyPath
                           (&local_68,
                            *(FProperty **)
                             ((this->LinkedProperties).AllocatorInstance.Data +
                             (longlong)(int)uVar4 * 8),(FString *)(pFVar10 + local_res20 + 0x18));
        uVar4 = 0;
        if ((int)uVar9 < (this->PropertyPaths).ArrayNum) {
          uVar4 = uVar7;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar12 = (FRigVMPropertyPath *)((this->PropertyPaths).AllocatorInstance.Data + local_res18)
        ;
        if (pFVar12 != pFVar6) {
          pFVar10 = (pFVar12->Path).Data.AllocatorInstance.Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (pFVar12->Path).Data.AllocatorInstance.Data = (pFVar6->Path).Data.AllocatorInstance.Data;
          (pFVar6->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar12->Path).Data.ArrayNum = (pFVar6->Path).Data.ArrayNum;
          (pFVar12->Path).Data.ArrayMax = (pFVar6->Path).Data.ArrayMax;
          (pFVar6->Path).Data.ArrayNum = 0;
          (pFVar6->Path).Data.ArrayMax = 0;
        }
        pTVar8 = &pFVar6->Segments;
        pTVar13 = &pFVar12->Segments;
        if (pTVar13 != pTVar8) {
          pFVar10 = (pTVar13->AllocatorInstance).Data;
          if (pFVar10 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar10);
          }
          (pTVar13->AllocatorInstance).Data = (pTVar8->AllocatorInstance).Data;
          (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          (pFVar12->Segments).ArrayNum = (pFVar6->Segments).ArrayNum;
          (pFVar12->Segments).ArrayMax = (pFVar6->Segments).ArrayMax;
          (pFVar6->Segments).ArrayNum = 0;
          (pFVar6->Segments).ArrayMax = 0;
        }
        if (local_68.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Segments.AllocatorInstance.Data);
        }
        if (local_68.Path.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Path.Data.AllocatorInstance.Data);
        }
      }
      local_res18 = local_res18 + 0x20;
      local_res20 = local_res20 + 0x28;
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->PropertyPaths).ArrayNum);
  }
  return;
}

// Serialize @ 14a10e110

bool __thiscall
FRigVMMemoryStorageStruct::Serialize(FRigVMMemoryStorageStruct *this,FArchive *param_1)

{
  ERigVMMemoryType *pEVar1;
  
  FInstancedPropertyBag::Serialize((FInstancedPropertyBag *)this,param_1);
  pEVar1 = (ERigVMMemoryType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMMemoryType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->MemoryType,1);
  }
  else {
    this->MemoryType = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  TArrayPrivateFriend::Serialize<FRigVMPropertyPathDescription,TSizedDefaultAllocator<32>_>
            (param_1,&this->PropertyPathDescriptions);
  if ((param_1->field_0x28 & 1) != 0) {
    RefreshLinkedProperties(this);
    RefreshPropertyPaths(this);
    this->CachedMemoryHash = 0;
  }
  return true;
}

// SetDataFromString @ 14a110c60

bool __thiscall
FRigVMMemoryStorageStruct::SetDataFromString
          (FRigVMMemoryStorageStruct *this,int param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uchar *puVar4;
  FProperty *this_00;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  FString local_68;
  FOutputDevice local_58;
  undefined1 local_48;
  int local_44;
  FOutputDevice local_40;
  undefined1 local_30;
  int local_2c;
  
  if (((param_1 < 0) || ((this->LinkedProperties).ArrayNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(InPropertyIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                         ,0x11c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  puVar4 = GetData<unsigned_char>(this,param_1);
  this_00 = GetProperty(this,param_1);
  FOutputDevice::FOutputDevice(&local_58);
  local_48 = 0;
  local_44 = 0;
  local_58._padding_ = (longlong)&___7FRigVMMemoryStorageImportErrorContext__6B_;
  if ((param_2->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar2 = FProperty::ValidateImportFlags(this_00,0,&local_58);
  if ((bVar2) && ((FScriptContainerElement *)pwVar6 != (FScriptContainerElement *)0x0)) {
    (**(code **)(this_00->_padding_ + 0xe8))(this_00,pwVar6,puVar4,0,0,0x8000000,&local_58);
  }
  if (((0 < local_44) && (this_00 != (FProperty *)0x0)) &&
     ((*(uint *)(this_00->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
    ::FString::PrintfImpl(&local_68,L"(%s)");
    FOutputDevice::FOutputDevice(&local_40);
    local_40._padding_ = (longlong)&___7FRigVMMemoryStorageImportErrorContext__6B_;
    local_30 = 0;
    local_2c = 0;
    FOutputDevice::operator=(&local_58,&local_40);
    local_48 = local_30;
    local_44 = local_2c;
    FOutputDevice::~FOutputDevice(&local_40);
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar5.Data = local_68.Data.AllocatorInstance.Data;
    }
    bVar2 = FProperty::ValidateImportFlags(this_00,0,&local_58);
    if ((bVar2) && (FVar5.Data != (FScriptContainerElement *)0x0)) {
      (**(code **)(this_00->_padding_ + 0xe8))(this_00,FVar5.Data,puVar4,0,0,0x8000000,&local_58);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  bVar2 = local_44 == 0;
  FOutputDevice::~FOutputDevice(&local_58);
  return bVar2;
}

// SetDefaultValues @ 14a111070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigVMMemoryStorageStruct::SetDefaultValues
          (FRigVMMemoryStorageStruct *this,
          TArray<FRigVMPropertyDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  iVar5 = (this->LinkedProperties).ArrayNum;
  lVar6 = (longlong)iVar5;
  if (iVar5 == param_1->ArrayNum) {
    uVar7 = 0;
    if (0 < iVar5) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        iVar5 = *(int *)(pFVar1 + lVar8 + 0x40);
        if (1 < iVar5) {
          if (iVar5 == UE::RigVM::RigVMCore::Private::EmptyBraces.Data.ArrayNum) {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)(pFVar1 + lVar8 + 0x38),
                               (wchar_t *)
                               UE::RigVM::RigVMCore::Private::EmptyBraces.Data.AllocatorInstance.
                               Data);
            bVar3 = iVar5 == 0;
          }
          else {
            bVar3 = iVar5 + UE::RigVM::RigVMCore::Private::EmptyBraces.Data.ArrayNum == 1;
          }
          if (!bVar3) {
            SetDataFromString(this,uVar7,(FString *)(pFVar1 + lVar8 + 0x38));
          }
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x48;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4145273276119121319>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryStorageStruct.cpp"
                       ,0x259,"NumProperties == InPropertyDescriptions.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (1 < (byte)LogRigVM._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
      return;
    }
  }
  return;
}

// operator() @ 15054ba10

bool __thiscall
`FRigVMMemoryStorageStruct::GetPropertyTypeDataFromVMDescriptor'::__l9::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4145273276119121248>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_4145273276119121248>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054bab0

bool __thiscall
`FRigVMMemoryStorageStruct::GetPropertyTypeDataFromVMDescriptor'::__l9::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4145273276119121245>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_4145273276119121245>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15054bb50

bool __thiscall
`FRigVMMemoryStorageStruct::GetPropertyTypeDataFromVMDescriptor'::__l71::<lambda_3>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4145273276119121167>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<_4145273276119121167>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

