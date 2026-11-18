// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioExtensions
// Functions: 10

// FParameterInterface @ 14452fc80

FParameterInterface * __thiscall
Audio::FParameterInterface::FParameterInterface
          (FParameterInterface *this,FName param_1,FVersion *param_2)

{
  this->NamePrivate = param_1;
  this->VersionPrivate = *param_2;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->Environment).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Environment).ArrayNum = 0;
  (this->Environment).ArrayMax = 0;
  (this->UClassOptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UClassOptions).ArrayNum = 0;
  (this->UClassOptions).ArrayMax = 0;
  return this;
}

// FParameterInterface @ 14452fcc0

FParameterInterface * __thiscall
Audio::FParameterInterface::FParameterInterface
          (FParameterInterface *this,FName param_1,FVersion *param_2,UClass *param_3)

{
  TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_> *pTVar1;
  FName *pFVar2;
  FTopLevelAssetPath local_28;
  uint local_18;
  
  this->NamePrivate = param_1;
  pTVar1 = &this->UClassOptions;
  this->VersionPrivate = *param_2;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  (this->Outputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Outputs).ArrayNum = 0;
  (this->Outputs).ArrayMax = 0;
  (this->Environment).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Environment).ArrayNum = 0;
  (this->Environment).ArrayMax = 0;
  UStruct::GetStructPathName((UStruct *)param_3,&local_28);
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_18 = CONCAT22(local_18._2_2_,1);
  (this->UClassOptions).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x14,4,1,0,&pTVar1->AllocatorInstance,1,&(this->UClassOptions).ArrayMax);
  pFVar2 = (FName *)(pTVar1->AllocatorInstance).Data;
  *pFVar2 = local_28.PackageName;
  pFVar2[1] = local_28.AssetName;
  pFVar2[2].ComparisonIndex.Value = local_18;
  return this;
}

// FindSupportedUClasses @ 1445331f0

TArray<UClass_const_*,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FParameterInterface::FindSupportedUClasses
          (FParameterInterface *this,
          TArray<UClass_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  TArray<UClass_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  undefined1 local_res8 [8];
  UObject *local_38 [2];
  FTopLevelAssetPath local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar9 = (FName *)(this->UClassOptions).AllocatorInstance.Data;
  iVar2 = (this->UClassOptions).ArrayNum;
  pFVar1 = (FName *)((longlong)pFVar9 + (longlong)iVar2 * 0x14);
  while( true ) {
    if ((this->UClassOptions).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::FParameterInterface::FClassOptions_const_,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) break;
    local_28.PackageName = *pFVar9;
    local_28.AssetName = pFVar9[1];
    pUVar7 = Z_Construct_UClass_UClass_NoRegister();
    local_38[0] = StaticFindObject(pUVar7,&local_28,None);
    if (local_38[0] != (UObject *)0x0) {
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 <
          pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<UClass_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_38[0];
    }
    pFVar9 = (FName *)&pFVar9[2].Number;
  }
  return __return_storage_ptr__;
}

// GetEnvironment @ 144534650

TArray<Audio::FParameterInterface::FEnvironmentVariable,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FParameterInterface::GetEnvironment(FParameterInterface *this)

{
  return &this->Environment;
}

// GetInputs @ 144534770

TArray<Audio::FParameterInterface::FInput,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FParameterInterface::GetInputs(FParameterInterface *this)

{
  return &this->Inputs;
}

// GetName @ 144534970

FName __thiscall Audio::FParameterInterface::GetName(FParameterInterface *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->NamePrivate;
  return in_RDX;
}

// GetOutputs @ 144534a50

TArray<Audio::FParameterInterface::FOutput,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FParameterInterface::GetOutputs(FParameterInterface *this)

{
  return &this->Outputs;
}

// GetType @ 144535880

UClass * __thiscall Audio::FParameterInterface::GetType(FParameterInterface *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UObject.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Object",&Z_Registration_Info_UClass_UObject.InnerSingleton,
               UObject::StaticRegisterNativesUObject,0x28,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UObject>,
               InternalVTableHelperCtorCaller<UObject>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObject.InnerSingleton;
}

// GetUClassOptions @ 144535920

TArray<Audio::FParameterInterface::FClassOptions,TSizedDefaultAllocator<32>_> * __thiscall
Audio::FParameterInterface::GetUClassOptions(FParameterInterface *this)

{
  return &this->UClassOptions;
}

// GetVersion @ 144535ad0

FVersion * __thiscall Audio::FParameterInterface::GetVersion(FParameterInterface *this)

{
  return &this->VersionPrivate;
}

