// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 8

// StaticClass @ 145fadc80

UClass * __cdecl ALandscapeSplineMeshesActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineMeshesActor",
               &Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton,
               StaticRegisterNativesALandscapeSplineMeshesActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeSplineMeshesActor>,
               InternalVTableHelperCtorCaller<ALandscapeSplineMeshesActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton;
}

// ALandscapeSplineMeshesActor @ 145fb4bc0

ALandscapeSplineMeshesActor * __thiscall
ALandscapeSplineMeshesActor::ALandscapeSplineMeshesActor
          (ALandscapeSplineMeshesActor *this,FVTableHelper *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALandscapeSplineMeshesActor__6B_;
  (this->StaticMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComponents).ArrayNum = 0;
  (this->StaticMeshComponents).ArrayMax = 0;
  return this;
}

// ALandscapeSplineMeshesActor @ 145fb4c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ALandscapeSplineMeshesActor * __thiscall
ALandscapeSplineMeshesActor::ALandscapeSplineMeshesActor
          (ALandscapeSplineMeshesActor *this,FObjectInitializer *param_1)

{
  APartitionActor::APartitionActor((APartitionActor *)this,param_1);
  this->_padding_ = (longlong)&___7ALandscapeSplineMeshesActor__6B_;
  (this->StaticMeshComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StaticMeshComponents).ArrayNum = 0;
  (this->StaticMeshComponents).ArrayMax = 0;
  AActor::SetCanBeDamaged((AActor *)this,false);
  return this;
}

// ~ALandscapeSplineMeshesActor @ 145fb6580

void __thiscall
ALandscapeSplineMeshesActor::~ALandscapeSplineMeshesActor(ALandscapeSplineMeshesActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7ALandscapeSplineMeshesActor__6B_;
  pFVar1 = (this->StaticMeshComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  APartitionActor::~APartitionActor((APartitionActor *)this);
  return;
}

// GetDetailedInfoInternal @ 145fc1570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
ALandscapeSplineMeshesActor::GetDetailedInfoInternal
          (ALandscapeSplineMeshesActor *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  UObject *pUVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong64 uVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 auStack_898 [32];
  undefined1 local_878 [8];
  FString *local_870;
  void *local_868 [2];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_858.Base = local_838;
  pFVar8 = (this->StaticMeshComponents).AllocatorInstance.Data;
  iVar2 = (this->StaticMeshComponents).ArrayNum;
  local_858.CurPos = local_838;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  local_858.End = (wchar_t *)local_38;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  local_870 = __return_storage_ptr__;
  do {
    if ((this->StaticMeshComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UStaticMeshComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_878);
    }
    if (pFVar8 == pFVar1) {
      if (local_858.End < local_858.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      }
      *local_858.CurPos = L'\0';
      ::FString::FString(local_870,local_858.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
      return local_870;
    }
    plVar3 = *(longlong **)pFVar8;
    if (plVar3 != (longlong *)0x0) {
      pUVar4 = (UObject *)plVar3[0xb4];
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UObject *)0x0) goto LAB_145fc1644;
      }
      else if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
LAB_145fc1644:
        puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x48))(plVar3,local_868);
        pvVar6 = (void *)*puVar5;
        iVar9 = *(int *)(puVar5 + 1) + -1;
        if (*(int *)(puVar5 + 1) == 0) {
          iVar9 = 0;
        }
        uVar7 = (ulong64)iVar9;
        if (local_858.End < local_858.CurPos + uVar7) {
          TStringBuilderBase<wchar_t>::Extend(&local_858,uVar7);
        }
        if (iVar9 != 0) {
          pvVar6 = FGenericPlatformString::Memcpy(local_858.CurPos,pvVar6,uVar7 * 2);
          local_858.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
        }
        if (local_868[0] != (void *)0x0) {
          FMemory::Free(local_868[0]);
        }
        if (local_858.End < local_858.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_858,1);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_858.CurPos,L"\n",2);
        local_858.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 145fc32d0

UClass * __cdecl ALandscapeSplineMeshesActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeSplineMeshesActor",
               &Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton,
               StaticRegisterNativesALandscapeSplineMeshesActor,0x2d0,8,CLASS_Intrinsic|CLASS_Config
               ,CASTCLASS_None,L"Engine",InternalConstructor<ALandscapeSplineMeshesActor>,
               InternalVTableHelperCtorCaller<ALandscapeSplineMeshesActor>,local_res8,
               APartitionActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ALandscapeSplineMeshesActor.InnerSingleton;
}

// GetStaticMeshComponents @ 145fc43e0

TArray<UStaticMeshComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
ALandscapeSplineMeshesActor::GetStaticMeshComponents(ALandscapeSplineMeshesActor *this)

{
  return (TArray<UStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *)&this->StaticMeshComponents;
}

// StaticRegisterNativesALandscapeSplineMeshesActor @ 145fc8730

void __cdecl ALandscapeSplineMeshesActor::StaticRegisterNativesALandscapeSplineMeshesActor(void)

{
  return;
}

