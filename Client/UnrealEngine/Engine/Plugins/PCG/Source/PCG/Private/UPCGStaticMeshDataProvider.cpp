// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 14972bad0

UClass * __cdecl UPCGStaticMeshDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshDataProvider",
               &Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshDataProvider,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGStaticMeshDataProvider>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton;
}

// UPCGStaticMeshDataProvider @ 14973c8b0

UPCGStaticMeshDataProvider * __thiscall
UPCGStaticMeshDataProvider::UPCGStaticMeshDataProvider
          (UPCGStaticMeshDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGStaticMeshDataProvider__6B_;
  (this->LoadedStaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->LoadHandle).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPCGStaticMeshDataProvider @ 14973c8f0

UPCGStaticMeshDataProvider * __thiscall
UPCGStaticMeshDataProvider::UPCGStaticMeshDataProvider
          (UPCGStaticMeshDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGStaticMeshDataProvider__6B_;
  (this->LoadedStaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  (this->LoadHandle).Object = (FStreamableHandle *)0x0;
  (this->LoadHandle).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UPCGStaticMeshDataProvider @ 14973e890

void __thiscall
UPCGStaticMeshDataProvider::~UPCGStaticMeshDataProvider(UPCGStaticMeshDataProvider *this)

{
  this->_padding_ = (longlong)&___7UPCGStaticMeshDataProvider__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7UPCGComputeDataProvider__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14975cac0

UClass * __cdecl UPCGStaticMeshDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGStaticMeshDataProvider",
               &Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGStaticMeshDataProvider,0xb0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGStaticMeshDataProvider>,
               InternalVTableHelperCtorCaller<UPCGStaticMeshDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGStaticMeshDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975f050

FComputeDataProviderRenderProxy * __thiscall
UPCGStaticMeshDataProvider::GetRenderProxy(UPCGStaticMeshDataProvider *this)

{
  int *piVar1;
  int iVar2;
  UStaticMesh *this_00;
  FComputeDataProviderRenderProxy FVar3;
  FComputeDataProviderRenderProxy FVar4;
  code *pcVar5;
  bool bVar6;
  FComputeDataProviderRenderProxy *pFVar7;
  FStaticMeshRenderData *pFVar8;
  
  pFVar7 = ::operator_new(0x58);
  if (pFVar7 == (FComputeDataProviderRenderProxy *)0x0) {
    return (FComputeDataProviderRenderProxy *)0x0;
  }
  this_00 = (this->LoadedStaticMesh).field0_0x0.DebugPtr;
  *pFVar7 = (FComputeDataProviderRenderProxy)&___7FPCGStaticMeshDataProviderProxy__6B_;
  pFVar7[1] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[2] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[3] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[4] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[5] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[6] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[7] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[8] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[9] = (FComputeDataProviderRenderProxy)0x0;
  pFVar7[10] = (FComputeDataProviderRenderProxy)0x0;
  if (((this_00 != (UStaticMesh *)0x0) &&
      (pFVar8 = UStaticMesh::GetRenderData(this_00), pFVar8 != (FStaticMeshRenderData *)0x0)) &&
     ((pFVar8->LODResources).Array.ArrayNum != 0)) {
    pFVar7[1] = (FComputeDataProviderRenderProxy)this_00->_padding_;
    if (((pFVar8->LODResources).Array.ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FComputeDataProviderRenderProxy *)(*pcVar5)();
      return pFVar7;
    }
    FVar3 = pFVar7[2];
    FVar4 = *(FComputeDataProviderRenderProxy *)(pFVar8->LODResources).Array.AllocatorInstance.Data;
    if (FVar3 != FVar4) {
      pFVar7[2] = FVar4;
      if (FVar4 != (FComputeDataProviderRenderProxy)0x0) {
        LOCK();
        *(int *)((longlong)FVar4 + 8) = *(int *)((longlong)FVar4 + 8) + 1;
        UNLOCK();
      }
      if (FVar3 != (FComputeDataProviderRenderProxy)0x0) {
        piVar1 = (int *)((longlong)FVar3 + 8);
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
          (*(code *)**(undefined8 **)FVar3)(FVar3,1);
        }
      }
    }
    FVar3 = (FComputeDataProviderRenderProxy)(pFVar8->Bounds).Origin.field0_0x0._s_0.Y;
    pFVar7[3] = (FComputeDataProviderRenderProxy)(pFVar8->Bounds).Origin.field0_0x0._s_0.X;
    pFVar7[4] = FVar3;
    FVar3 = (FComputeDataProviderRenderProxy)(pFVar8->Bounds).BoxExtent.field0_0x0._s_0.X;
    pFVar7[5] = (FComputeDataProviderRenderProxy)(pFVar8->Bounds).Origin.field0_0x0._s_0.Z;
    pFVar7[6] = FVar3;
    FVar3 = (FComputeDataProviderRenderProxy)(pFVar8->Bounds).BoxExtent.field0_0x0._s_0.Z;
    pFVar7[7] = (FComputeDataProviderRenderProxy)(pFVar8->Bounds).BoxExtent.field0_0x0._s_0.Y;
    pFVar7[8] = FVar3;
    pFVar7[9] = (FComputeDataProviderRenderProxy)(pFVar8->Bounds).SphereRadius;
  }
  return pFVar7;
}

// PrepareForExecute_GameThread @ 1497728b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGStaticMeshDataProvider::PrepareForExecute_GameThread
          (UPCGStaticMeshDataProvider *this,UPCGDataBinding *param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FPCGDataCollection *this_00;
  UClass *pUVar6;
  TSharedPtr<FStreamableHandle,1> *pTVar7;
  UStaticMesh *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  FObjectPtr_u_0 this_01;
  bool bVar11;
  FObjectPtr_u_0 local_res8;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_48;
  TSharedPtr<FStreamableHandle,1> local_38;
  FString local_28;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId157,
               "UPCGStaticMeshDataProvider::PrepareForExecute_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGStaticMeshDataInterface.cpp"
               ,0x9d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId157);
  }
  pTVar1 = &this->LoadHandle;
  if (pTVar1->Object == (FStreamableHandle *)0x0) {
    pwVar10 = L"";
    if (((int)this->_padding_ == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GetDownstreamInputPinLabelAliases().IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGStaticMeshDataInterface.cpp"
                           ,0xa2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (param_1 == (UPCGDataBinding *)0x0) {
      pFVar9 = GetTypeName<UPCGDataBinding>(&local_28);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    this_00 = UPCGDataBinding::GetInputDataCollection(param_1);
    if (((int)this->_padding_ < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    FPCGDataCollection::GetInputsByPin(this_00,&local_48,(FName *)this->_padding_);
    if (local_48.ArrayNum != 0) {
      if ((local_48.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_res8 = *(FObjectPtr_u_0 *)local_48.AllocatorInstance.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149772a1e:
        if ((UPCGResourceData *)local_res8.Handle == (UPCGResourceData *)0x0) goto LAB_149772a46;
        pUVar6 = Z_Construct_UClass_UPCGStaticMeshResourceData_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
        this_01 = local_res8;
        if (!bVar4) goto LAB_149772a46;
      }
      else {
        if ((UPCGResourceData *)local_res8.Handle != (UPCGResourceData *)0x0) {
          UE::GC::MarkAsReachable(local_res8.Handle);
          goto LAB_149772a1e;
        }
LAB_149772a46:
        this_01.Handle = (UObject *)0x0;
      }
      if ((local_48.ArrayNum != 1) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8682561849570361174>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGStaticMeshDataInterface.cpp"
                             ,0xaa,"TaggedDatas.Num() == 1"), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((UPCGResourceData *)this_01.Handle == (UPCGResourceData *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8682561849570361172>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGStaticMeshDataInterface.cpp"
                           ,0xac,"ResourceData");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      else {
        pTVar7 = UPCGResourceData::RequestResourceLoad
                           ((UPCGResourceData *)this_01.Handle,&local_38,true);
        if (pTVar1 != pTVar7) {
          pTVar1->Object = pTVar7->Object;
          pTVar7->Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LoadHandle).SharedReferenceCount,&pTVar7->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
      }
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if ((FPCGTaggedData *)local_48.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    if (pTVar1->Object != (FStreamableHandle *)0x0) goto LAB_149772b0c;
  }
  else {
LAB_149772b0c:
    if (pTVar1->Object->bLoadCompleted == false) {
      bVar4 = false;
      goto LAB_149772b6d;
    }
    pUVar8 = (UStaticMesh *)FStreamableHandle::GetLoadedAsset(pTVar1->Object);
    if (pUVar8 == (UStaticMesh *)0x0) {
LAB_149772b4b:
      pUVar8 = (UStaticMesh *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar6->_padding_)) goto LAB_149772b4b;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UStaticMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->LoadedStaticMesh).field0_0x0.DebugPtr = pUVar8;
  }
  bVar4 = true;
LAB_149772b6d:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// Reset @ 1497751a0

void __thiscall UPCGStaticMeshDataProvider::Reset(UPCGStaticMeshDataProvider *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->LoadedStaticMesh).field0_0x0.DebugPtr = (UStaticMesh *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LoadHandle != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
    (this->LoadHandle).Object = (FStreamableHandle *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LoadHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  return;
}

// StaticRegisterNativesUPCGStaticMeshDataProvider @ 1497788a0

void __cdecl UPCGStaticMeshDataProvider::StaticRegisterNativesUPCGStaticMeshDataProvider(void)

{
  return;
}

