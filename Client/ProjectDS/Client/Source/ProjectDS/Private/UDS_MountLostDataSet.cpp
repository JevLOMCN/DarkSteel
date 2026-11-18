// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b4fdd10

UClass * __cdecl UDS_MountLostDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountLostDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountLostDataSet",
               &Z_Registration_Info_UClass_UDS_MountLostDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MountLostDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountLostDataSet>,
               InternalVTableHelperCtorCaller<UDS_MountLostDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountLostDataSet.InnerSingleton;
}

// UDS_MountLostDataSet @ 14b501320

UDS_MountLostDataSet * __thiscall
UDS_MountLostDataSet::UDS_MountLostDataSet(UDS_MountLostDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_MountLostDataSet__6B_;
  return this;
}

// UDS_MountLostDataSet @ 14b501350

UDS_MountLostDataSet * __thiscall
UDS_MountLostDataSet::UDS_MountLostDataSet(UDS_MountLostDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_MountLostDataSet__6B_;
  return this;
}

// ~UDS_MountLostDataSet @ 14b502750

void __thiscall UDS_MountLostDataSet::~UDS_MountLostDataSet(UDS_MountLostDataSet *this)

{
  *(undefined ***)this = &___7UDS_MountLostDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5048a0

UClass * __cdecl UDS_MountLostDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountLostDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountLostDataSet",
               &Z_Registration_Info_UClass_UDS_MountLostDataSet.InnerSingleton,
               StaticRegisterNativesUDS_MountLostDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountLostDataSet>,
               InternalVTableHelperCtorCaller<UDS_MountLostDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountLostDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_MountLostDataSet @ 14b505b50

void __cdecl UDS_MountLostDataSet::StaticRegisterNativesUDS_MountLostDataSet(void)

{
  return;
}

// GetMountLostAllData @ 14ba4d370

void __thiscall
UDS_MountLostDataSet::GetMountLostAllData
          (UDS_MountLostDataSet *this,
          TArray<TWeakObjectPtr<UDS_MountLostData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  FObjectPtr_u_0 *pFVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FObjectPtr_u_0 *this_00;
  UObject *local_res8;
  FWeakObjectPtr local_res10;
  
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_1->AllocatorInstance,0,piVar1);
  }
  this_00 = *(FObjectPtr_u_0 **)&this->field_0x90;
  iVar3 = *(int *)&this->field_0x98;
  pFVar2 = this_00 + iVar3;
  while( true ) {
    if (*(int *)&this->field_0x98 != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UDS_DataBase>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar2) break;
    pUVar7 = (UObject *)0x0;
    if (this_00->Handle != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UDS_MountLostData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
      if (bVar4) {
        pUVar7 = this_00->Handle;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res8 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res8);
    bVar4 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar4) {
      iVar5 = param_1->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar5 + 1;
      *(FWeakObjectPtr *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_res10;
    }
    this_00 = this_00 + 1;
  }
  return;
}

// GetMountLostCount @ 14ba4d4c0

int __thiscall UDS_MountLostDataSet::GetMountLostCount(UDS_MountLostDataSet *this)

{
  return *(int *)&this->field_0x98;
}

