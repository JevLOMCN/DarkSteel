// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b519980

UClass * __cdecl UDS_M_ItemImplQuickSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplQuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplQuickSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplQuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplQuickSlot,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplQuickSlot>,local_res8,
               UDS_M_ItemImplByQuickSlotData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplQuickSlot.InnerSingleton;
}

// UDS_M_ItemImplQuickSlot @ 14b521950

UDS_M_ItemImplQuickSlot * __thiscall
UDS_M_ItemImplQuickSlot::UDS_M_ItemImplQuickSlot
          (UDS_M_ItemImplQuickSlot *this,FVTableHelper *param_1)

{
  UDS_M_ItemImplByQuickSlotData::UDS_M_ItemImplByQuickSlotData
            ((UDS_M_ItemImplByQuickSlotData *)this,param_1);
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// UDS_M_ItemImplQuickSlot @ 14b521990

UDS_M_ItemImplQuickSlot * __thiscall
UDS_M_ItemImplQuickSlot::UDS_M_ItemImplQuickSlot
          (UDS_M_ItemImplQuickSlot *this,FObjectInitializer *param_1)

{
  UDS_M_ItemImplByQuickSlotData::UDS_M_ItemImplByQuickSlotData
            ((UDS_M_ItemImplByQuickSlotData *)this,param_1);
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// GetPrivateStaticClass @ 14b525e60

UClass * __cdecl UDS_M_ItemImplQuickSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplQuickSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplQuickSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplQuickSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplQuickSlot,0x200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplQuickSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplQuickSlot>,local_res8,
               UDS_M_ItemImplByQuickSlotData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplQuickSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplQuickSlot @ 14b5274c0

void __cdecl UDS_M_ItemImplQuickSlot::StaticRegisterNativesUDS_M_ItemImplQuickSlot(void)

{
  return;
}

// ~UDS_M_ItemImplQuickSlot @ 14bd43f00

void __thiscall UDS_M_ItemImplQuickSlot::~UDS_M_ItemImplQuickSlot(UDS_M_ItemImplQuickSlot *this)

{
  *(undefined ***)this = &UDS_M_ItemImplByQuickSlotData::_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 =
       &UDS_M_ItemImplByQuickSlotData::_vftable__for__IDS_ObjectPoolItem__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x1f8);
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// InitItemImplMap @ 14bd685f0

void __thiscall UDS_M_ItemImplQuickSlot::InitItemImplMap(UDS_M_ItemImplQuickSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplQuickSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 5;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 5) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x05') {
        if (lVar2 != 0) {
          return;
        }
        break;
      }
      iVar1 = *(int *)(lVar2 + 0x10);
    }
  }
  local_18 = local_res10;
  local_10 = &local_res20;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (&UDS_M_ItemImplBase::ItemImplMap,(uint)local_res18,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             &DAT_00000005,(bool *)&local_18);
  return;
}

// OnEventMouseButtonUp @ 14bd778b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplQuickSlot::OnEventMouseButtonUp
          (UDS_M_ItemImplQuickSlot *this,FDS_WidgetPointerEventField *param_1)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_ContentManager *this_00;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStackY_208 [32];
  FWeakObjectPtr local_1d8;
  UDS_ContentManager *local_1d0;
  UObject *local_1c8 [2];
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_208;
  FVar1 = (param_1->PointerEvent).EffectingButton.KeyName;
  pTVar2 = (param_1->PointerEvent).EffectingButton.KeyDetails.SharedReferenceCount.
           ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = FVar1 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar8) {
    cVar3 = (**(code **)(*(longlong *)this + 0x558))(this);
    if (cVar3 == '\0') {
      (**(code **)(*(longlong *)this + 0x6c8))(this);
    }
    else {
      local_1d0 = UDS_ContentManager::GetInst();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1d0 != (UDS_ContentManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1d0);
      }
      local_1d8.ObjectIndex = 0;
      local_1d8.ObjectSerialNumber = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_1d0 != (UDS_ContentManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1d0);
      }
      FWeakObjectPtr::operator=(&local_1d8,(FObjectPtr)&local_1d0);
      bVar8 = TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ContentManager,FWeakObjectPtr> *)&local_1d8,(void *)0x0
                        );
      if (bVar8) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_M_ItemImplQuickSlot::OnEventMouseButtonUp",0x2d,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_138.Ptr,0x1d,L"contentManager is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        pUVar5 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar5,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar6 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_1b8,pUVar6);
        local_1b8._8_8_ = pUVar5;
        pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
        if (local_1b8._64_8_ != 0) {
          plVar7 = (longlong *)(local_1b8 + 0x50);
          if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_1b8._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        this_00 = (UDS_ContentManager *)FWeakObjectPtr::Get(&local_1d8);
        local_1c8[0] = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        local_1d0 = (UDS_ContentManager *)CONCAT44(local_1d0._4_4_,2000);
        UDS_ContentManager::OpenContent
                  (this_00,(EDS_ContentsTabFrameType *)&local_1d0,
                   (TObjectPtr<UDS_ContentArguments>)local_1c8);
      }
    }
  }
  return;
}

// UseItem @ 14bd94250

void __thiscall UDS_M_ItemImplQuickSlot::UseItem(UDS_M_ItemImplQuickSlot *this)

{
  bool bVar1;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(*(longlong *)this + 0x3a0))();
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (bVar1) {
    DS_ItemDataUtil::Use((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>)local_res8[0],0,0,0);
  }
  return;
}

