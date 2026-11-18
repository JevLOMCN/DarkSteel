// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b56bef0

UClass * __cdecl UDS_QuestDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestDataSet",
               &Z_Registration_Info_UClass_UDS_QuestDataSet.InnerSingleton,
               StaticRegisterNativesUDS_QuestDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_QuestDataSet>,
               InternalVTableHelperCtorCaller<UDS_QuestDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestDataSet.InnerSingleton;
}

// UDS_QuestDataSet @ 14b56dd40

UDS_QuestDataSet * __thiscall
UDS_QuestDataSet::UDS_QuestDataSet(UDS_QuestDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_QuestDataSet__6B_;
  return this;
}

// ~UDS_QuestDataSet @ 14b56e4e0

void __thiscall UDS_QuestDataSet::~UDS_QuestDataSet(UDS_QuestDataSet *this)

{
  *(undefined ***)this = &___7UDS_QuestDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b56f9f0

UClass * __cdecl UDS_QuestDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_QuestDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_QuestDataSet",
               &Z_Registration_Info_UClass_UDS_QuestDataSet.InnerSingleton,
               StaticRegisterNativesUDS_QuestDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_QuestDataSet>,
               InternalVTableHelperCtorCaller<UDS_QuestDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_QuestDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_QuestDataSet @ 14b56fde0

void __cdecl UDS_QuestDataSet::StaticRegisterNativesUDS_QuestDataSet(void)

{
  return;
}

// UDS_QuestDataSet @ 14ba921b0

UDS_QuestDataSet * __thiscall
UDS_QuestDataSet::UDS_QuestDataSet(UDS_QuestDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_QuestDataSet__6B_;
  return this;
}

// GetAllData @ 14baa38d0

TArray<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_QuestDataSet::GetAllData
          (UDS_QuestDataSet *this,
          TArray<TWeakObjectPtr<UDS_QuestData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
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
      pUVar5 = Z_Construct_UClass_UDS_QuestData_NoRegister();
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

// Update @ 14bad3f90

void __thiscall UDS_QuestDataSet::Update(UDS_QuestDataSet *this,float *param_1)

{
  return;
}

