// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b51b210

UClass * __cdecl UDS_M_ResultUI::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ResultUI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ResultUI",
               &Z_Registration_Info_UClass_UDS_M_ResultUI.InnerSingleton,
               StaticRegisterNativesUDS_M_ResultUI,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_ResultUI>,InternalVTableHelperCtorCaller<UDS_M_ResultUI>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ResultUI.InnerSingleton;
}

// UDS_M_ResultUI @ 14b522250

UDS_M_ResultUI * __thiscall
UDS_M_ResultUI::UDS_M_ResultUI(UDS_M_ResultUI *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ResultUI__6B_;
  (this->RewardItemDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RewardItemDataList).ArrayNum = 0;
  (this->RewardItemDataList).ArrayMax = 0;
  (this->RewardMoneyDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RewardMoneyDataList).ArrayNum = 0;
  (this->RewardMoneyDataList).ArrayMax = 0;
  this->TitleStringID = 0;
  this->ResultRewardType = None;
  return this;
}

// UDS_M_ResultUI @ 14b5222b0

UDS_M_ResultUI * __thiscall
UDS_M_ResultUI::UDS_M_ResultUI(UDS_M_ResultUI *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ResultUI__6B_;
  (this->RewardItemDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RewardItemDataList).ArrayNum = 0;
  (this->RewardItemDataList).ArrayMax = 0;
  (this->RewardMoneyDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RewardMoneyDataList).ArrayNum = 0;
  (this->RewardMoneyDataList).ArrayMax = 0;
  this->TitleStringID = 0;
  this->ResultRewardType = None;
  return this;
}

// ~UDS_M_ResultUI @ 14b523590

void __thiscall UDS_M_ResultUI::~UDS_M_ResultUI(UDS_M_ResultUI *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_ResultUI__6B_;
  pFVar1 = (this->RewardMoneyDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RewardItemDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5263a0

UClass * __cdecl UDS_M_ResultUI::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ResultUI.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ResultUI",
               &Z_Registration_Info_UClass_UDS_M_ResultUI.InnerSingleton,
               StaticRegisterNativesUDS_M_ResultUI,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_M_ResultUI>,InternalVTableHelperCtorCaller<UDS_M_ResultUI>,
               local_res8,UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ResultUI.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ResultUI @ 14b527560

void __cdecl UDS_M_ResultUI::StaticRegisterNativesUDS_M_ResultUI(void)

{
  return;
}

// GetViewModelContext @ 14bd64b20

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ResultUI::GetViewModelContext
          (UDS_M_ResultUI *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__
          ,EDS_ViewModelTemplateKey param_1,FName param_2,FName param_3)

{
  UDS_ModelBase::GetViewModelContext
            ((UDS_ModelBase *)this,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// GetViewModelContext @ 14bd64b50

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ResultUI::GetViewModelContext
          (UDS_M_ResultUI *this,TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__
          )

{
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 14bd66100

void __thiscall UDS_M_ResultUI::Init(UDS_M_ResultUI *this,AccelWaitResponse *param_1)

{
  int *piVar1;
  
  piVar1 = &(this->RewardItemDataList).ArrayMax;
  (this->RewardItemDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->RewardItemDataList).AllocatorInstance,0,piVar1);
  }
  return;
}

// Init @ 14bd66140

void __thiscall UDS_M_ResultUI::Init(UDS_M_ResultUI *this,AchievementCompleteAllResponse *param_1)

{
  int *piVar1;
  
  piVar1 = &(this->RewardItemDataList).ArrayMax;
  (this->RewardItemDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->RewardItemDataList).AllocatorInstance,0,piVar1);
  }
  return;
}

// Init @ 14bd66180

void __thiscall UDS_M_ResultUI::Init(UDS_M_ResultUI *this,AchievementCompleteResponse *param_1)

{
  int *piVar1;
  
  piVar1 = &(this->RewardItemDataList).ArrayMax;
  (this->RewardItemDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->RewardItemDataList).AllocatorInstance,0,piVar1);
  }
  return;
}

// Init @ 14bd661c0

void __thiscall UDS_M_ResultUI::Init(UDS_M_ResultUI *this,ItemDismantleResponse *param_1)

{
  int *piVar1;
  
  piVar1 = &(this->RewardItemDataList).ArrayMax;
  (this->RewardItemDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->RewardItemDataList).AllocatorInstance,0,piVar1);
  }
  return;
}

// Init @ 14bd66200

void __thiscall UDS_M_ResultUI::Init(UDS_M_ResultUI *this,ResultUiResponse *param_1,long64 param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FDS_RewardData,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  uint3 uStack_50;
  undefined1 uStack_4d;
  uint3 uStack_40;
  undefined1 uStack_3d;
  
  pTVar3 = &this->RewardItemDataList;
  uVar12 = 0;
  this->ResultRewardType = (EDS_RewardType)(param_1->_impl_).reward_type_;
  piVar1 = &(this->RewardItemDataList).ArrayMax;
  (this->RewardItemDataList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  pTVar4 = &this->RewardMoneyDataList;
  piVar2 = &(this->RewardMoneyDataList).ArrayMax;
  (this->RewardMoneyDataList).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  this->TitleStringID = param_2;
  bVar13 = 0;
  if ((this->ResultRewardType == DropLucky) || (this->ResultRewardType == StuffGather_Lucky)) {
    bVar13 = 1;
  }
  lVar15 = (longlong)*(int *)&(param_1->_impl_).db_work_items_.field_0x8;
  uVar14 = uVar12;
  if (0 < lVar15) {
    do {
      uVar10 = *(ulonglong *)&(param_1->_impl_).db_work_items_;
      if ((uVar10 & 1) != 0) {
        uVar10 = *(ulonglong *)(uVar10 + 7 + uVar12 * 8);
      }
      iVar11 = *(int *)(uVar10 + 0x28);
      bVar6 = false;
      if (iVar11 == 9) {
        bVar6 = true;
        iVar11 = *(int *)(*(longlong *)(uVar10 + 0x20) + 0x28);
        iVar9 = *(int *)(*(longlong *)(uVar10 + 0x20) + 0x20);
LAB_14bd66315:
        if ((0 < iVar11) && (0 < iVar9)) {
          if (bVar6) {
            iVar7 = (this->RewardMoneyDataList).ArrayNum;
            uStack_50 = (uint3)bVar13;
            if (iVar7 == *piVar2) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&pTVar4->AllocatorInstance,piVar2);
            }
            (this->RewardMoneyDataList).ArrayNum = iVar7 + 1;
            pFVar8 = (pTVar4->AllocatorInstance).Data;
            uVar16 = _uStack_50;
          }
          else {
            iVar7 = (this->RewardItemDataList).ArrayNum;
            uStack_40 = (uint3)bVar13;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x410,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->RewardItemDataList).ArrayNum = iVar7 + 1;
            pFVar8 = (pTVar3->AllocatorInstance).Data;
            uVar16 = _uStack_40;
          }
          pFVar8 = pFVar8 + (longlong)iVar7 * 0x10;
          *(int *)pFVar8 = iVar11;
          *(int *)(pFVar8 + 4) = iVar9;
          *(undefined4 *)(pFVar8 + 8) = uVar16;
          *(int *)(pFVar8 + 0xc) = (int)uVar14;
        }
      }
      else {
        if (iVar11 == 10) {
          iVar9 = 1;
          iVar11 = *(int *)(*(longlong *)(uVar10 + 0x20) + 0x58);
          goto LAB_14bd66315;
        }
        if (iVar11 == 0xb) {
          lVar5 = *(longlong *)(uVar10 + 0x20);
          iVar9 = *(int *)(lVar5 + 0x28) + *(int *)(lVar5 + 0x24);
          iVar11 = *(int *)(lVar5 + 0x20);
          goto LAB_14bd66315;
        }
      }
      uVar12 = uVar12 + 1;
      uVar14 = (ulonglong)((int)uVar14 + 1);
    } while ((longlong)uVar12 < lVar15);
  }
  return;
}

// PreInitBindViewModel @ 14bd852b0

void __thiscall UDS_M_ResultUI::PreInitBindViewModel(UDS_M_ResultUI *this)

{
  return;
}

