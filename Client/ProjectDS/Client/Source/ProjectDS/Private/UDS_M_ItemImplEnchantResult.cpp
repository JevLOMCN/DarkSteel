// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b51b8b0

UClass * __cdecl UDS_M_ItemImplEnchantResult::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplEnchantResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplEnchantResult",
               &Z_Registration_Info_UClass_UDS_M_ItemImplEnchantResult.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplEnchantResult,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplEnchantResult>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplEnchantResult>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplEnchantResult.InnerSingleton;
}

// UDS_M_ItemImplEnchantResult @ 14b520d10

UDS_M_ItemImplEnchantResult * __thiscall
UDS_M_ItemImplEnchantResult::UDS_M_ItemImplEnchantResult
          (UDS_M_ItemImplEnchantResult *this,FVTableHelper *param_1)

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

// UDS_M_ItemImplEnchantResult @ 14b520d80

UDS_M_ItemImplEnchantResult * __thiscall
UDS_M_ItemImplEnchantResult::UDS_M_ItemImplEnchantResult
          (UDS_M_ItemImplEnchantResult *this,FObjectInitializer *param_1)

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

// ~UDS_M_ItemImplEnchantResult @ 14b5231b0

void __thiscall
UDS_M_ItemImplEnchantResult::~UDS_M_ItemImplEnchantResult(UDS_M_ItemImplEnchantResult *this)

{
  *(undefined ***)this = &_vftable__for__UDS_ModelBase__;
  *(undefined ***)&this->field_0x1a8 = &_vftable__for__IDS_ObjectPoolItem__;
  UDS_M_ItemImplBase::~UDS_M_ItemImplBase((UDS_M_ItemImplBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b525560

UClass * __cdecl UDS_M_ItemImplEnchantResult::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemImplEnchantResult.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemImplEnchantResult",
               &Z_Registration_Info_UClass_UDS_M_ItemImplEnchantResult.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemImplEnchantResult,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemImplEnchantResult>,
               InternalVTableHelperCtorCaller<UDS_M_ItemImplEnchantResult>,local_res8,
               UDS_M_ItemImplBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemImplEnchantResult.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemImplEnchantResult @ 14b527400

void __cdecl UDS_M_ItemImplEnchantResult::StaticRegisterNativesUDS_M_ItemImplEnchantResult(void)

{
  return;
}

// GetPrefixID @ 14bd5f150

int __thiscall UDS_M_ItemImplEnchantResult::GetPrefixID(UDS_M_ItemImplEnchantResult *this)

{
  int iVar1;
  
  iVar1 = FDS_DataContainer::GetData<int,enum_EDS_ItemImplEnchantResultData>
                    ((FDS_DataContainer *)&this->field_0x40,PrefixID);
  return iVar1;
}

// GetSetEffectID @ 14bd60790

int __thiscall UDS_M_ItemImplEnchantResult::GetSetEffectID(UDS_M_ItemImplEnchantResult *this)

{
  int iVar1;
  
  iVar1 = FDS_DataContainer::GetData<int,enum_EDS_ItemImplEnchantResultData>
                    ((FDS_DataContainer *)&this->field_0x40,SetID);
  return iVar1;
}

// InitItemImplMap @ 14bd67540

void __thiscall UDS_M_ItemImplEnchantResult::InitItemImplMap(UDS_M_ItemImplEnchantResult *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UClass *local_res20;
  undefined1 *local_18;
  UClass **local_10;
  
  local_res20 = Z_Construct_UClass_UDS_M_ItemImplEnchantResult_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  local_res10[0] = 0x43;
  if (UDS_M_ItemImplBase::ItemImplMap._8_4_ != UDS_M_ItemImplBase::ItemImplMap._52_4_) {
    lVar2 = 0x154cf85b8;
    if (UDS_M_ItemImplBase::ItemImplMap._64_8_ != 0) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._64_8_;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(UDS_M_ItemImplBase::ItemImplMap._72_4_ - 1 & 0x43) * 4);
    while (iVar1 != -1) {
      lVar2 = UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18;
      if (*(char *)(UDS_M_ItemImplBase::ItemImplMap._0_8_ + (longlong)iVar1 * 0x18) == 'C') {
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
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)0x43,
             (bool *)&local_18);
  return;
}

