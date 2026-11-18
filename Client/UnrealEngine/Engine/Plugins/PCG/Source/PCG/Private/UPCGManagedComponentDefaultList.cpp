// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 7

// StaticClass @ 149f1e740

UClass * __cdecl UPCGManagedComponentDefaultList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentDefaultList",
               &Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponentDefaultList,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedComponentDefaultList>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentDefaultList>,local_res8,
               UPCGManagedComponentList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton;
}

// UPCGManagedComponentDefaultList @ 149f326b0

UPCGManagedComponentDefaultList * __thiscall
UPCGManagedComponentDefaultList::UPCGManagedComponentDefaultList
          (UPCGManagedComponentDefaultList *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0;
  this->field_0x2c = 0;
  this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UPCGManagedComponentDefaultList__6B_;
  return this;
}

// UPCGManagedComponentDefaultList @ 149f326f0

UPCGManagedComponentDefaultList * __thiscall
UPCGManagedComponentDefaultList::UPCGManagedComponentDefaultList
          (UPCGManagedComponentDefaultList *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->field_0x28 = 0;
  this->field_0x2c = 0;
  this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined ***)this = &___7UPCGManagedComponentDefaultList__6B_;
  return this;
}

// ~UPCGManagedComponentDefaultList @ 149f348c0

void __thiscall
UPCGManagedComponentDefaultList::~UPCGManagedComponentDefaultList
          (UPCGManagedComponentDefaultList *this)

{
  *(undefined ***)this = &___7UPCGManagedComponentList__6B_;
  DestructItems<TSoftObjectPtr<UActorComponent>,int>
            (*(TSoftObjectPtr<UActorComponent> **)&this->field_0x38,*(int *)&this->field_0x40);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  *(undefined ***)this = &___7UPCGManagedResource__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddGeneratedComponentsFromBP @ 149f3b720

void __thiscall
UPCGManagedComponentDefaultList::AddGeneratedComponentsFromBP
          (UPCGManagedComponentDefaultList *this,
          TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  FSoftObjectPath local_60;
  undefined1 local_40 [40];
  
  puVar1 = &this->field_0x38;
  if ((TArray<TSoftObjectPtr<UActorComponent>,TSizedDefaultAllocator<32>_> *)puVar1 == param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 != 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,iVar3,(ForAnyElementType *)puVar1,(int *)&this->field_0x40,
                       (int *)&this->field_0x44);
    ConstructItems<TSoftObjectPtr<UActorComponent>,TSoftObjectPtr<UActorComponent>,int>
              ((void *)(*(longlong *)puVar1 + (longlong)iVar7 * 0x28),
               (TSoftObjectPtr<UActorComponent> *)(param_1->AllocatorInstance).Data,iVar3);
  }
  iVar3 = *(int *)&this->field_0x40;
  puVar8 = *(undefined8 **)puVar1;
  puVar2 = puVar8 + (longlong)iVar3 * 5;
  while( true ) {
    if (*(int *)&this->field_0x40 != iVar3) {
      `TCheckedPointerIterator<TSoftObjectPtr<UActorComponent>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar8 == puVar2) break;
    uVar4 = *puVar8;
    FSoftObjectPath::FSoftObjectPath(&local_60,(FSoftObjectPath *)(puVar8 + 1));
    local_40._0_8_ = uVar4;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_40 + 8),&local_60);
    UPCGManagedComponentBase::SetupGeneratedComponentFromBP
              ((UPCGManagedComponentBase *)this,(TSoftObjectPtr<UActorComponent> *)local_40);
    if (local_60.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.SubPathString.Data.AllocatorInstance.Data);
    }
    puVar8 = puVar8 + 5;
  }
  return;
}

// GetPrivateStaticClass @ 149f4d5c0

UClass * __cdecl UPCGManagedComponentDefaultList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGManagedComponentDefaultList",
               &Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton,
               StaticRegisterNativesUPCGManagedComponentDefaultList,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGManagedComponentDefaultList>,
               InternalVTableHelperCtorCaller<UPCGManagedComponentDefaultList>,local_res8,
               UPCGManagedComponentList::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGManagedComponentDefaultList.InnerSingleton;
}

// StaticRegisterNativesUPCGManagedComponentDefaultList @ 149f639e0

void __cdecl
UPCGManagedComponentDefaultList::StaticRegisterNativesUPCGManagedComponentDefaultList(void)

{
  return;
}

