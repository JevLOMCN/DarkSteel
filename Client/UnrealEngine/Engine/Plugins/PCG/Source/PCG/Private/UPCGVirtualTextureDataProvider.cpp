// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 14972b810

UClass * __cdecl UPCGVirtualTextureDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureDataProvider",
               &Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGVirtualTextureDataProvider,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGVirtualTextureDataProvider>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton;
}

// UPCGVirtualTextureDataProvider @ 14973cf90

UPCGVirtualTextureDataProvider * __thiscall
UPCGVirtualTextureDataProvider::UPCGVirtualTextureDataProvider
          (UPCGVirtualTextureDataProvider *this,FVTableHelper *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVirtualTextureDataProvider__6B_;
  (this->VirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualTextures).ArrayNum = 0;
  (this->VirtualTextures).ArrayMax = 0;
  return this;
}

// UPCGVirtualTextureDataProvider @ 14973cfd0

UPCGVirtualTextureDataProvider * __thiscall
UPCGVirtualTextureDataProvider::UPCGVirtualTextureDataProvider
          (UPCGVirtualTextureDataProvider *this,FObjectInitializer *param_1)

{
  UPCGComputeDataProvider::UPCGComputeDataProvider((UPCGComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVirtualTextureDataProvider__6B_;
  (this->VirtualTextures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualTextures).ArrayNum = 0;
  (this->VirtualTextures).ArrayMax = 0;
  return this;
}

// ~UPCGVirtualTextureDataProvider @ 14973ec10

void __thiscall
UPCGVirtualTextureDataProvider::~UPCGVirtualTextureDataProvider
          (UPCGVirtualTextureDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGVirtualTextureDataProvider__6B_;
  pFVar1 = (this->VirtualTextures).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// GetPrivateStaticClass @ 14975d180

UClass * __cdecl UPCGVirtualTextureDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UPCGComputeDataProvider::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVirtualTextureDataProvider",
               &Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton,
               StaticRegisterNativesUPCGVirtualTextureDataProvider,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGVirtualTextureDataProvider>,
               InternalVTableHelperCtorCaller<UPCGVirtualTextureDataProvider>,local_res8,
               UPCGComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVirtualTextureDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14975f590

FComputeDataProviderRenderProxy * __thiscall
UPCGVirtualTextureDataProvider::GetRenderProxy(UPCGVirtualTextureDataProvider *this)

{
  FPCGVirtualTextureDataProviderProxy *pFVar1;
  
  pFVar1 = ::operator_new(0xa40);
  if (pFVar1 != (FPCGVirtualTextureDataProviderProxy *)0x0) {
    pFVar1 = FPCGVirtualTextureDataProviderProxy::FPCGVirtualTextureDataProviderProxy
                       (pFVar1,&this->VirtualTextures);
    return (FComputeDataProviderRenderProxy *)pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// Initialize @ 14976a250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UPCGVirtualTextureDataProvider::Initialize
          (UPCGVirtualTextureDataProvider *this,UComputeDataInterface *param_1,UObject *param_2,
          ulong64 param_3,ulong64 param_4)

{
  int *piVar1;
  TArray<TObjectPtr<URuntimeVirtualTexture_const_>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UPCGData *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  UPCGDataBinding *this_00;
  IPCGGraphExecutionSource *pIVar10;
  longlong lVar11;
  FPCGDataCollection *this_01;
  FString *pFVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  FPCGTaggedData *pFVar17;
  bool bVar18;
  undefined1 local_res10 [8];
  UObject *local_d0;
  uint local_c8;
  FObjectPtr_u_0 local_c0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_b8;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  bVar7 = false;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId127,"UPCGVirtualTextureDataProvider::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGVirtualTextureDataInterface.cpp"
               ,0x7f);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId127);
  }
  UPCGComputeDataProvider::Initialize
            ((UPCGComputeDataProvider *)this,param_1,param_2,param_3,param_4);
  if (param_1 == (UComputeDataInterface *)0x0) {
    pFVar12 = GetTypeName<UPCGVirtualTextureDataInterface>(&local_60);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar9 = UPCGVirtualTextureDataInterface::StaticClass();
  iVar8 = (int)pUVar9->_padding_;
  if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar8) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
      &pUVar9->_padding_)) {
    pFVar12 = GetTypeName<UPCGVirtualTextureDataInterface>(&local_50);
    pwVar16 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UComputeDataInterface_const_>(&local_40,param_1);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar16 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar16,pwVar14);
  }
  this_00 = CastChecked<UPCGDataBinding,UObject>(param_2);
  pIVar10 = UPCGDataBinding::GetExecutionSource(this_00);
  if ((pIVar10 != (IPCGGraphExecutionSource *)0x0) &&
     (lVar11 = (**(code **)((longlong)*pIVar10 + 8))(pIVar10), lVar11 != 0)) {
    pUVar9 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar8 = (int)pUVar9->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar8 * 8)
        == &pUVar9->_padding_)) goto LAB_14976a370;
  }
  lVar11 = 0;
LAB_14976a370:
  if ((*(int *)&param_1[1].field_0x20 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!DataInterface->GetDownstreamInputPinLabelAliases().IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGVirtualTextureDataInterface.cpp"
                         ,0x88,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_01 = UPCGDataBinding::GetInputDataCollection(this_00);
  if ((*(int *)&param_1[1].field_0x20 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FPCGDataCollection::GetInputsByPin(this_01,&local_b8,*(FName **)&param_1[1].field_0x18);
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0xce) != '\x02')) {
    if (1 < (byte)LogPCG._0_1_) {
      if (((int)this->_padding_ < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::FName::ToString((FName *)this->_padding_,&local_70);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      local_80.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
LAB_14976a7a3:
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
LAB_14976a7ad:
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FPCGTaggedData *)local_b8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    return;
  }
  uVar13 = (ulonglong)local_b8.ArrayNum;
  local_c8 = local_b8.ArrayNum;
  pFVar17 = (FPCGTaggedData *)(local_b8.AllocatorInstance.Data + uVar13 * 0x78);
  FVar15.Data = local_b8.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_b8.ArrayNum != (uint)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if ((FPCGTaggedData *)FVar15.Data == pFVar17) goto LAB_14976a7ad;
      local_c0.Handle = (UObject *)(((FPCGTaggedData *)FVar15.Data)->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) break;
      if ((UPCGData *)local_c0.Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_c0.Handle);
        break;
      }
LAB_14976a58f:
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3096512966187548823>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGVirtualTextureDataInterface.cpp"
                         ,0x97,"VirtualTextureData");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (1 < (byte)LogPCG._0_1_) {
        pUVar4 = (((FPCGTaggedData *)FVar15.Data)->Data).Data.field0_0x0.DebugPtr;
        if (pUVar4 != (UPCGData *)0x0) {
          local_a8 = (FName)pUVar4->_padding_;
          bVar7 = true;
          ::FName::ToString(&local_a8,&local_a0);
        }
        if (((int)this->_padding_ < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        ::FName::ToString((FName *)this->_padding_,&local_90);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
LAB_14976a6a1:
      uVar13 = (ulonglong)local_c8;
      FVar15.Data = FVar15.Data + 0x78;
    }
    if ((UPCGData *)local_c0.Handle == (UPCGData *)0x0) goto LAB_14976a58f;
    pUVar9 = Z_Construct_UClass_UPCGVirtualTextureData_NoRegister();
    bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_c0,pUVar9);
    if ((!bVar6) || ((UPCGData *)local_c0.Handle == (UPCGData *)0x0)) goto LAB_14976a58f;
    if (3 < (uint)(this->VirtualTextures).ArrayNum) {
      if ((byte)LogPCG._0_1_ < 3) goto LAB_14976a7ad;
      if (((int)this->_padding_ < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      ::FName::ToString((FName *)this->_padding_,&local_80);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      goto LAB_14976a7a3;
    }
    pTVar2 = &this->VirtualTextures;
    local_d0 = *(UObject **)&local_c0.Handle[10].field_0x18;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_d0);
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_d0) &&
        ((FScriptContainerElement *)&local_d0 <
         pFVar3 + (longlong)(this->VirtualTextures).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->VirtualTextures).ArrayNum;
    piVar1 = &(this->VirtualTextures).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->VirtualTextures).ArrayNum = iVar8 + 1;
    *(UObject **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_d0;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_d0 == (UObject *)0x0))
    goto LAB_14976a6a1;
    UE::GC::MarkAsReachable(local_d0);
    uVar13 = (ulonglong)local_c8;
    FVar15.Data = FVar15.Data + 0x78;
  } while( true );
}

// Reset @ 149775510

void __thiscall UPCGVirtualTextureDataProvider::Reset(UPCGVirtualTextureDataProvider *this)

{
  int *piVar1;
  
  UPCGComputeDataProvider::Reset((UPCGComputeDataProvider *)this);
  piVar1 = &(this->VirtualTextures).ArrayMax;
  (this->VirtualTextures).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->VirtualTextures).AllocatorInstance,0,piVar1);
  }
  return;
}

// StaticRegisterNativesUPCGVirtualTextureDataProvider @ 149778930

void __cdecl
UPCGVirtualTextureDataProvider::StaticRegisterNativesUPCGVirtualTextureDataProvider(void)

{
  return;
}

