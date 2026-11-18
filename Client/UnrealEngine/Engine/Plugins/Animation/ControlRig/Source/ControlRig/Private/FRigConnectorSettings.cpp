// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 10

// FRigConnectorSettings @ 14a21ff50

FRigConnectorSettings * __thiscall
FRigConnectorSettings::FRigConnectorSettings
          (FRigConnectorSettings *this,FRigConnectorSettings *param_1)

{
  TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRigConnectionRuleStash *pFVar4;
  
  ::FString::FString(&this->Description,&param_1->Description);
  pTVar1 = &this->Rules;
  this->Type = param_1->Type;
  this->bOptional = param_1->bOptional;
  this->bIsArray = param_1->bIsArray;
  this->bPostConstruction = param_1->bPostConstruction;
  piVar2 = &(this->Rules).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Rules).ArrayNum;
  pFVar4 = (FRigConnectionRuleStash *)(param_1->Rules).AllocatorInstance.Data;
  (this->Rules).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FRigConnectionRuleStash,FRigConnectionRuleStash,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// StaticStruct @ 14a2c4330

UScriptStruct * __cdecl FRigConnectorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectorSettings.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectorSettings,(UObject *)pUVar1,
                         L"RigConnectorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRigConnectorSettings.OuterSingleton;
}

// FRigConnectorSettings @ 14a2d9570

FRigConnectorSettings * __thiscall
FRigConnectorSettings::FRigConnectorSettings(FRigConnectorSettings *this)

{
  (this->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Description).Data.ArrayNum = 0;
  (this->Description).Data.ArrayMax = 0;
  this->Type = Primary;
  this->bOptional = false;
  this->bIsArray = false;
  this->bPostConstruction = false;
  (this->Rules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Rules).ArrayNum = 0;
  (this->Rules).ArrayMax = 0;
  return this;
}

// ~FRigConnectorSettings @ 14a2de9c0

void __thiscall FRigConnectorSettings::~FRigConnectorSettings(FRigConnectorSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FRigConnectionRuleStash,int>
            ((FRigConnectionRuleStash *)(this->Rules).AllocatorInstance.Data,(this->Rules).ArrayNum)
  ;
  pFVar1 = (this->Rules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Description).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator== @ 14a2e1b10

bool __thiscall
FRigConnectorSettings::operator==(FRigConnectorSettings *this,FRigConnectorSettings *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  
  iVar5 = (this->Description).Data.ArrayNum;
  iVar1 = (param_1->Description).Data.ArrayNum;
  if (iVar5 == iVar1) {
    if (iVar5 < 2) goto LAB_14a2e1b62;
    iVar5 = wcscmp((wchar_t *)(this->Description).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->Description).Data.AllocatorInstance.Data);
    bVar10 = iVar5 == 0;
  }
  else {
    bVar10 = iVar5 + iVar1 == 1;
  }
  if (!bVar10) {
    return false;
  }
LAB_14a2e1b62:
  if ((((this->Type != param_1->Type) || (this->bOptional != param_1->bOptional)) ||
      (this->bIsArray != param_1->bIsArray)) ||
     ((this->bPostConstruction != param_1->bPostConstruction ||
      (iVar5 = (this->Rules).ArrayNum, iVar5 != (param_1->Rules).ArrayNum)))) {
    return false;
  }
  uVar7 = 0;
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Rules).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      pFVar9 = (this->Rules).AllocatorInstance.Data + lVar8;
      uVar4 = 0;
      if ((int)uVar7 < (param_1->Rules).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      iVar5 = *(int *)(pFVar9 + 8);
      pFVar6 = (param_1->Rules).AllocatorInstance.Data + lVar8;
      if (iVar5 == *(int *)(pFVar6 + 8)) {
        if (1 < iVar5) {
          iVar5 = wcscmp(*(wchar_t **)pFVar9,*(wchar_t **)pFVar6);
          bVar10 = iVar5 == 0;
          goto LAB_14a2e1c7d;
        }
      }
      else {
        bVar10 = iVar5 + *(int *)(pFVar6 + 8) == 1;
LAB_14a2e1c7d:
        if (!bVar10) {
          return false;
        }
      }
      iVar5 = *(int *)(pFVar9 + 0x18);
      if (iVar5 == *(int *)(pFVar6 + 0x18)) {
        if (1 < iVar5) {
          iVar5 = wcscmp(*(wchar_t **)(pFVar9 + 0x10),*(wchar_t **)(pFVar6 + 0x10));
          bVar10 = iVar5 == 0;
          goto LAB_14a2e1caa;
        }
      }
      else {
        bVar10 = iVar5 + *(int *)(pFVar6 + 0x18) == 1;
LAB_14a2e1caa:
        if (!bVar10) {
          return false;
        }
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x20;
    } while ((int)uVar7 < (this->Rules).ArrayNum);
  }
  return true;
}

// DefaultSettings @ 14a2ff070

FRigConnectorSettings * __cdecl
FRigConnectorSettings::DefaultSettings(FRigConnectorSettings *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FRigConnectionRule local_18;
  undefined1 local_10;
  
  local_10 = 0x80;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  piVar1 = &(__return_storage_ptr__->Rules).ArrayMax;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  __return_storage_ptr__->Type = Primary;
  __return_storage_ptr__->bOptional = false;
  __return_storage_ptr__->bIsArray = false;
  __return_storage_ptr__->bPostConstruction = false;
  (__return_storage_ptr__->Rules).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Rules).ArrayNum = 0;
  *piVar1 = 0;
  local_18 = (FRigConnectionRule)&___7FRigTypeConnectionRule__6B_;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x820,&(__return_storage_ptr__->Rules).AllocatorInstance,piVar1);
  (__return_storage_ptr__->Rules).ArrayNum = iVar2 + 1;
  FRigConnectionRuleStash::FRigConnectionRuleStash
            ((FRigConnectionRuleStash *)
             ((__return_storage_ptr__->Rules).AllocatorInstance.Data + (longlong)iVar2 * 0x20),
             &local_18);
  return __return_storage_ptr__;
}

// GetRulesHash @ 14a315fb0

uint __thiscall FRigConnectorSettings::GetRulesHash(FRigConnectorSettings *this)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  FRigConnectionRuleStash *pFVar6;
  FRigConnectionRuleStash *pFVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Rules).ArrayNum;
  uVar5 = (ulonglong)iVar1;
  pFVar6 = (FRigConnectionRuleStash *)(this->Rules).AllocatorInstance.Data;
  pFVar7 = pFVar6 + uVar5;
  while( true ) {
    if ((this->Rules).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigConnectionRuleStash_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    uVar2 = ::GetTypeHash(pFVar6);
    uVar3 = (uint)uVar5 - uVar2 ^ uVar2 >> 0xd;
    uVar8 = (-0x61c88647 - uVar3) - uVar2 ^ uVar3 << 8;
    uVar4 = (uVar2 - uVar8) - uVar3 ^ uVar8 >> 0xd;
    uVar2 = (uVar3 - uVar4) - uVar8 ^ uVar4 >> 0xc;
    uVar8 = (uVar8 - uVar2) - uVar4 ^ uVar2 << 0x10;
    uVar3 = (uVar4 - uVar8) - uVar2 ^ uVar8 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar8 ^ uVar3 >> 3;
    uVar4 = (uVar8 - uVar2) - uVar3 ^ uVar2 << 10;
    uVar5 = (ulonglong)((uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xf);
    pFVar6 = pFVar6 + 1;
  }
  return (uint)uVar5;
}

// Load @ 14a32ad80

void __thiscall FRigConnectorSettings::Load(FRigConnectorSettings *this,FArchive *param_1)

{
  EConnectorType *pEVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  ::operator<<(param_1,&this->Description);
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (0x1c < iVar5) {
    pEVar1 = (EConnectorType *)**(undefined8 **)&param_1->field_0x8;
    if ((EConnectorType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Type,1);
    }
    else {
      this->Type = *pEVar1;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    ::operator<<(param_1,&this->bOptional);
  }
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar5 < 0x24) {
    this->bIsArray = false;
  }
  else {
    ::operator<<(param_1,&this->bIsArray);
  }
  iVar5 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (iVar5 < 0x27) {
    this->bPostConstruction = false;
  }
  else {
    ::operator<<(param_1,&this->bPostConstruction);
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = 0;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar9 = local_res8[0];
  iVar5 = (this->Rules).ArrayNum;
  if (iVar5 < (int)local_res8[0]) {
    iVar5 = local_res8[0] - iVar5;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,iVar5,&(this->Rules).AllocatorInstance,&(this->Rules).ArrayNum,
                       &(this->Rules).ArrayMax);
    memset((this->Rules).AllocatorInstance.Data + (longlong)iVar6 * 0x20,0,(longlong)iVar5 << 5);
  }
  else {
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    if ((int)local_res8[0] < iVar5) {
      uVar8 = iVar5 - local_res8[0];
      if (((int)(local_res8[0] | uVar8) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->Rules,uVar9,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&(this->Rules).AllocatorInstance,(this->Rules).ArrayNum,
                   &(this->Rules).ArrayMax);
      }
    }
  }
  uVar9 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->Rules).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (this->Rules).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x20;
      ::operator<<(param_1,(FString *)pFVar7);
      ::operator<<(param_1,(FString *)(pFVar7 + 0x10));
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)local_res8[0]);
  }
  return;
}

// Save @ 14a344b20

void __thiscall FRigConnectorSettings::Save(FRigConnectorSettings *this,FArchive *param_1)

{
  EConnectorType *pEVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  uint local_res8 [2];
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  ::operator<<(param_1,&this->Description);
  pEVar1 = (EConnectorType *)**(undefined8 **)&param_1->field_0x8;
  if ((EConnectorType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Type,1);
  }
  else {
    this->Type = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&this->bOptional);
  ::operator<<(param_1,&this->bIsArray);
  ::operator<<(param_1,&this->bPostConstruction);
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (this->Rules).ArrayNum;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  uVar7 = 0;
  if (0 < (int)local_res8[0]) {
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->Rules).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = (this->Rules).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      ::operator<<(param_1,(FString *)pFVar6);
      ::operator<<(param_1,(FString *)(pFVar6 + 0x10));
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)local_res8[0]);
  }
  return;
}

// operator= @ 14a3bda60

FRigConnectorSettings * __thiscall
FRigConnectorSettings::operator=(FRigConnectorSettings *this,FRigConnectorSettings *param_1)

{
  TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRigConnectionRuleStash *pFVar4;
  
  ::FString::operator=(&this->Description,&param_1->Description);
  this->Type = param_1->Type;
  this->bOptional = param_1->bOptional;
  this->bIsArray = param_1->bIsArray;
  pTVar1 = &this->Rules;
  this->bPostConstruction = param_1->bPostConstruction;
  if (pTVar1 != &param_1->Rules) {
    DestructItems<FRigConnectionRuleStash,int>
              ((FRigConnectionRuleStash *)(pTVar1->AllocatorInstance).Data,(this->Rules).ArrayNum);
    iVar3 = (param_1->Rules).ArrayNum;
    piVar2 = &(this->Rules).ArrayMax;
    pFVar4 = (FRigConnectionRuleStash *)(param_1->Rules).AllocatorInstance.Data;
    (this->Rules).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<FRigConnectionRuleStash,FRigConnectionRuleStash,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

