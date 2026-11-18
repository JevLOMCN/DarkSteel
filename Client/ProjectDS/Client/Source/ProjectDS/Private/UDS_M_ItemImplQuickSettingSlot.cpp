// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b519600

UClass * __cdecl UDS_M_ItemImplQuickSettingSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplQuickSettingSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplQuickSettingSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplQuickSettingSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplQuickSettingSlot,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplQuickSettingSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplQuickSettingSlot>,local_res8,
               UDS_M_ItemImplByQuickSlotData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplQuickSettingSlot.InnerSingleton;
}

// UDS_M_ItemImplQuickSettingSlot @ 14b5218d0

UDS_M_ItemImplQuickSettingSlot * __thiscall
UDS_M_ItemImplQuickSettingSlot::UDS_M_ItemImplQuickSettingSlot
          (UDS_M_ItemImplQuickSettingSlot *this,FVTableHelper *param_1)

{
  UDS_M_ItemImplByQuickSlotData::UDS_M_ItemImplByQuickSlotData
            ((UDS_M_ItemImplByQuickSlotData *)this,param_1);
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// UDS_M_ItemImplQuickSettingSlot @ 14b521910

UDS_M_ItemImplQuickSettingSlot * __thiscall
UDS_M_ItemImplQuickSettingSlot::UDS_M_ItemImplQuickSettingSlot
          (UDS_M_ItemImplQuickSettingSlot *this,FObjectInitializer *param_1)

{
  UDS_M_ItemImplByQuickSlotData::UDS_M_ItemImplByQuickSlotData
            ((UDS_M_ItemImplByQuickSlotData *)this,param_1);
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// GetPrivateStaticClass @ 14b525da0

UClass * __cdecl UDS_M_ItemImplQuickSettingSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplQuickSettingSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplQuickSettingSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemImplQuickSettingSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplQuickSettingSlot,0x200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplQuickSettingSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplQuickSettingSlot>,local_res8,
               UDS_M_ItemImplByQuickSlotData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplQuickSettingSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplQuickSettingSlot @ 14b5274b0

void __cdecl
UDS_M_ItemImplQuickSettingSlot::StaticRegisterNativesUDS_M_ItemImplQuickSettingSlot(void)

{
  return;
}

// ~UDS_M_ItemImplQuickSettingSlot @ 14bd43ec0

void __thiscall
UDS_M_ItemImplQuickSettingSlot::~UDS_M_ItemImplQuickSettingSlot
          (UDS_M_ItemImplQuickSettingSlot *this)

{
  *(undefined ***)this = &UDS_M_ItemImplByQuickSlotData::_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 =
       &UDS_M_ItemImplByQuickSlotData::_vftable__for__IDS_ObjectPoolItem__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x1f8);
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// InitItemImplMap @ 14bd68510

void __thiscall
UDS_M_ItemImplQuickSettingSlot::InitItemImplMap(UDS_M_ItemImplQuickSettingSlot *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplQuickSettingSlot_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 7;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 7) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\a') {
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
             &DAT_00000007,(bool *)&local_18);
  return;
}

// OnEventOnDrop @ 14bd789b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemImplQuickSettingSlot::OnEventOnDrop
          (UDS_M_ItemImplQuickSettingSlot *this,FDS_DragDropEventField *param_1)

{
  FName *pFVar1;
  FName local_res18 [2];
  
  pFVar1 = ::FName::FName(local_res18,"Slot_AddItem");
  UDS_M_ItemImplBase::PlayAnimationEvent((UDS_M_ItemImplBase *)this,*pFVar1,PlayForward);
  UDS_M_ItemImplBase::OnEventOnDrop((UDS_M_ItemImplBase *)this,param_1);
  return;
}

// OnInit @ 14bd79340

void __thiscall UDS_M_ItemImplQuickSettingSlot::OnInit(UDS_M_ItemImplQuickSettingSlot *this)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  UDS_M_ItemImplByQuickSlotData::OnInit((UDS_M_ItemImplByQuickSlotData *)this);
  pFVar1 = ::FName::FName(local_res10,"Slot_Appeared");
  UDS_M_ItemImplBase::PlayAnimationEvent((UDS_M_ItemImplBase *)this,*pFVar1,PlayForward);
  return;
}

