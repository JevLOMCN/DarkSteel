// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b51bc30

UClass * __cdecl UDS_M_ItemImplGem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplGem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplGem",
               &Z_Registration_Info_UClass_UDS_M_ItemImplGem.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplGem,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplGem>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplGem>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplGem.InnerSingleton;
}

// UDS_M_ItemImplGem @ 14b520f10

UDS_M_ItemImplGem * __thiscall
UDS_M_ItemImplGem::UDS_M_ItemImplGem(UDS_M_ItemImplGem *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined8 *)&this->field_0x1b0 = 0;
  this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined4 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x1e8 = 0;
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// UDS_M_ItemImplGem @ 14b520f80

UDS_M_ItemImplGem * __thiscall
UDS_M_ItemImplGem::UDS_M_ItemImplGem(UDS_M_ItemImplGem *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined8 *)&this->field_0x1b0 = 0;
  this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined4 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1e0 = 0;
  *(undefined8 *)&this->field_0x1e8 = 0;
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  return this;
}

// GetPrivateStaticClass @ 14b5256e0

UClass * __cdecl UDS_M_ItemImplGem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplGem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplGem",
               &Z_Registration_Info_UClass_UDS_M_ItemImplGem.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplGem,0x1f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemImplGem>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplGem>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplGem.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplGem @ 14b527420

void __cdecl UDS_M_ItemImplGem::StaticRegisterNativesUDS_M_ItemImplGem(void)

{
  return;
}

// ~UDS_M_ItemImplGem @ 14bd43cd0

void __thiscall UDS_M_ItemImplGem::~UDS_M_ItemImplGem(UDS_M_ItemImplGem *this)

{
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetQuantity @ 14bd5f6e0

int __thiscall UDS_M_ItemImplGem::GetQuantity(UDS_M_ItemImplGem *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_M_ItemGemPopup *this_00;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ModelBase::FindParentModel<UDS_M_ItemGemPopup>((UDS_ModelBase *)this);
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    this_00 = (UDS_M_ItemGemPopup *)FWeakObjectPtr::Get(local_res10);
    iVar3 = (**(code **)(*(longlong *)this + 0x380))(this);
    iVar3 = UDS_M_ItemGemPopup::QuantityOfGemsToBeEquipped(this_00,iVar3);
    return iVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<7576653555201736725>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\Item\\DS_M_ItemImplGem.cpp"
                     ,0x15,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// InitItemImplMap @ 14bd677c0

void __thiscall UDS_M_ItemImplGem::InitItemImplMap(UDS_M_ItemImplGem *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplGem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x1a;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x1a) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == '\x1a') {
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
             &DAT_0000001a,(bool *)&local_18);
  return;
}

