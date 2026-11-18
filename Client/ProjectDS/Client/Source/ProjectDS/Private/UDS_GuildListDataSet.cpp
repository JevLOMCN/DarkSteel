// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4a4940

UClass * __cdecl UDS_GuildListDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildListDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildListDataSet",
               &Z_Registration_Info_UClass_UDS_GuildListDataSet.InnerSingleton,
               StaticRegisterNativesUDS_GuildListDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GuildListDataSet>,
               InternalVTableHelperCtorCaller<UDS_GuildListDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildListDataSet.InnerSingleton;
}

// UDS_GuildListDataSet @ 14b4a7640

UDS_GuildListDataSet * __thiscall
UDS_GuildListDataSet::UDS_GuildListDataSet(UDS_GuildListDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_GuildListDataSet__6B_;
  return this;
}

// UDS_GuildListDataSet @ 14b4a7670

UDS_GuildListDataSet * __thiscall
UDS_GuildListDataSet::UDS_GuildListDataSet(UDS_GuildListDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_GuildListDataSet__6B_;
  return this;
}

// ~UDS_GuildListDataSet @ 14b4a7bd0

void __thiscall UDS_GuildListDataSet::~UDS_GuildListDataSet(UDS_GuildListDataSet *this)

{
  *(undefined ***)this = &___7UDS_GuildListDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a91f0

UClass * __cdecl UDS_GuildListDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildListDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildListDataSet",
               &Z_Registration_Info_UClass_UDS_GuildListDataSet.InnerSingleton,
               StaticRegisterNativesUDS_GuildListDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_GuildListDataSet>,
               InternalVTableHelperCtorCaller<UDS_GuildListDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildListDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_GuildListDataSet @ 14b4a9610

void __cdecl UDS_GuildListDataSet::StaticRegisterNativesUDS_GuildListDataSet(void)

{
  return;
}

// GetAllData @ 14baa37b0

TArray<TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GuildListDataSet::GetAllData
          (UDS_GuildListDataSet *this,
          TArray<TWeakObjectPtr<UDS_GuildListData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = *(FObjectPtr_u_0 **)&this->field_0x90;
  iVar2 = *(int *)&this->field_0x98;
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (*(int *)&this->field_0x98 != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    pUVar6 = (UObject *)0x0;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UDS_GuildListData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar5);
      if (bVar3) {
        pUVar6 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_res10;
    }
    this_00 = this_00 + 1;
  }
  return __return_storage_ptr__;
}

