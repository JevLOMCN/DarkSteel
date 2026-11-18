// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 47

// StaticClass @ 14b53c1c0

UClass * __cdecl UDS_NpcFunctionGift::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionGift.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionGift",
               &Z_Registration_Info_UClass_UDS_NpcFunctionGift.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionGift,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionGift>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionGift>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionGift.InnerSingleton;
}

// UDS_NpcFunctionGift @ 14b540820

UDS_NpcFunctionGift * __thiscall
UDS_NpcFunctionGift::UDS_NpcFunctionGift(UDS_NpcFunctionGift *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UDS_NpcFunctionBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ItemBasketInterface__;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->NpcEntityID = 0;
  this->NpcTID = 0;
  (this->NPCGiftBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCGiftBasket).ArrayNum = 0;
  (this->NPCGiftBasket).ArrayMax = 0;
  this->SelectedBasketSlotIndex = -1;
  this->GiftBasketSlotMax = 0;
  return this;
}

// UDS_NpcFunctionGift @ 14b5408a0

UDS_NpcFunctionGift * __thiscall
UDS_NpcFunctionGift::UDS_NpcFunctionGift(UDS_NpcFunctionGift *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UDS_NpcFunctionBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ItemBasketInterface__;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->NpcEntityID = 0;
  this->NpcTID = 0;
  (this->NPCGiftBasket).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NPCGiftBasket).ArrayNum = 0;
  (this->NPCGiftBasket).ArrayMax = 0;
  this->SelectedBasketSlotIndex = -1;
  this->GiftBasketSlotMax = 0;
  return this;
}

// ~UDS_NpcFunctionGift @ 14b541960

void __thiscall UDS_NpcFunctionGift::~UDS_NpcFunctionGift(UDS_NpcFunctionGift *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDS_NpcFunctionBase__;
  this->_padding_ = (longlong)&_vftable__for__IDS_ItemBasketInterface__;
  pFVar1 = (this->NPCGiftBasket).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IDS_ItemBasketInterface__6B_;
  this->_padding_ = (longlong)&___7UDS_NpcFunctionBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetBasketMoneyVisibility @ 14b542970

ESlateVisibility __thiscall UDS_NpcFunctionGift::GetBasketMoneyVisibility(UDS_NpcFunctionGift *this)

{
  return Collapsed;
}

// GetBasketType @ 14b5429c0

EDS_ItemBasketType __thiscall UDS_NpcFunctionGift::GetBasketType(UDS_NpcFunctionGift *this)

{
  return GiftBasket;
}

// GetPrivateStaticClass @ 14b5430b0

UClass * __cdecl UDS_NpcFunctionGift::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcFunctionGift.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcFunctionGift",
               &Z_Registration_Info_UClass_UDS_NpcFunctionGift.InnerSingleton,
               StaticRegisterNativesUDS_NpcFunctionGift,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcFunctionGift>,
               InternalVTableHelperCtorCaller<UDS_NpcFunctionGift>,local_res8,
               UDS_NpcFunctionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcFunctionGift.InnerSingleton;
}

// IsAbleGarbage @ 14b5439b0

bool __thiscall UDS_NpcFunctionGift::IsAbleGarbage(UDS_NpcFunctionGift *this)

{
  return false;
}

// StaticRegisterNativesUDS_NpcFunctionGift @ 14b543b10

void __cdecl UDS_NpcFunctionGift::StaticRegisterNativesUDS_NpcFunctionGift(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_NpcFunctionGift_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// _getUObject @ 14b545240

UObject * __thiscall UDS_NpcFunctionGift::_getUObject(UDS_NpcFunctionGift *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execOpenNpcGiftCallback @ 14b5453a0

void __cdecl
UDS_NpcFunctionGift::execOpenNpcGiftCallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OpenNpcGiftCallback((UDS_NpcFunctionGift *)param_1,local_res10);
  return;
}

// ClearAllBasket @ 14bed9f60

void __thiscall UDS_NpcFunctionGift::ClearAllBasket(UDS_NpcFunctionGift *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  (this->NPCGiftBasket).ArrayNum = 0;
  if ((this->NPCGiftBasket).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->NPCGiftBasket).AllocatorInstance,0,&(this->NPCGiftBasket).ArrayMax);
  }
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<enum_EDS_ItemBasketType_const_>::Broadcast
              (&pUVar1->OnClearedBasket,GiftBasket);
  }
                    /* WARNING: Could not recover jumptable at 0x00014bed9fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x98))(&this->_padding_,0xffffffff);
  return;
}

// GetBasketItemContextList @ 14beec580

TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NpcFunctionGift::GetBasketItemContextList
          (UDS_NpcFunctionGift *this,
          TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *pTVar6;
  UClass *pUVar7;
  undefined8 *puVar8;
  FObjectPtr_u_0 FVar9;
  TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> TVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  FObjectPtr_u_0 FVar13;
  FObjectPtr_u_0 FVar14;
  FObjectPtr_u_0 FVar15;
  FWeakObjectPtr local_res8;
  FObjectPtr_u_0 local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  longlong *local_68;
  undefined1 local_60 [8];
  TReferenceControllerBase<1> *local_58;
  
  FVar14.Handle = (UObject *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FVar13.Handle = FVar14.Handle;
  FVar15.Handle = FVar14.Handle;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      FVar9.Handle = (UObject *)&local_res20;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)FVar9);
      iVar12 = FVar13._0_4_;
      if ((-1 < iVar12) && (iVar12 < (int)this->_padding_)) {
        if (iVar12 < 0) {
          FVar9.Handle = (UObject *)0x1506109c0;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar6;
          }
        }
        local_res8 = *(FWeakObjectPtr *)((longlong)&(FVar15.Handle)->field_0x0 + this->_padding_);
      }
      TVar10.WeakPtr._1_7_ = FVar9._1_7_;
      TVar10.WeakPtr.ObjectIndex._0_1_ = 0x27;
      DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res10,TVar10);
      if ((UDS_M_ItemImplBase *)local_res10.Handle == (UDS_M_ItemImplBase *)0x0) {
LAB_14beec683:
        FVar13.Handle = FVar14.Handle;
      }
      else {
        pUVar7 = Z_Construct_UClass_UDS_M_ItemImplNpcGiftBasketSlot_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar7);
        FVar13 = local_res10;
        if (!bVar4) goto LAB_14beec683;
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if ((UDS_M_ItemImplBase *)FVar13.Handle == (UDS_M_ItemImplBase *)0x0) goto LAB_14beec795;
      }
      else {
        if ((UDS_M_ItemImplBase *)FVar13.Handle == (UDS_M_ItemImplBase *)0x0) {
LAB_14beec795:
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7675015015019052891>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionGift.cpp"
                             ,0xa5,"false");
          if (!bVar4) {
            return __return_storage_ptr__;
          }
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<TSharedPtr<FDS_ViewModelContext,1>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar6;
        }
        UE::GC::MarkAsReachable(FVar13.Handle);
      }
      plVar1 = &this[-1]._padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar1);
      }
      local_res18.ObjectIndex = 0;
      local_res18.ObjectSerialNumber = 0;
      local_68 = plVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)plVar1);
      }
      FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_68);
      *(int *)&(FVar13.Handle + 0x1e0)->field_0x10 = local_res18.ObjectIndex;
      *(int *)&(FVar13.Handle + 0x1e0)->field_0x14 = local_res18.ObjectSerialNumber;
      *(int *)&FVar13.Handle[0xc].field_0x18 = iVar12;
      UDS_M_ItemImplBase::SetSelected
                ((UDS_M_ItemImplBase *)FVar13.Handle,iVar12 == (int)this->_padding_);
      puVar8 = (undefined8 *)
               (**(code **)(*(longlong *)FVar13.Handle + 0x310))(FVar13.Handle,local_60);
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar11 = *puVar8;
      lVar2 = puVar8[1];
      *(longlong *)(pFVar11 + 8) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      FVar13._0_4_ = iVar12 + 1;
      FVar13._4_4_ = 0;
      FVar15 = (FObjectPtr_u_0)&(FVar15.Handle)->field_0x10;
    } while ((int)FVar13._0_4_ < *(int *)((longlong)&this->_padding_ + 4));
  }
  return __return_storage_ptr__;
}

// GetBasketSlotIndex @ 14beed140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_NpcFunctionGift::GetBasketSlotIndex
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  FWeakObjectPtr *this_00;
  uint uVar8;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    uVar8 = 0;
    iVar4 = (this->NPCGiftBasket).ArrayNum;
    if (0 < iVar4) {
      do {
        uVar3 = 0;
        if ((int)uVar8 < (this->NPCGiftBasket).ArrayNum) {
          uVar3 = ~uVar8 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        this_00 = (FWeakObjectPtr *)
                  ((this->NPCGiftBasket).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10);
        bVar2 = FWeakObjectPtr::IsValid(this_00);
        if (bVar2) {
          pUVar6 = FWeakObjectPtr::Get(this_00);
          pUVar7 = FWeakObjectPtr::Get(&local_res10);
          if (*(longlong *)&pUVar6[8].field_0x8 == *(longlong *)&pUVar7[8].field_0x8) {
            return uVar8;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar4);
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NpcFunctionGift::GetBasketSlotIndex",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x331,L"InItemData.IsValid() == false");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  return -1;
}

// GetBasketTitle @ 14beed2f0

FDS_Text * __thiscall
UDS_NpcFunctionGift::GetBasketTitle(UDS_NpcFunctionGift *this,FDS_Text *__return_storage_ptr__)

{
  __return_storage_ptr__->StringTableType = None;
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(__return_storage_ptr__,StringUi,0x4e20b);
  return __return_storage_ptr__;
}

// GetBasketWeight @ 14beed3d0

int __thiscall UDS_NpcFunctionGift::GetBasketWeight(UDS_NpcFunctionGift *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (int)this->_padding_;
  iVar5 = 0;
  this_00 = (FWeakObjectPtr *)this->_padding_;
  pFVar4 = this_00 + (longlong)iVar1 * 2;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FDS_NPCGiftItemInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)this_00,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(this_00);
      iVar5 = iVar5 - (this_00[1].ObjectSerialNumber + this_00[1].ObjectIndex) *
                      *(int *)&pUVar3[0x15].field_0x14;
    }
    this_00 = this_00 + 2;
  }
  return iVar5;
}

// GetNPCGiftBasket @ 14beeebb0

TArray<FDS_NPCGiftItemInfo,TSizedDefaultAllocator<32>_> * __thiscall
UDS_NpcFunctionGift::GetNPCGiftBasket(UDS_NpcFunctionGift *this)

{
  return &this->NPCGiftBasket;
}

// GetNPCGiftItemInfoByBasketSlotIndex @ 14beeebc0

FDS_NPCGiftItemInfo * __thiscall
UDS_NpcFunctionGift::GetNPCGiftItemInfoByBasketSlotIndex(UDS_NpcFunctionGift *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_NPCGiftItemInfo *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->NPCGiftBasket).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->NPCGiftBasket).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDS_NPCGiftItemInfo *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FDS_NPCGiftItemInfo *)
           ((this->NPCGiftBasket).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FDS_NPCGiftItemInfo *)0x0;
}

// GetNPCGiftItemInfoByItemData @ 14beeec50

FDS_NPCGiftItemInfo * __thiscall
UDS_NpcFunctionGift::GetNPCGiftItemInfoByItemData
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UObject *pUVar4;
  FDS_NPCGiftItemInfo *this_00;
  FDS_NPCGiftItemInfo *pFVar5;
  FWeakObjectPtr local_res10;
  undefined1 local_res18 [8];
  
  local_res10 = param_1.WeakPtr;
  bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar2) {
    iVar1 = (this->NPCGiftBasket).ArrayNum;
    this_00 = (FDS_NPCGiftItemInfo *)(this->NPCGiftBasket).AllocatorInstance.Data;
    pFVar5 = this_00 + iVar1;
    while( true ) {
      if ((this->NPCGiftBasket).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FDS_NPCGiftItemInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (this_00 == pFVar5) break;
      bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        (&this_00->ItemData,(void *)0x0);
      if (!bVar2) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        pUVar4 = FWeakObjectPtr::Get(&local_res10);
        if (*(longlong *)&pUVar3[8].field_0x8 == *(longlong *)&pUVar4[8].field_0x8) {
          return this_00;
        }
      }
      this_00 = this_00 + 1;
    }
  }
  return (FDS_NPCGiftItemInfo *)0x0;
}

// GetNpcRelationGradeUpData @ 14beeed20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_NpcRelationGradeUpData * __thiscall
UDS_NpcFunctionGift::GetNpcRelationGradeUpData
          (UDS_NpcFunctionGift *this,FDS_NpcRelationGradeUpData *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  FDS_NpcRelationBaseTableRow *this_00;
  UObject *pUVar7;
  FDS_NpcRelationGradeTableRow *this_01;
  FDS_NpcRelationGradeUpData *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStackY_408 [32];
  FScriptContainerElement local_3d8;
  int local_3d0;
  FWeakObjectPtr local_3c0;
  UDS_NpcFunctionGift *local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_408;
  __return_storage_ptr__->TargetGrade = 0;
  __return_storage_ptr__->AddPoint = 0;
  __return_storage_ptr__->PostGradeUpPoint = 0;
  local_3b8 = this;
  UDS_NpcRelationData::GetData
            ((ulong64)&local_3c0,UDS_PlayerData::MainPlayerEntityID,SUB81(this->NpcTID,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_3c0);
  if (bVar2) {
    this_00 = FDS_NpcRelationBaseTableRow::GetRef(this->NpcTID,true);
    bVar2 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
    if (bVar2) {
      pUVar7 = FWeakObjectPtr::Get(&local_3c0);
      iVar5 = *(int *)&pUVar7[3].field_0x14;
      pUVar7 = FWeakObjectPtr::Get(&local_3c0);
      local_3d0 = *(int *)&pUVar7[3].field_0x10;
      iVar3 = GetTotalAddRelationPointInBasket(this);
      for (; -1 < iVar3; iVar3 = iVar3 + iVar11) {
        if ((EDS_GradeType)iVar5 == this_00->MaxGrade) {
          __return_storage_ptr__->TargetGrade = iVar5;
          __return_storage_ptr__->AddPoint = 0;
          __return_storage_ptr__->PostGradeUpPoint = 0;
          return __return_storage_ptr__;
        }
        this_01 = FDS_NpcRelationGradeTableRow::GetRef
                            (this_00->ID_NpcRelationGrade,(EDS_GradeType)iVar5);
        bVar2 = FDS_NpcRelationGradeTableRow::IsValid(this_01);
        if (!bVar2) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return __return_storage_ptr__;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_NpcFunctionGift::GetNpcRelationGradeUpData",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_168.Ptr,0x3aa,L"npcRelationGradeTableRow is Invalid.");
          if ((void *)local_168._padding_ == (void *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free((void *)local_168._padding_);
          return __return_storage_ptr__;
        }
        if (iVar3 + local_3d0 < this_01->ReqPoint) {
          __return_storage_ptr__->TargetGrade = iVar5;
          iVar5 = GetTotalAddRelationPointInBasket(local_3b8);
          __return_storage_ptr__->AddPoint = iVar5;
          __return_storage_ptr__->PostGradeUpPoint = iVar3 + local_3d0;
          return __return_storage_ptr__;
        }
        iVar11 = (this_00->EvolveConditionType).ArrayNum;
        uVar9 = 0;
        local_3d8 = (FScriptContainerElement)0x0;
        lVar12 = 0;
        if (0 < iVar11) {
          do {
            if ((-1 < (int)uVar9) && ((int)uVar9 < (this_00->EvolveGrade).ArrayNum)) {
              uVar10 = ~uVar9 >> 0x1f;
              uVar4 = 0;
              if ((int)uVar9 < (this_00->EvolveGrade).ArrayNum) {
                uVar4 = uVar10;
              }
              if ((uVar4 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                pFVar8 = (FDS_NpcRelationGradeUpData *)(*pcVar1)();
                return pFVar8;
              }
              if ((this_00->EvolveGrade).AllocatorInstance.Data[lVar12] == SUB41(iVar5 + 1,0)) {
                uVar4 = 0;
                if ((int)uVar9 < (this_00->EvolveConditionType).ArrayNum) {
                  uVar4 = uVar10;
                }
                if ((uVar4 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  pFVar8 = (FDS_NpcRelationGradeUpData *)(*pcVar1)();
                  return pFVar8;
                }
                local_3d8 = (this_00->EvolveConditionType).AllocatorInstance.Data[lVar12];
                uVar4 = 0;
                if ((int)uVar9 < (this_00->EvolveConditionValue).ArrayNum) {
                  uVar4 = uVar10;
                }
                if ((uVar4 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  pFVar8 = (FDS_NpcRelationGradeUpData *)(*pcVar1)();
                  return pFVar8;
                }
                break;
              }
            }
            uVar9 = uVar9 + 1;
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar11);
        }
        if (local_3d8 != (FScriptContainerElement)0x0) {
          pUVar7 = FWeakObjectPtr::Get(&local_3c0);
          if (*(int *)&pUVar7[3].field_0x14 < iVar5) {
            iVar11 = GetTotalAddRelationPointInBasket(local_3b8);
            local_3d0 = this_01->ReqPoint + (iVar11 - iVar3);
          }
          else {
            local_3d0 = this_01->ReqPoint - local_3d0;
          }
          __return_storage_ptr__->AddPoint = local_3d0;
          __return_storage_ptr__->TargetGrade = iVar5;
          __return_storage_ptr__->PostGradeUpPoint = this_01->ReqPoint;
          return __return_storage_ptr__;
        }
        iVar11 = local_3d0 - this_01->ReqPoint;
        local_3d0 = 0;
        iVar5 = iVar5 + 1;
      }
    }
    else {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_NpcFunctionGift::GetNpcRelationGradeUpData",0x2e,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_288.Ptr,0x394,L"npcRelationBaseTableRow is Invalid.");
        if ((void *)local_288._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_288._padding_);
        }
      }
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_3a8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_3a8,"UDS_NpcFunctionGift::GetNpcRelationGradeUpData",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_3a8.Ptr,0x38d,L"npcRelationData is Invalid.");
      if ((void *)local_3a8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3a8._padding_);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetNumOfBasket @ 14beef260

int __thiscall UDS_NpcFunctionGift::GetNumOfBasket(UDS_NpcFunctionGift *this)

{
  return (int)this->_padding_;
}

// GetQuantityControlContext @ 14beefad0

TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> * __thiscall
UDS_NpcFunctionGift::GetQuantityControlContext
          (UDS_NpcFunctionGift *this,
          TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *pTVar7;
  FDS_NPCGiftItemInfo *this_00;
  UObject *pUVar8;
  int *piVar9;
  int *piVar10;
  EDS_InventoryType local_res8 [16];
  
  MakeContext<FDS_ViewModelContext_CommonQuantityControl>(__return_storage_ptr__);
  if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  *(undefined4 *)&__return_storage_ptr__->Object->_padding_ = 0x15f;
  DS_CommonDataHelper::ItemValueMax();
  iVar6 = (**(code **)(this->_padding_ + 0x20))(this);
  this_00 = GetNPCGiftItemInfoByBasketSlotIndex((UDS_NpcFunctionGift *)&this[-1]._padding_,iVar6);
  if (this_00 != (FDS_NPCGiftItemInfo *)0x0) {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar5) {
      iVar6 = this_00->GiftCount_UnTradable;
      iVar1 = this_00->GiftCount_Tradable;
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
      local_res8[0] = PlayerNormal;
      piVar9 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
               ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar8[10].field_0x18,1,local_res8);
      piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                          (&pUVar8[8].field_0x18,(uint)local_res8[0],local_res8);
      iVar2 = *piVar9;
      iVar3 = *piVar10;
      if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
          return pTVar7;
        }
      }
      __return_storage_ptr__->Object->Min = 1.0;
      if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
          return pTVar7;
        }
      }
      __return_storage_ptr__->Object->Max = (float)(iVar2 + iVar3);
      if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
          return pTVar7;
        }
      }
      __return_storage_ptr__->Object->InitialQuantity = (float)(iVar6 + iVar1);
      if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
          return pTVar7;
        }
      }
      __return_storage_ptr__->Object->StepQuantity = 1.0;
      if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
          return pTVar7;
        }
      }
      TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_NpcFunctionGift>
                ((TMulticastDelegateRegistration<void___cdecl(float),FDefaultDelegateUserPolicy> *)
                 &__return_storage_ptr__->Object->OnQuantityChangeEvent,
                 (UDS_NpcFunctionGift *)(local_res8 + 8),(pmf_f76df443 *)&this[-1]._padding_);
      return __return_storage_ptr__;
    }
  }
  if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object->Min = 1.0;
  if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object->Max = 1.0;
  if (__return_storage_ptr__->Object == (FDS_ViewModelContext_CommonQuantityControl *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<FDS_ViewModelContext_CommonQuantityControl,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->Object->InitialQuantity = 1.0;
  return __return_storage_ptr__;
}

// GetSelectedBasketSlot @ 14bef0500

int __thiscall UDS_NpcFunctionGift::GetSelectedBasketSlot(UDS_NpcFunctionGift *this)

{
  return (int)this->_padding_;
}

// GetTotalAddRelationPointInBasket @ 14bef0600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_NpcFunctionGift::GetTotalAddRelationPointInBasket(UDS_NpcFunctionGift *this)

{
  FScriptContainerElement *pFVar1;
  EDS_GradeType EVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UDS_LogManager *pUVar9;
  FDS_NpcRelationBaseTableRow *this_00;
  FDS_NpcRelationItemTableRow *this_01;
  ulonglong uVar10;
  UObject *pUVar11;
  FDS_ItemBaseTableRow *this_02;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement FVar13;
  void *pvVar14;
  FWeakObjectPtr *pFVar15;
  longlong lVar16;
  uint uVar17;
  FWeakObjectPtr *this_03;
  longlong lVar18;
  undefined1 auStackY_3e8 [32];
  undefined1 local_3b8 [4];
  int local_3b4;
  FWeakObjectPtr *local_3b0;
  uint local_3a8;
  UDS_NpcFunctionGift *local_3a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  iVar8 = 0;
  local_3b4 = 0;
  local_3a0 = this;
  if (this->NpcTID == 0) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_398._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_398,"UDS_NpcFunctionGift::GetTotalAddRelationPointInBasket",0x35,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_398.Ptr,0x34f,L"NpcTID <= 0.");
    pvVar14 = (void *)local_398._padding_;
LAB_14bef07c8:
    if (pvVar14 != (void *)0x0) {
      FMemory::Free(pvVar14);
    }
    return 0;
  }
  this_00 = FDS_NpcRelationBaseTableRow::GetRef(this->NpcTID,true);
  bVar6 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
  if (!bVar6) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_NpcFunctionGift::GetTotalAddRelationPointInBasket",0x35,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_278.Ptr,0x356,L"npcRelationBaseTableRow is Invalid.");
    pvVar14 = (void *)local_278._padding_;
    goto LAB_14bef07c8;
  }
  this_01 = FDS_NpcRelationBaseTableRow::ID_NpcRealtionItemTable(this_00);
  bVar6 = FDS_NpcRelationItemTableRow::IsValid(this_01);
  if (!bVar6) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return 0;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NpcFunctionGift::GetTotalAddRelationPointInBasket",0x35,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_158.Ptr,0x35d,L"npcRelationItemTableRow is Invalid.");
    pvVar14 = (void *)local_158._padding_;
    goto LAB_14bef07c8;
  }
  local_3a8 = (this->NPCGiftBasket).ArrayNum;
  uVar10 = (ulonglong)(int)local_3a8;
  this_03 = (FWeakObjectPtr *)(this->NPCGiftBasket).AllocatorInstance.Data;
  local_3b0 = this_03 + uVar10 * 2;
  pFVar15 = local_3b0;
LAB_14bef0814:
  if ((this->NPCGiftBasket).ArrayNum != (int)uVar10) {
    local_3b8[0] = 0;
    `TCheckedPointerIterator<FDS_NPCGiftItemInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_3b8);
  }
  if (this_03 == pFVar15) {
    return iVar8;
  }
  bVar6 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)this_03,(void *)0x0);
  if (!bVar6) {
    pUVar11 = FWeakObjectPtr::Get(this_03);
    this_02 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar11[8].field_0x10,true);
    bVar6 = FDS_ItemBaseTableRow::IsValid(this_02);
    pFVar15 = local_3b0;
    if (bVar6) {
      EVar2 = this_02->ID_GradeType;
      pUVar11 = FWeakObjectPtr::Get(this_03);
      pFVar12 = (this_01->ID_Item).AllocatorInstance.Data;
      pFVar1 = pFVar12 + (longlong)(this_01->ID_Item).ArrayNum * 4;
      for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 4) {
        if (*(int *)pFVar12 == *(int *)&pUVar11[8].field_0x10) {
          pUVar11 = FWeakObjectPtr::Get(this_03);
          lVar18 = (longlong)(this_01->ID_Item).ArrayNum;
          uVar17 = 0;
          lVar16 = 0;
          iVar8 = *(int *)&pUVar11[8].field_0x10;
          if (0 < lVar18) goto LAB_14bef0903;
          goto LAB_14bef096b;
        }
      }
      pUVar11 = FWeakObjectPtr::Get(this_03);
      pFVar12 = (this_01->GiftItemType).AllocatorInstance.Data;
      pFVar1 = pFVar12 + (longlong)(this_01->GiftItemType).ArrayNum * 4;
      pFVar15 = local_3b0;
      if (pFVar12 == pFVar1) goto LAB_14bef0a8a;
      do {
        if (*(int *)pFVar12 == *(int *)&pUVar11[0x13].field_0x20) {
          pUVar11 = FWeakObjectPtr::Get(this_03);
          lVar18 = (longlong)(this_01->GiftItemType).ArrayNum;
          uVar17 = 0;
          lVar16 = 0;
          iVar8 = *(int *)&pUVar11[0x13].field_0x20;
          if (0 < lVar18) goto LAB_14bef0a00;
          goto LAB_14bef0a60;
        }
        pFVar12 = pFVar12 + 4;
      } while (pFVar12 != pFVar1);
      this_03 = this_03 + 2;
      uVar10 = (ulonglong)local_3a8;
      goto LAB_14bef0814;
    }
  }
  goto LAB_14bef0a8a;
  while( true ) {
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 1;
    if (lVar18 <= lVar16) break;
LAB_14bef0903:
    uVar7 = 0;
    if ((int)uVar17 < (this_01->ID_Item).ArrayNum) {
      uVar7 = ~uVar17 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if (*(int *)((this_01->ID_Item).AllocatorInstance.Data + lVar16 * 4) == iVar8) {
      uVar7 = 0;
      if ((int)uVar17 < (this_01->RewardItemPoint).ArrayNum) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar8 = (this_03[1].ObjectSerialNumber + this_03[1].ObjectIndex) *
              *(int *)((this_01->RewardItemPoint).AllocatorInstance.Data + lVar16 * 4);
      goto LAB_14bef0a76;
    }
  }
LAB_14bef096b:
  iVar8 = 0;
  goto LAB_14bef0a76;
  while( true ) {
    uVar17 = uVar17 + 1;
    lVar16 = lVar16 + 1;
    if (lVar18 <= lVar16) break;
LAB_14bef0a00:
    uVar7 = 0;
    if ((int)uVar17 < (this_01->GiftItemType).ArrayNum) {
      uVar7 = ~uVar17 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if (*(int *)((this_01->GiftItemType).AllocatorInstance.Data + lVar16 * 4) == iVar8) {
      uVar7 = 0;
      if ((int)uVar17 < (this_01->FavorType).ArrayNum) {
        uVar7 = ~uVar17 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      FVar13 = (this_01->FavorType).AllocatorInstance.Data[lVar16];
      goto LAB_14bef0a62;
    }
  }
LAB_14bef0a60:
  FVar13 = (FScriptContainerElement)0x0;
LAB_14bef0a62:
  iVar3 = this_03[1].ObjectSerialNumber;
  iVar4 = this_03[1].ObjectIndex;
  iVar8 = FDS_NpcRelationPointTableRow::GetRewardItemPoint((EDS_FavorType)FVar13,EVar2);
  iVar8 = iVar8 * (iVar3 + iVar4);
LAB_14bef0a76:
  iVar8 = local_3b4 + iVar8;
  pFVar15 = local_3b0;
  this = local_3a0;
  local_3b4 = iVar8;
LAB_14bef0a8a:
  uVar10 = (ulonglong)local_3a8;
  this_03 = this_03 + 2;
  goto LAB_14bef0814;
}

// IsEnableOpen @ 14bef4e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UDS_NpcFunctionGift::IsEnableOpen(int param_1,int param_2)

{
  bool bVar1;
  EDS_Template EVar2;
  UDS_LogManager *pUVar3;
  UDS_NpcRelationData *pUVar4;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_NpcRelationData::GetData
            ((ulong64)&local_158,UDS_PlayerData::MainPlayerEntityID,SUB41(param_1,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar1) {
    pUVar4 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_158);
    bVar1 = UDS_NpcRelationData::IsOverReqPoint(pUVar4,param_2);
    if (bVar1) {
      pUVar4 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_158);
      EVar2 = UDS_NpcRelationData::GetGradeUpCondition(pUVar4,param_2);
      if (EVar2 == Quest) {
        local_150._0_8_ = 0;
        local_150._8_8_ = 0;
        local_150._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x4e26a,Alert_None_01,&local_150);
        return false;
      }
    }
    bVar1 = true;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionGift::IsEnableOpen",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x42d,L"npcRelationData is Invalid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}

// IsGiftBasketRelationPointOverLimit @ 14bef4fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NpcFunctionGift::IsGiftBasketRelationPointOverLimit(UDS_NpcFunctionGift *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  FDS_NpcRelationBaseTableRow *this_00;
  UObject *pUVar8;
  FDS_NpcRelationGradeTableRow *pFVar9;
  undefined8 uVar10;
  void *pvVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStackY_518 [32];
  undefined1 local_4e8 [4];
  int local_4e4;
  uint local_4e0;
  FWeakObjectPtr local_4d8;
  TArray<FDS_NpcRelationGradeTableRow_const_*,TSizedDefaultAllocator<32>_> local_4d0;
  UDS_NpcFunctionGift *local_4c0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_518;
  local_4c0 = this;
  UDS_NpcRelationData::GetData
            ((ulong64)&local_4d8,UDS_PlayerData::MainPlayerEntityID,SUB81(this->NpcTID,0));
  bVar3 = FWeakObjectPtr::IsValid(&local_4d8);
  if (bVar3) {
    this_00 = FDS_NpcRelationBaseTableRow::GetRef(this->NpcTID,true);
    bVar3 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
    if (bVar3) {
      pUVar8 = FWeakObjectPtr::Get(&local_4d8);
      iVar17 = *(int *)&pUVar8[3].field_0x14;
      pFVar9 = FDS_NpcRelationGradeTableRow::GetRef
                         (this_00->ID_NpcRelationGrade,(EDS_GradeType)iVar17);
      bVar3 = FDS_NpcRelationGradeTableRow::IsValid(pFVar9);
      if (bVar3) {
        iVar17 = iVar17 + 1;
        iVar15 = pFVar9->ReqPoint;
        local_4e0 = (uint)this_00->MaxGrade;
        local_4e4 = iVar15;
        if (iVar17 < (int)local_4e0) {
          do {
            lVar16 = (longlong)(this_00->EvolveConditionType).ArrayNum;
            uVar12 = 0;
            lVar14 = 0;
            local_4e4 = iVar15;
            if (0 < lVar16) {
              do {
                uVar5 = 0;
                if ((int)uVar12 < (this_00->EvolveGrade).ArrayNum) {
                  uVar5 = ~uVar12 >> 0x1f;
                }
                if ((uVar5 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
                if ((this_00->EvolveGrade).AllocatorInstance.Data[lVar14] == SUB41(iVar17,0)) break;
                uVar12 = uVar12 + 1;
                lVar14 = lVar14 + 1;
              } while (lVar14 < lVar16);
              if ((int)uVar12 < 0) break;
            }
            if ((this_00->EvolveConditionType).ArrayNum <= (int)uVar12) break;
            uVar5 = 0;
            if ((int)uVar12 < (this_00->EvolveConditionType).ArrayNum) {
              uVar5 = ~uVar12 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            if ((this_00->EvolveConditionType).AllocatorInstance.Data[lVar14] !=
                (FScriptContainerElement)0x0) break;
            iVar15 = this_00->ID_NpcRelationGrade;
            FDS_NpcRelationGradeTableRow::GetAll(&local_4d0);
            iVar6 = local_4d0.ArrayNum;
            pFVar1 = local_4d0.AllocatorInstance.Data + (longlong)iVar6 * 8;
            uVar10 = local_4d0._8_8_;
            FVar13.Data = local_4d0.AllocatorInstance.Data;
            while( true ) {
              if ((int)uVar10 != iVar6) {
                local_4e8[0] = 0;
                `TCheckedPointerIterator<FDS_NpcRelationGradeTableRow_const_*,int,0>::operator!='::
                __l2::<lambda_1>::operator()(local_4e8);
                uVar10 = local_4d0._8_8_;
              }
              if (FVar13.Data == pFVar1) {
                if (local_4d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_4d0.AllocatorInstance.Data);
                }
                pFVar9 = &FDS_NpcRelationGradeTableRow::DefaultObject;
                goto LAB_14bef532d;
              }
              pFVar9 = *(FDS_NpcRelationGradeTableRow **)FVar13.Data;
              if ((pFVar9->GroupID == iVar15) &&
                 ((FScriptContainerElement)pFVar9->ID_Grade == SUB41(iVar17,0))) break;
              FVar13.Data = FVar13.Data + 8;
            }
            if (local_4d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4d0.AllocatorInstance.Data);
            }
LAB_14bef532d:
            bVar3 = FDS_NpcRelationGradeTableRow::IsValid(pFVar9);
            if (!bVar3) {
              pUVar7 = UDS_LogManager::GetInst();
              if (pUVar7 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar7 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"UDS_NpcFunctionGift::IsGiftBasketRelationPointOverLimit",0x37,
                         Yes);
              UDS_LogManager::PrintLog
                        (pUVar7,1,Warning,local_158.Ptr,0x41e,L"targetGradeTableRow is Invalid.");
              pvVar11 = (void *)local_158._padding_;
              goto LAB_14bef5418;
            }
            iVar17 = iVar17 + 1;
            iVar15 = local_4e4 + pFVar9->ReqPoint;
            local_4e4 = iVar15;
          } while (iVar17 < (int)local_4e0);
        }
        pUVar8 = FWeakObjectPtr::Get(&local_4d8);
        iVar17 = *(int *)&pUVar8[3].field_0x10;
        iVar6 = GetTotalAddRelationPointInBasket(local_4c0);
        return iVar15 < iVar6 + iVar17;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_NpcFunctionGift::IsGiftBasketRelationPointOverLimit",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_278.Ptr,0x3fe,L"npcRelationGradeTableRow is Invalid.");
      pvVar11 = (void *)local_278._padding_;
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_NpcFunctionGift::IsGiftBasketRelationPointOverLimit",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_398.Ptr,0x3f5,L"npcRelationBaseTableRow is Invalid.");
      pvVar11 = (void *)local_398._padding_;
    }
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_4b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_4b8,"UDS_NpcFunctionGift::IsGiftBasketRelationPointOverLimit",0x37,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_4b8.Ptr,0x3ee,L"npcRelationData is Invalid.");
    pvVar11 = (void *)local_4b8._padding_;
  }
LAB_14bef5418:
  if (pvVar11 != (void *)0x0) {
    FMemory::Free(pvVar11);
  }
  return false;
}

// OnAddBagItemToBasket @ 14bef6780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OnAddBagItemToBasket
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2
          )

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  int iVar3;
  int iVar4;
  FWeakObjectPtr local_res10 [2];
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    iVar4 = 0;
    if (0 < param_2) {
      iVar4 = param_2;
    }
    iVar3 = 0;
    if (param_2 < 0) {
      iVar3 = param_2;
    }
    OnAddBagItemToBasket
              (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10[0],iVar3,iVar4);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionGift::OnAddBagItemToBasket",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x291,L"InItemData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnAddBagItemToBasket @ 14bef6890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OnAddBagItemToBasket
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,int param_2
          ,int param_3)

{
  TArray<FDS_NPCGiftItemInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  FWeakObjectPtr FVar4;
  UDS_NpcFunctionGift *pUVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  UDS_ItemData *this_00;
  UObject *pUVar11;
  UDS_NPCShopEvent *pUVar12;
  int iVar13;
  FWeakObjectPtr *pFVar14;
  uint uVar15;
  FDS_NPCGiftItemInfo *this_01;
  FDS_NPCGiftItemInfo *pFVar16;
  FWeakObjectPtr local_res10 [3];
  undefined1 auStackY_318 [32];
  EDS_InventoryType local_2e8 [8];
  undefined1 local_2e0 [8];
  FWeakObjectPtr local_2d8;
  UDS_NpcFunctionGift *local_2d0;
  FDS_NPCGiftItemInfo local_2c8;
  undefined8 local_2b8;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_2b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2d8.ObjectIndex = param_3;
  local_res10[0] = param_1.WeakPtr;
  local_2d0 = this;
  bVar6 = FWeakObjectPtr::IsValid(local_res10);
  if (!bVar6) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_298._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_298,"UDS_NpcFunctionGift::OnAddBagItemToBasket",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar9,1,Warning,local_298.Ptr,0x29e,L"InItemData.IsValid() == false");
    if ((void *)local_298._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_298._padding_);
    return;
  }
  local_2e8[0] = PlayerNormal;
  pUVar10 = FWeakObjectPtr::Get(local_res10);
  TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
  ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar10[10].field_0x18,1,local_2e8);
  this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(local_res10);
  UDS_ItemData::GetStackCount_UnTradable(this_00,PlayerNormal);
  iVar7 = (this->NPCGiftBasket).ArrayNum;
  pTVar1 = &this->NPCGiftBasket;
  this_01 = (FDS_NPCGiftItemInfo *)(pTVar1->AllocatorInstance).Data;
  pFVar16 = this_01 + iVar7;
  do {
    if ((this->NPCGiftBasket).ArrayNum != iVar7) {
      local_2e0[0] = 0;
      `TCheckedPointerIterator<FDS_NPCGiftItemInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_2e0);
    }
    uVar15 = 0;
    if (this_01 == pFVar16) goto LAB_14bef6a44;
    bVar6 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals(&this_01->ItemData,(void *)0x0);
    if (!bVar6) {
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01);
      pUVar11 = FWeakObjectPtr::Get(local_res10);
      if (*(longlong *)&pUVar10[8].field_0x8 == *(longlong *)&pUVar11[8].field_0x8) break;
    }
    this_01 = this_01 + 1;
  } while( true );
  if (this_01 == (FDS_NPCGiftItemInfo *)0x0) {
LAB_14bef6a44:
    local_2c8.ItemData.WeakPtr.ObjectIndex = 0;
    local_2c8.ItemData.WeakPtr.ObjectSerialNumber = 0;
    local_2b8 = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_2c8,(FObjectPtr)&local_2b8);
    iVar13 = local_2d8.ObjectIndex;
    local_2c8.ItemData.WeakPtr = local_res10[0];
    local_2c8.GiftCount_UnTradable = local_2d8.ObjectIndex;
    local_2c8.GiftCount_Tradable = param_2;
    FDS_NPCGiftItemInfo::AdjustCount(&local_2c8);
    iVar7 = (this->NPCGiftBasket).ArrayNum;
    piVar2 = &(this->NPCGiftBasket).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&pTVar1->AllocatorInstance,piVar2);
    }
    FVar4.ObjectSerialNumber = local_2c8.GiftCount_UnTradable;
    FVar4.ObjectIndex = local_2c8.GiftCount_Tradable;
    (this->NPCGiftBasket).ArrayNum = iVar7 + 1;
    pFVar14 = (FWeakObjectPtr *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 0x10);
    *pFVar14 = local_2c8.ItemData.WeakPtr;
    pFVar14[1] = FVar4;
  }
  else {
    iVar13 = local_2d8.ObjectIndex;
    this_01->GiftCount_UnTradable = this_01->GiftCount_UnTradable + local_2d8.ObjectIndex;
    this_01->GiftCount_Tradable = this_01->GiftCount_Tradable + param_2;
    FDS_NPCGiftItemInfo::AdjustCount(this_01);
  }
  pUVar5 = local_2d0;
  if ((0 < iVar13 + param_2) && (bVar6 = IsGiftBasketRelationPointOverLimit(local_2d0), bVar6)) {
    local_2b0._0_8_ = 0;
    local_2b0._8_8_ = 0;
    local_2b0._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x4e267,Alert_None_01,&local_2b0);
  }
  pUVar12 = UDS_NPCShopEvent::GetEvent();
  if (pUVar12 != (UDS_NPCShopEvent *)0x0) {
    local_2d8 = local_res10[0];
    bVar6 = FWeakObjectPtr::IsValid(&local_2d8);
    if (bVar6) {
      iVar7 = (pUVar5->NPCGiftBasket).ArrayNum;
      uVar8 = 0xffffffff;
      if (0 < iVar7) {
        do {
          uVar8 = 0;
          if ((int)uVar15 < (this->NPCGiftBasket).ArrayNum) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (FWeakObjectPtr *)
                    ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10);
          bVar6 = FWeakObjectPtr::IsValid(pFVar14);
          if (bVar6) {
            pUVar10 = FWeakObjectPtr::Get(pFVar14);
            pUVar11 = FWeakObjectPtr::Get(&local_2d8);
            uVar8 = uVar15;
            if (*(longlong *)&pUVar10[8].field_0x8 == *(longlong *)&pUVar11[8].field_0x8) break;
          }
          uVar15 = uVar15 + 1;
          uVar8 = 0xffffffff;
        } while ((int)uVar15 < iVar7);
      }
    }
    else {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_NpcFunctionGift::GetBasketSlotIndex",0x27,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_178.Ptr,0x331,L"InItemData.IsValid() == false");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      uVar8 = 0xffffffff;
    }
    FDS_EventDelegate<int_const_>::Broadcast(&pUVar12->OnUpdatedBasketSlot,uVar8);
    if (local_2d0->SelectedBasketSlotIndex != uVar8) {
      (**(code **)(local_2d0->_padding_ + 0x98))(&local_2d0->_padding_,uVar8);
    }
    FDS_EventDelegate<>::Broadcast(&pUVar12->OnUpdatedBasket);
  }
  return;
}

// OnBasketGiftCompleted @ 14bef7240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionGift::OnBasketGiftCompleted(UDS_NpcFunctionGift *this)

{
  bool bVar1;
  EDS_Template EVar2;
  UDS_NPCShopEvent *pUVar3;
  FDS_NpcBaseTableRow *this_00;
  UDS_LogManager *pUVar4;
  FString *pFVar5;
  UDS_NpcRelationData *pUVar6;
  ForAnyElementType FVar7;
  undefined1 auStackY_1c8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_188;
  FWeakObjectPtr local_178;
  FStringFormatArg local_170;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  ClearAllBasket(this);
  pUVar3 = UDS_NPCShopEvent::GetEvent();
  if (pUVar3 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar3->OnUpdatedBasket);
  }
  this_00 = FDS_NpcBaseTableRow::GetRef(this->NpcTID,true);
  bVar1 = FDS_NpcBaseTableRow::IsValid(this_00);
  if (bVar1) {
    pFVar5 = (FString *)(**(code **)((this_00->ID_NameSid)._padding_ + 8))(&this_00->ID_NameSid);
    pFVar5 = ::FString::FString(&local_150,pFVar5);
    FStringFormatArg::FStringFormatArg(&local_170,pFVar5);
    local_188.ArrayNum = 1;
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_188.AllocatorInstance,1,&local_188.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_188.AllocatorInstance.Data,&local_170,1);
    if (local_170.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.StringValue.Data.AllocatorInstance.Data);
    }
    UDS_UIMessageManager::OpenMsgByStringUi
              (0x4e265,Complete_System_01,&local_188,
               (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                *)0x0);
    UDS_NpcRelationData::GetData
              ((ulong64)&local_178,UDS_PlayerData::MainPlayerEntityID,SUB81(this->NpcTID,0));
    bVar1 = FWeakObjectPtr::IsValid(&local_178);
    if (bVar1) {
      pUVar6 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_178);
      bVar1 = UDS_NpcRelationData::IsOverReqPoint(pUVar6,(int)this->_padding_);
      if (bVar1) {
        pUVar6 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_178);
        EVar2 = UDS_NpcRelationData::GetGradeUpCondition(pUVar6,(int)this->_padding_);
        if (EVar2 != None) {
          (**(code **)(this->_padding_ + 0x2d8))(this);
        }
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NpcFunctionGift::OnBasketGiftCompleted",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x323,L"npcRelationData is Invalid.");
        if ((FStringFormatArg *)local_138._padding_ != (FStringFormatArg *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
    FVar7.Data = local_188.AllocatorInstance.Data;
  }
  else {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_NpcFunctionGift::OnBasketGiftCompleted",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x319,L"npcBaseTableRow is Invalid.");
    FVar7.Data = (FScriptContainerElement *)local_138._padding_;
  }
  if ((FStringFormatArg *)FVar7.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(FVar7.Data);
  }
  return;
}

// OnClickBasketAction @ 14bef86c0

void __thiscall UDS_NpcFunctionGift::OnClickBasketAction(UDS_NpcFunctionGift *this)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  UDS_NpcRelationData *this_00;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  longlong *local_res18 [2];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_38;
  
  plVar1 = &this[-1]._padding_;
  if (0 < (int)this->_padding_) {
    UDS_NpcRelationData::GetData
              ((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,SUB81(this->_padding_,0));
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      this_00 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_res10);
      bVar3 = UDS_NpcRelationData::IsMaxGrade(this_00,this[-1].SelectedBasketSlotIndex);
      if (bVar3) {
        local_38._0_8_ = 0;
        local_38._8_8_ = 0;
        local_38._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x4e26b,Alert_None_01,&local_38);
        return;
      }
    }
    iVar2 = this[-1].SelectedBasketSlotIndex;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)plVar1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = plVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (plVar1 != (longlong *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)plVar1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    FDS_NpcRelationService::RequestNpcRelationItemGrow
              (this->_padding_,(TWeakObjectPtr<UDS_NpcFunctionGift,FWeakObjectPtr>)local_res8,iVar2)
    ;
  }
  return;
}

// OnClickClearBasket @ 14bef8da0

void __thiscall UDS_NpcFunctionGift::OnClickClearBasket(UDS_NpcFunctionGift *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  ClearAllBasket((UDS_NpcFunctionGift *)&this[-1]._padding_);
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnUpdatedBasket);
    return;
  }
  return;
}

// OnCloseCommonPopup @ 14befb930

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OnCloseCommonPopup
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  }
  return;
}

// OnCloseFunction @ 14befb9d0

void __thiscall UDS_NpcFunctionGift::OnCloseFunction(UDS_NpcFunctionGift *this)

{
  bool bVar1;
  UDS_NPCShopEvent *pUVar2;
  UDS_NpcFunctionEvent *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  
  ClearAllBasket(this);
  pUVar2 = UDS_NPCShopEvent::GetEvent();
  if (pUVar2 != (UDS_NPCShopEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnBasketGiftCompleted,
               this);
  }
  pUVar3 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar3 != (UDS_NpcFunctionEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnQueryNpcFunction);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &pUVar3->QueryNpcRelationGradeupGaugeData);
  }
  UDS_NpcFunctionBase::CloseWindow((UDS_NpcFunctionBase *)this,NpcGift);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    this->_padding_ = (longlong)local_res8;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  return;
}

// OnEventDrop @ 14befc930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OnEventDrop(UDS_NpcFunctionGift *this,FDS_DragDropEventField *param_1)

{
  char cVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FDS_ItemSlotInfo *pFVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  FWeakObjectPtr local_168;
  FObjectPtr_u_0 local_160;
  FObjectPtr_u_0 local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1->DragDropOperation).field0_0x0.DebugPtr == (UDragDropOperation *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NpcFunctionGift::OnEventDrop",0x20,Yes);
    pwVar8 = L"InDragDropEventField.DragDropOperation is nullptr";
    uVar7 = 0xed;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_1->DragDropOperation,pUVar4);
    local_160.Handle = (UObject *)0x0;
    if (bVar2) {
      local_160 = (FObjectPtr_u_0)(param_1->DragDropOperation).field0_0x0.DebugPtr;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FWeakObjectPtr)local_160.Handle != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable(local_160.Handle);
    }
    local_168.ObjectIndex = 0;
    local_168.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((FWeakObjectPtr)local_160.Handle != (FWeakObjectPtr)0x0)) {
      UE::GC::MarkAsReachable(local_160.Handle);
    }
    FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
    bVar2 = TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_W_DragDropOperation,FWeakObjectPtr> *)&local_168,
                       (void *)0x0);
    if (!bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&local_168);
      if (*(longlong *)&pUVar5[4].field_0x8 == 0) {
        return;
      }
      if (*(char *)(*(longlong *)&pUVar5[4].field_0x8 + 8) != '\x01') {
        return;
      }
      pUVar5 = FWeakObjectPtr::Get(&local_168);
      pFVar6 = FDS_SlotInfo::GetSlotInfo<FDS_ItemSlotInfo>((FDS_SlotInfo *)&pUVar5[4].field_0x8);
      if (pFVar6 == (FDS_ItemSlotInfo *)0x0) {
        return;
      }
      pUVar5 = FWeakObjectPtr::Get(&local_168);
      cVar1 = pUVar5[4].field_0x18;
      if (pFVar6->SlotType != RelationBagItem) {
        return;
      }
      DS_ItemDataUtil::GetItemDataByUID((long64)&local_160);
      bVar2 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_160,(void *)0x0);
      if (bVar2) {
        return;
      }
      local_158[0] = local_160;
      if ((cVar1 == '\x01') &&
         (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_158), pUVar5[0x13].field_0x1c == '\0'
         )) {
        OpenPopup_AddBagItemToBasket
                  ((UDS_NpcFunctionGift *)&this[-1]._padding_,
                   (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_158[0]);
        return;
      }
      OnAddBagItemToBasket
                ((UDS_NpcFunctionGift *)&this[-1]._padding_,
                 (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_158[0],1);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_NpcFunctionGift::OnEventDrop",0x20,Yes);
    pwVar8 = L"dragDropOperation is nullptr";
    uVar7 = 0xf4;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnOpenFunction @ 14beff2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OnOpenFunction
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> param_1,
          int param_2,EDS_InteractionFunctionType param_3)

{
  bool bVar1;
  EDS_Template EVar2;
  int iVar3;
  UDS_DataSetBase *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_NpcRelationData *pUVar6;
  UDS_WindowManager *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar9;
  UDS_NPCShopEvent *pUVar10;
  UDS_NpcFunctionEvent *pUVar11;
  undefined1 auStackY_1f8 [32];
  undefined1 local_1c8 [24];
  FMRSWRecursiveAccessDetector *pFStack_1b0;
  char local_1a8;
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  FWeakObjectPtr local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1c8._0_8_ = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_1c8);
  if (bVar1) {
    this->_padding_ = local_1c8._0_8_;
  }
  *(int *)&this->_padding_ = param_2;
  *(EDS_InteractionFunctionType *)((longlong)&this->_padding_ + 4) = param_3;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar1) {
    return;
  }
  pUVar4 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar3 = UDS_DataSetBase::GetEntityTableID(pUVar4);
  UDS_NpcRelationData::GetData((ulong64)local_1c8,UDS_PlayerData::MainPlayerEntityID,SUB41(iVar3,0))
  ;
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_1c8);
  if (!bVar1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NpcFunctionGift::IsEnableOpen",0x21,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x42d,L"npcRelationData is Invalid.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
        (**(code **)(this->_padding_ + 0x2d8))(this);
        return;
      }
    }
LAB_14beff43e:
    (**(code **)(this->_padding_ + 0x2d8))(this);
    return;
  }
  pUVar6 = (UDS_NpcRelationData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_1c8);
  bVar1 = UDS_NpcRelationData::IsOverReqPoint(pUVar6,param_2);
  if (bVar1) {
    pUVar6 = (UDS_NpcRelationData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_1c8);
    EVar2 = UDS_NpcRelationData::GetGradeUpCondition(pUVar6,param_2);
    if (EVar2 == Quest) {
      local_198 = (undefined1  [8])0x0;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_190.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x4e26a,Alert_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_198);
      goto LAB_14beff43e;
    }
  }
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14beff5e7;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_1c8._16_8_ = OpenNpcGiftCallback;
    pFStack_1b0 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_1b0 & 0xffffffff00000000);
    local_198 = (undefined1  [8])0x0;
    local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_190.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)&local_180);
    local_168 = &local_190;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_190);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionGift____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1c8._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_1c8);
      puVar7[4] = local_1c8._16_8_;
      puVar7[5] = pFStack_1b0;
    }
    if (local_180.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
    }
    pTVar9 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        (local_1c8 + 0x10),
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_198);
    UDS_WindowManager::OpenWindow(this_00,NpcGift,pTVar9);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
               (FWriteAccessScope *)(local_1c8 + 0x10));
    if ((local_190.DelegateSize != 0) &&
       (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_190,0,0,0x10);
      local_190.DelegateSize = 0;
    }
    if (local_1a8 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (pFStack_1b0,(FDestructionSentinel *)(local_1c8 + 0x10));
    }
    if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_190.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_198);
  }
LAB_14beff5e7:
  pUVar10 = UDS_NPCShopEvent::GetEvent();
  if (pUVar10 != (UDS_NPCShopEvent *)0x0) {
    pFStack_1b0 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_1b0 & 0xffffffff00000000);
    local_1c8._16_8_ = OnBasketGiftCompleted;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar10->OnBasketGiftCompleted
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_NpcFunctionGift>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar10->OnBasketGiftCompleted,(UDS_NpcFunctionGift *)local_1c8,(pmf_0e3f87ba *)this
              );
  }
  pUVar11 = UDS_NpcFunctionEvent::GetEvent();
  if (pUVar11 != (UDS_NpcFunctionEvent *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar11->OnQueryNpcFunction);
    local_1c8._16_8_ = OnQueryNpcFunction;
    pFStack_1b0 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_1b0 & 0xffffffff00000000);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar11->OnQueryNpcFunction,(FWriteAccessScope *)&local_180);
    local_168 = (FDelegateAllocation *)&(pUVar11->OnQueryNpcFunction).Delegate.field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,local_168);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AU__TWeakObjectPtr_VUDS_NpcFunctionBase__UFWeakObjectPtr____XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionGift____A6A_AU__TWeakObjectPtr_VUDS_NpcFunctionBase__UFWeakObjectPtr____XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1c8._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_1c8);
      puVar7[4] = local_1c8._16_8_;
      puVar7[5] = pFStack_1b0;
    }
    if (local_180.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)
               &pUVar11->QueryNpcRelationGradeupGaugeData);
    local_1c8._16_8_ = GetNpcRelationGradeUpData;
    pFStack_1b0 = (FMRSWRecursiveAccessDetector *)((ulonglong)pFStack_1b0 & 0xffffffff00000000);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pUVar11->QueryNpcRelationGradeupGaugeData,(FWriteAccessScope *)&local_180);
    local_168 = (FDelegateAllocation *)
                &(pUVar11->QueryNpcRelationGradeupGaugeData).Delegate.field_0x8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x30,local_168);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6A_AUFDS_NpcRelationGradeUpData__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionGift____A6A_AUFDS_NpcRelationGradeUpData__XZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar7[3] = 0;
      local_1c8._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)local_1c8);
      puVar7[4] = local_1c8._16_8_;
      puVar7[5] = pFStack_1b0;
    }
    if (local_180.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
    }
  }
  pUVar4 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  uVar8 = UDS_DataSetBase::GetEntityID(pUVar4);
  this->NpcEntityID = uVar8;
  pUVar4 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar3 = UDS_DataSetBase::GetEntityTableID(pUVar4);
  this->NpcTID = (longlong)iVar3;
  iVar3 = DS_CommonDataHelper::GiftBasketDefaultSlotCount();
  this->GiftBasketSlotMax = iVar3;
  UDS_NpcRelationData::GetData
            ((ulong64)&local_160,UDS_PlayerData::MainPlayerEntityID,SUB81(this->NpcTID,0));
  bVar1 = FWeakObjectPtr::IsValid(&local_160);
  if (bVar1) {
    pUVar6 = (UDS_NpcRelationData *)FWeakObjectPtr::Get(&local_160);
    bVar1 = UDS_NpcRelationData::IsMaxGrade(pUVar6,(int)this->_padding_);
    if (bVar1) {
      local_198 = (undefined1  [8])0x0;
      local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_190.DelegateSize = 0;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x4e266,Alert_None_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)local_198);
    }
  }
  return;
}

// OnQueryNpcFunction @ 14bf030e0

TWeakObjectPtr<UDS_NpcFunctionBase,FWeakObjectPtr> __thiscall
UDS_NpcFunctionGift::OnQueryNpcFunction(UDS_NpcFunctionGift *this)

{
  FWeakObjectPtr in_RDX;
  UDS_NpcFunctionGift *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UDS_NpcFunctionGift *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_NpcFunctionGift *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_NpcFunctionBase,FWeakObjectPtr>)in_RDX;
}

// OnSelectItemSlotTradable @ 14bf03b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OnSelectItemSlotTradable
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_M_CommonPopup *pUVar4;
  FDS_NPCGiftItemInfo *pFVar5;
  UObject *pUVar6;
  int *piVar7;
  int iVar8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_178 [32];
  EDS_InventoryType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar4,ItemSlot02);
    iVar8 = 0;
    pFVar5 = GetNPCGiftItemInfoByItemData
                       (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res18);
    if (pFVar5 != (FDS_NPCGiftItemInfo *)0x0) {
      iVar8 = pFVar5->GiftCount_Tradable;
    }
    local_148[0] = PlayerNormal;
    pUVar6 = FWeakObjectPtr::Get(&local_res18);
    piVar7 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
             ::FindOrAddImpl<enum_EDS_InventoryType_const_&>(&pUVar6[10].field_0x18,1,local_148);
    iVar1 = *piVar7;
    pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::UpdateSlider(pUVar4,1,iVar1 - iVar8,1);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionGift::OnSelectItemSlotTradable",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x2e0,L"InItemData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnSelectItemSlotUnTradable @ 14bf03ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OnSelectItemSlotUnTradable
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  int iVar2;
  UDS_LogManager *pUVar3;
  UDS_M_CommonPopup *pUVar4;
  FDS_NPCGiftItemInfo *pFVar5;
  UDS_ItemData *this_00;
  int iVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_res10 = param_1.WeakPtr;
  local_res18 = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar4,ItemSlot01);
    iVar6 = 0;
    pFVar5 = GetNPCGiftItemInfoByItemData
                       (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res18);
    if (pFVar5 != (FDS_NPCGiftItemInfo *)0x0) {
      iVar6 = pFVar5->GiftCount_UnTradable;
    }
    this_00 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res18);
    iVar2 = UDS_ItemData::GetStackCount_UnTradable(this_00,PlayerNormal);
    pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    UDS_M_CommonPopup::UpdateSlider(pUVar4,1,iVar2 - iVar6,1);
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcFunctionGift::OnSelectItemSlotUnTradable",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x2f5,L"InItemData.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnUpdatedBasket @ 14bf0b0f0

void __thiscall UDS_NpcFunctionGift::OnUpdatedBasket(UDS_NpcFunctionGift *this)

{
  return;
}

// OpenNpcGiftCallback @ 14bf0b3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OpenNpcGiftCallback(UDS_NpcFunctionGift *this,UDS_UserWidget *param_1)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_NpcRelationData *pFVar3;
  FDS_ViewModelContext_ItemBasket *pFVar4;
  bool bVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UDS_DataSetBase *this_00;
  UDS_M_InventoryBag *this_01;
  FDS_DataContainer *pFVar8;
  UDS_M_Weight *this_02;
  FName *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_03;
  FDS_ViewModelContext *pFVar12;
  FDS_ViewModelContext *pFVar13;
  undefined1 auStackY_508 [32];
  FWeakObjectPtr local_4d8;
  FWeakObjectPtr local_4d0;
  FWeakObjectPtr local_4c8;
  FWeakObjectPtr local_4c0;
  FWeakObjectPtr local_4b8 [2];
  TSharedPtr<FDS_ViewModelContext_NpcRelationData,1> local_4a8;
  TSharedPtr<FDS_ViewModelContext_ItemBasket,1> local_498;
  FDS_ViewModelContext *local_488;
  TReferenceControllerBase<1> *pTStack_480;
  UDS_UserWidget *local_478;
  UDS_UserWidget *local_470;
  UDS_UserWidget *local_468;
  UDS_M_Weight *local_460;
  UDS_UserWidget *local_458;
  UDS_UserWidget *local_450;
  TSharedPtr<FDS_ViewModelContext,1> local_448;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_438;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_420;
  TSharedPtr<FDS_ViewModelContext,1> local_408;
  FName local_3f8 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_3e8;
  TSharedPtr<FDS_ViewModelContext,1> local_3d8;
  TSharedPtr<FDS_ViewModelContext,1> local_3c8;
  FDS_DataContainer local_3b8;
  undefined1 local_318 [32];
  void *local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  void *local_2d8;
  undefined4 local_2d0;
  undefined1 local_2c8 [32];
  void *local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  void *local_288;
  undefined4 local_280;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_508;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"UDS_NpcFunctionGift::OpenNpcGiftCallback",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_278.Ptr,0x153,L"InContentWidget is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar5) {
      ClearAllBasket(this);
      MakeContext<FDS_ViewModelContext_NpcRelationData>(&local_4a8);
      pFVar3 = local_4a8.Object;
      pFVar13 = (FDS_ViewModelContext *)0x0;
      if (local_4a8.Object != (FDS_ViewModelContext_NpcRelationData *)0x0) {
        if ((local_4a8.Object == (FDS_ViewModelContext_NpcRelationData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar3->_padding_ = 0x1c7;
        pFVar3->PlayerEntityID = UDS_PlayerData::MainPlayerEntityID;
        this_00 = (UDS_DataSetBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        iVar6 = UDS_DataSetBase::GetEntityTableID(this_00);
        local_3e8.Object = (FDS_ViewModelContext *)local_4a8.Object;
        local_3e8.SharedReferenceCount.ReferenceController =
             local_4a8.SharedReferenceCount.ReferenceController;
        pFVar3->NpcTID = iVar6;
        if (local_4a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_4a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_4d8.ObjectIndex = 0;
        local_4d8.ObjectSerialNumber = 0;
        local_478 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_4d8,(FObjectPtr)&local_478);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_4d8,&local_3e8,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_4a8.SharedReferenceCount.ReferenceController);
      this_01 = NewObject<UDS_M_InventoryBag>((UObject *)this);
      local_318._0_8_ = (FScriptContainerElement *)0x0;
      local_318._8_8_ = 0;
      local_2f8 = (void *)0x0;
      local_2f0 = 0;
      local_2ec = 0x80;
      local_2e8 = 0xffffffff;
      local_2e4 = 0;
      local_2d8 = (void *)0x0;
      local_2d0 = 0;
      local_2c8._0_8_ = (FScriptContainerElement *)0x0;
      local_2c8._8_8_ = 0;
      local_2a8 = (void *)0x0;
      local_2a0 = 0;
      local_29c = 0x80;
      local_298 = 0xffffffff;
      local_294 = 0;
      local_288 = (void *)0x0;
      local_280 = 0;
      FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                ((FDS_DataContainer *)local_318,BagGroupType,NpcRelation);
      FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
                ((FDS_DataContainer *)local_318,SortType,CharGet);
      local_438._16_8_ = 0;
      local_438._0_8_ = 0;
      local_438._8_8_ = 0;
      local_420._16_8_ = 0;
      local_420._0_8_ = 0;
      local_420._8_8_ = 0;
      pFVar8 = FDS_DataContainer::FDS_DataContainer(&local_3b8,(FDS_DataContainer *)local_318);
      UDS_M_InventoryBag::InitModel(this_01,pFVar8,&local_420,&local_438);
      pcVar2 = *(code **)(this_01->_padding_ + 0x2e8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_4d0.ObjectIndex = 0;
      local_4d0.ObjectSerialNumber = 0;
      local_470 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_4d0,(FObjectPtr)&local_470);
      (*pcVar2)(this_01);
      local_280 = 0;
      if (local_288 != (void *)0x0) {
        FMemory::Free(local_288);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_2c8,0,local_2c8._8_4_);
      iVar6 = SUB84(local_2c8._8_8_,4);
      local_2c8._8_8_ = local_2c8._8_8_ & 0xffffffff00000000;
      if (iVar6 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_2c8,0,(int *)(local_2c8 + 0xc));
      }
      local_298 = 0xffffffff;
      local_294 = 0;
      local_2a0 = 0;
      if (0x80 < local_29c) {
        local_29c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10),0);
      }
      if (local_2a8 != (void *)0x0) {
        FMemory::Free(local_2a8);
      }
      if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2c8._0_8_);
      }
      local_2d0 = 0;
      if (local_2d8 != (void *)0x0) {
        FMemory::Free(local_2d8);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_318,0,local_318._8_4_);
      iVar6 = SUB84(local_318._8_8_,4);
      local_318._8_8_ = local_318._8_8_ & 0xffffffff00000000;
      if (iVar6 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)local_318,0,(int *)(local_318 + 0xc));
      }
      local_2e8 = 0xffffffff;
      local_2e4 = 0;
      local_2f0 = 0;
      if (0x80 < local_2ec) {
        local_2ec = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_318 + 0x10),0);
      }
      if (local_2f8 != (void *)0x0) {
        FMemory::Free(local_2f8);
      }
      if ((FScriptContainerElement *)local_318._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_318._0_8_);
      }
      this_02 = NewObject<UDS_M_Weight>((UObject *)this);
      UDS_M_Weight::Init(this_02,PlayerNormal,0,0);
      (**(code **)(*(longlong *)this_02 + 0x310))(this_02,&local_488);
      pFVar9 = ::FName::FName(local_3f8,"DS_VM_Weight_Basket");
      FVar1 = *pFVar9;
      if ((local_488 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_488->ViewModelName = FVar1;
      local_3d8.Object = local_488;
      local_3d8.SharedReferenceCount.ReferenceController = pTStack_480;
      if (pTStack_480 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_480->SharedReferenceCount =
             (atomic<int>)((int)pTStack_480->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_4c8.ObjectIndex = 0;
      local_4c8.ObjectSerialNumber = 0;
      local_468 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_4c8,(FObjectPtr)&local_468);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_4c8,&local_3d8,false);
      MakeContext<FDS_ViewModelContext_ItemBasket>(&local_498);
      pFVar4 = local_498.Object;
      if (local_498.Object != (FDS_ViewModelContext_ItemBasket *)0x0) {
        if ((local_498.Object == (FDS_ViewModelContext_ItemBasket *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(undefined4 *)&pFVar4->_padding_ = 0x1c8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_NpcFunctionGift *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        pFVar12 = (FDS_ViewModelContext *)&this->_padding_;
        if (this == (UDS_NpcFunctionGift *)0x0) {
          pFVar12 = pFVar13;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_NpcFunctionGift *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        *(UDS_NpcFunctionGift **)&(pFVar4->BasketInterface).field_0x0 = this;
        *(FDS_ViewModelContext **)&(pFVar4->BasketInterface).field_0x8 = pFVar12;
        local_460 = this_02;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        FWeakObjectPtr::operator=(&(pFVar4->BasketWeightModel).WeakPtr,(FObjectPtr)&local_460);
        local_3c8.Object = (FDS_ViewModelContext *)local_498.Object;
        local_3c8.SharedReferenceCount.ReferenceController =
             local_498.SharedReferenceCount.ReferenceController;
        if (local_498.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_498.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_4c0.ObjectIndex = 0;
        local_4c0.ObjectSerialNumber = 0;
        local_458 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_4c0,(FObjectPtr)&local_458);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_4c0,&local_3c8,false);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_498.SharedReferenceCount.ReferenceController);
      pFVar10 = ::operator_new(0x30);
      pFVar12 = pFVar13;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        (((TArray<FDS_NPCGiftItemInfo,TSizedDefaultAllocator<32>_> *)&pFVar10->ViewModelTemplateKey)
        ->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        ((atomic<int> *)&pFVar10[1].DerivedStaticStruct)[1] = (atomic<int>)0x0;
        *(ulong64 *)&pFVar10->DerivedStaticStruct = 0;
        (pFVar10->ViewModelName).ComparisonIndex = 0;
        (pFVar10->ViewModelName).Number = 0;
        pFVar10->_padding_ = (longlong)&___7FDS_ViewModelContext_NpcGift__6B_;
        pFVar10[1]._padding_ = 0;
        *(atomic<int> *)&pFVar10[1].DerivedStaticStruct = (atomic<int>)0x0;
        pFVar12 = pFVar10;
      }
      pFVar10 = ::operator_new(0x20);
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_NpcGift__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar12;
        pFVar13 = pFVar10;
      }
      if ((pFVar12 == (FDS_ViewModelContext *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_NpcGift::StaticStruct();
      *(UScriptStruct **)&pFVar12->DerivedStaticStruct = pUVar11;
      this_03 = UDS_ViewModelContextManager::GetInst();
      if (this_03 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar13->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_448.Object = pFVar12;
        local_448.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
        UDS_ViewModelContextManager::RegisterContext(this_03,&local_448);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_448.SharedReferenceCount.ReferenceController);
      }
      *(undefined4 *)
       &(((TArray<FDS_NPCGiftItemInfo,TSizedDefaultAllocator<32>_> *)&pFVar12->ViewModelTemplateKey)
        ->AllocatorInstance).Data = 0x1c9;
      pFVar12[1]._padding_ = UDS_PlayerData::MainPlayerEntityID;
      *(atomic<int> *)&pFVar12[1].DerivedStaticStruct = *(atomic<int> *)&this->NpcTID;
      if (pFVar13 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar13->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar13->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_408.Object = pFVar12;
      local_408.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar13;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_4b8[0].ObjectIndex = 0;
      local_4b8[0].ObjectSerialNumber = 0;
      local_450 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(local_4b8,(FObjectPtr)&local_450);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_4b8[0],&local_408,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar13);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_480);
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_NpcFunctionGift::OpenNpcGiftCallback",0x28,Yes);
        UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x159,L"NPCDataSet is Invalid.");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return;
}

// OpenPopup_AddBagItemToBasket @ 14bf0cd80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::OpenPopup_AddBagItemToBasket
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_CommonPopupContext EVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  FDS_NPCGiftItemInfo *pFVar6;
  UObject *pUVar7;
  FDS_ItemBaseTableRow *pFVar8;
  UDS_GameInstance *pUVar9;
  int *piVar10;
  UDS_ItemData *pUVar11;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar12;
  FDS_Text *pFVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar16;
  FText *pFVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_498 [32];
  FWeakObjectPtr local_458;
  EDS_InventoryType local_450 [8];
  EDS_InventoryType local_448 [8];
  EDS_InventoryType local_440 [8];
  code *local_438;
  ulonglong uStack_430;
  int local_428;
  FWeakObjectPtr local_420;
  UDS_CommonPopupManager *local_418;
  undefined1 local_410 [8];
  FDelegateAllocation local_408;
  UDS_NpcFunctionGift *local_3f8;
  FDS_StringIDWrapper *local_3f0;
  code *local_3e8;
  ulonglong uStack_3e0;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_3d8;
  FDestructionSentinel local_3c0;
  FDelegateAllocation *local_3a8;
  code *local_398;
  ulonglong uStack_390;
  FText local_388;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_378;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_360;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_348;
  FDS_Text local_330;
  FDS_Text local_2e0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_498;
  local_res10 = param_1.WeakPtr;
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar2) {
    if (((this->NPCGiftBasket).ArrayNum < this->GiftBasketSlotMax) ||
       (pFVar6 = GetNPCGiftItemInfoByItemData
                           (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10),
       pFVar6 != (FDS_NPCGiftItemInfo *)0x0)) {
      pUVar7 = FWeakObjectPtr::Get(&local_res10);
      if (pUVar7[0x13].field_0x1c == '\x01') {
        OnAddBagItemToBasket(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10,1);
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&local_res10);
        pFVar8 = FDS_ItemBaseTableRow::GetRef((longlong)*(int *)&pUVar7[8].field_0x10,true);
        pUVar9 = UDS_GameInstance::GetInst();
        if (pUVar9 != (UDS_GameInstance *)0x0) {
          local_418 = UDS_CommonPopupManager::GetInst();
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_418 != (UDS_CommonPopupManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_418);
          }
          iVar18 = 0;
          local_420.ObjectIndex = 0;
          local_420.ObjectSerialNumber = 0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_418 != (UDS_CommonPopupManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_418);
          }
          FWeakObjectPtr::operator=(&local_420,(FObjectPtr)&local_418);
          bVar2 = TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_CommonPopupManager,FWeakObjectPtr> *)&local_420,
                             (void *)0x0);
          if (bVar2) {
            bVar2 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_7675015015019052488>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionGift.cpp"
                               ,0x238,"false");
            if (bVar2) {
code_r0x00014bf0d068:
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          else {
            local_450[0] = PlayerNormal;
            pUVar7 = FWeakObjectPtr::Get(&local_res10);
            piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                      ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                (&pUVar7[10].field_0x18,1,local_450);
            iVar20 = *piVar10;
            pUVar11 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
            iVar4 = UDS_ItemData::GetStackCount_UnTradable(pUVar11,PlayerNormal);
            local_428 = iVar4;
            pFVar6 = GetNPCGiftItemInfoByItemData
                               (this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10);
            iVar19 = iVar18;
            if (pFVar6 != (FDS_NPCGiftItemInfo *)0x0) {
              iVar19 = pFVar6->GiftCount_Tradable;
              iVar18 = pFVar6->GiftCount_UnTradable;
            }
            if (iVar18 + iVar19 < iVar4 + iVar20) {
              this_00 = (UDS_CommonPopupManager *)FWeakObjectPtr::Get(&local_420);
              UDS_CommonPopupManager::CreateCommonPopup(this_00);
              bVar2 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_458,
                                 (void *)0x0);
              if (bVar2) {
                bVar2 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_7675015015019052462>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\NpcFunction\\DS_NpcFunctionGift.cpp"
                                   ,0x252,"false");
                if (bVar2) goto code_r0x00014bf0d068;
              }
              else {
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                pFVar13 = FDS_Text::FromStringTable(&local_330,StringUi,0x4e4c);
                UDS_M_CommonPopup::SetTitle(pUVar12,pFVar13);
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                local_3f0 = (FDS_StringIDWrapper *)&pFVar8->ID_Name;
                pFVar13 = FDS_Text::FromStringID(&local_2e0,(FDS_StringItemID *)local_3f0);
                UDS_M_CommonPopup::SetMainContent(pUVar12,pFVar13);
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                UDS_M_CommonPopup::SetButton(pUVar12,ButtonCancel,StringUi,0x66,false);
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                UDS_M_CommonPopup::SetButton(pUVar12,ButtonConfirm,StringUi,0x65,false);
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                uStack_430 = uStack_3e0 & 0xffffffff00000000;
                local_438 = OnCloseCommonPopup;
                local_410 = (undefined1  [8])0x0;
                local_408.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                local_408.DelegateSize = 0;
                TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                          ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_410,
                           (FWriteAccessScope *)&local_3c0);
                local_3a8 = &local_408;
                puVar14 = UE::Core::Private::DelegateAllocate(0x30,&local_408);
                if (puVar14 != (undefined8 *)0x0) {
                  *puVar14 = &
                             ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  uVar15 = FDelegateHandle::GenerateNewID();
                  puVar14[2] = uVar15;
                  *puVar14 = &
                             ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_NpcFunctionGift____A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
                  ;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  puVar14[3] = 0;
                  local_3f8 = this;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 3),(FObjectPtr)&local_3f8);
                  puVar14[4] = local_438;
                  puVar14[5] = uStack_430;
                }
                if (local_3c0.bDestroyed == false) {
                  FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
                }
                UDS_M_CommonPopup::SetDelegate
                          (pUVar12,ButtonCancel,
                           (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                            *)local_410);
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                uStack_430 = uStack_430 & 0xffffffff00000000;
                local_438 = Response_AddBagItemToBasket;
                pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                          ::
                          CreateUObject<UDS_NpcFunctionGift,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                                    (&local_378,this,(pmf_5cfb454c *)&local_438,
                                     (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10);
                UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonConfirm,pTVar16);
                pUVar11 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
                iVar4 = UDS_ItemData::GetStackCount_UnTradable(pUVar11,PlayerNormal);
                if (0 < iVar4) {
                  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                  pUVar11 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_res10);
                  iVar4 = UDS_ItemData::GetStackCount_UnTradable(pUVar11,PlayerNormal);
                  pUVar7 = FWeakObjectPtr::Get(&local_res10);
                  UDS_M_CommonPopup::SetItemSlot
                            (pUVar12,ItemSlot01,*(int *)&pUVar7[8].field_0x10,local_428,local_428,
                             iVar4,CommonPopup);
                  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                  uStack_430 = uStack_430 & 0xffffffff00000000;
                  local_438 = OnSelectItemSlotUnTradable;
                  local_398 = OnSelectItemSlotUnTradable;
                  uStack_390 = uStack_430;
                  pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                            ::
                            CreateUObject<UDS_NpcFunctionGift,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                                      (&local_360,this,(pmf_5cfb454c *)&local_398,
                                       (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10);
                  UDS_M_CommonPopup::SetDelegate(pUVar12,ItemSlot01,pTVar16);
                  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                  UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar12,ItemSlot01);
                }
                local_448[0] = PlayerNormal;
                pUVar7 = FWeakObjectPtr::Get(&local_res10);
                piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                          ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                    (&pUVar7[10].field_0x18,1,local_448);
                if (0 < *piVar10) {
                  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                  local_440[0] = PlayerNormal;
                  pUVar7 = FWeakObjectPtr::Get(&local_res10);
                  piVar10 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                            ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                      (&pUVar7[10].field_0x18,1,local_440);
                  iVar4 = *piVar10;
                  pUVar7 = FWeakObjectPtr::Get(&local_res10);
                  UDS_M_CommonPopup::SetItemSlot
                            (pUVar12,ItemSlot02,*(int *)&pUVar7[8].field_0x10,iVar20,iVar20,iVar4,
                             CommonPopup);
                  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                  uStack_430 = uStack_430 & 0xffffffff00000000;
                  local_438 = OnSelectItemSlotTradable;
                  local_3e8 = OnSelectItemSlotTradable;
                  uStack_3e0 = uStack_430;
                  pTVar16 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                            ::
                            CreateUObject<UDS_NpcFunctionGift,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>_&>
                                      (&local_348,this,(pmf_5cfb454c *)&local_3e8,
                                       (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_res10);
                  UDS_M_CommonPopup::SetDelegate(pUVar12,ItemSlot02,pTVar16);
                  pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                  EVar3 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar12);
                  if (EVar3 == None) {
                    pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                    UDS_M_CommonPopup::SetSelectedItemSlotType(pUVar12,ItemSlot02);
                  }
                }
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                EVar3 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar12);
                if (EVar3 == ItemSlot01) {
                  iVar20 = local_428 - iVar18;
                }
                else {
                  if (EVar3 != ItemSlot02) {
                    pUVar5 = UDS_LogManager::GetInst();
                    if (pUVar5 == (UDS_LogManager *)0x0) {
                      return;
                    }
                    pUVar5 = UDS_LogManager::GetInst();
                    local_168._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_168,"UDS_NpcFunctionGift::OpenPopup_AddBagItemToBasket",0x31,
                               Yes);
                    UDS_LogManager::PrintLog
                              (pUVar5,1,Warning,local_168.Ptr,0x283,
                               L"commonPopupModel->GetSelectedItemSlotPopupContext() - Invalid");
                    if ((void *)local_168._padding_ == (void *)0x0) {
                      return;
                    }
                    FMemory::Free((void *)local_168._padding_);
                    return;
                  }
                  iVar20 = iVar20 - iVar19;
                }
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                pFVar17 = FDS_StringIDWrapper::Text(local_3f0,&local_388);
                UDS_M_CommonPopup::SetSlider(pUVar12,1,iVar20,1,pFVar17,1);
                pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_458);
                UDS_M_CommonPopup::OpenCommonPopup(pUVar12);
              }
            }
          }
        }
      }
    }
    else {
      local_3d8._0_8_ = 0;
      local_3d8._8_8_ = 0;
      local_3d8._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x4e268,Alert_None_01,&local_3d8);
    }
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_NpcFunctionGift::OpenPopup_AddBagItemToBasket",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_288.Ptr,0x21a,L"InItemData.IsValid() == false");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  return;
}

// Request_AddBagItemToBasket @ 14bf10610

void __thiscall
UDS_NpcFunctionGift::Request_AddBagItemToBasket
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1,
          bool param_2)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  if (param_2) {
    pUVar1 = FWeakObjectPtr::Get(local_res10);
    if (pUVar1[0x13].field_0x1c == '\0') {
      OpenPopup_AddBagItemToBasket(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10[0])
      ;
      return;
    }
  }
  OnAddBagItemToBasket(this,(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res10[0],1);
  return;
}

// Request_RemoveBagItemFromBasket @ 14bf11dc0

void __thiscall
UDS_NpcFunctionGift::Request_RemoveBagItemFromBasket
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UDS_NPCShopEvent *pUVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr local_res10;
  int local_res18;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    local_res18 = (this->NPCGiftBasket).ArrayNum;
    uVar9 = 0;
    if (0 < local_res18) {
      do {
        uVar10 = ~uVar9 >> 0x1f;
        uVar4 = 0;
        if ((int)uVar9 < (this->NPCGiftBasket).ArrayNum) {
          uVar4 = uVar10;
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
        this_00 = (FWeakObjectPtr *)
                  ((this->NPCGiftBasket).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10);
        bVar3 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)this_00,(void *)0x0);
        if (!bVar3) {
          pUVar5 = FWeakObjectPtr::Get(this_00);
          pUVar6 = FWeakObjectPtr::Get(&local_res10);
          if (*(longlong *)&pUVar5[8].field_0x8 == *(longlong *)&pUVar6[8].field_0x8) {
            uVar4 = 0;
            if ((int)uVar9 < (this->NPCGiftBasket).ArrayNum) {
              uVar4 = uVar10;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            _Dst = (this->NPCGiftBasket).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
            iVar8 = (this->NPCGiftBasket).ArrayNum + ~uVar9;
            if (iVar8 != 0) {
              memmove(_Dst,_Dst + 0x10,(longlong)iVar8 << 4);
            }
            piVar1 = &(this->NPCGiftBasket).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,&(this->NPCGiftBasket).AllocatorInstance,
                       (this->NPCGiftBasket).ArrayNum,&(this->NPCGiftBasket).ArrayMax);
            pUVar7 = UDS_NPCShopEvent::GetEvent();
            if (pUVar7 != (UDS_NPCShopEvent *)0x0) {
              FDS_EventDelegate<int_const_>::Broadcast(&pUVar7->OnRemovedBasketSlot,uVar9);
            }
            uVar4 = this->SelectedBasketSlotIndex;
            if (uVar9 == uVar4) {
              iVar8 = -1;
LAB_14bf11f7c:
              (**(code **)(this->_padding_ + 0x98))(&this->_padding_,iVar8);
              pUVar7 = UDS_NPCShopEvent::GetEvent();
              if (pUVar7 == (UDS_NPCShopEvent *)0x0) {
                return;
              }
              FDS_EventDelegate<>::Broadcast(&pUVar7->OnUpdatedBasket);
              return;
            }
            if ((int)uVar9 < (int)uVar4) {
              iVar8 = uVar4 - 1;
              goto LAB_14bf11f7c;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < local_res18);
    }
  }
  return;
}

// Response_AddBagItemToBasket @ 14bf12a30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_NpcFunctionGift::Response_AddBagItemToBasket
          (UDS_NpcFunctionGift *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  EDS_CommonPopupContext EVar2;
  int iVar3;
  UDS_M_CommonPopup *pUVar4;
  UDS_WindowManager *this_00;
  int iVar5;
  FWeakObjectPtr local_res10;
  float local_res20 [2];
  uint local_28 [4];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    iVar3 = UDS_M_CommonPopup::GetSliderCount(pUVar4);
    iVar5 = 0;
    pUVar4 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_res10);
    EVar2 = UDS_M_CommonPopup::GetSelectedItemSlotPopupContext(pUVar4);
    if (EVar2 == ItemSlot02) {
      iVar5 = iVar3;
      iVar3 = 0;
    }
    OnAddBagItemToBasket(this,param_2,iVar5,iVar3);
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      local_res20[0] = 0.0;
      local_28[0] = 0;
      UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_28,local_res20);
    }
  }
  return;
}

// SetSelectedBasketSlot @ 14bf18a50

void __thiscall UDS_NpcFunctionGift::SetSelectedBasketSlot(UDS_NpcFunctionGift *this,int param_1)

{
  UDS_NPCShopEvent *pUVar1;
  EDS_ItemBasketType local_res10 [6];
  
  *(int *)&this->_padding_ = param_1;
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    local_res10[0] = GiftBasket;
    FDS_FilteredEventDelegate<enum_EDS_ItemBasketType_const_,int_const_>::Broadcast
              (&pUVar1->OnSelectedBasketSlot,local_res10,(int)this->_padding_);
  }
  return;
}

// UpdateBasket @ 14bf1ead0

void __thiscall UDS_NpcFunctionGift::UpdateBasket(UDS_NpcFunctionGift *this)

{
  UDS_NPCShopEvent *pUVar1;
  
  pUVar1 = UDS_NPCShopEvent::GetEvent();
  if (pUVar1 != (UDS_NPCShopEvent *)0x0) {
    FDS_EventDelegate<>::Broadcast(&pUVar1->OnUpdatedBasket);
    return;
  }
  return;
}

// UpdateQuantityControl @ 14bf23be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_NpcFunctionGift::UpdateQuantityControl(UDS_NpcFunctionGift *this,float param_1)

{
  FDS_NPCGiftItemInfo *pFVar1;
  UDS_LogManager *pUVar2;
  int iVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar1 = GetNPCGiftItemInfoByBasketSlotIndex
                     ((UDS_NpcFunctionGift *)&this[-1]._padding_,(int)this->_padding_);
  if (pFVar1 == (FDS_NPCGiftItemInfo *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_NpcFunctionGift::UpdateQuantityControl",0x2a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x134,L"basketGoodsInfo == nullptr");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    iVar3 = (int)(param_1 - (float)(pFVar1->GiftCount_UnTradable + pFVar1->GiftCount_Tradable));
    if (iVar3 != 0) {
      OnAddBagItemToBasket
                ((UDS_NpcFunctionGift *)&this[-1]._padding_,
                 (TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)(pFVar1->ItemData).WeakPtr,iVar3);
    }
  }
  return;
}

