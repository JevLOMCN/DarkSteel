// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 14

// StaticClass @ 14907ddc0

UClass * __cdecl UNiagaraDataChannelHandler_Islands::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_Islands",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_Islands,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannelHandler_Islands>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_Islands>,local_res8,
               UNiagaraDataChannelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.InnerSingleton;
}

// UNiagaraDataChannelHandler_Islands @ 1490b27c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler_Islands * __thiscall
UNiagaraDataChannelHandler_Islands::UNiagaraDataChannelHandler_Islands
          (UNiagaraDataChannelHandler_Islands *this,FVTableHelper *param_1)

{
  UNiagaraDataChannelHandler::UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_Islands__6B_;
  (this->ActiveIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveIslands).ArrayNum = 0;
  (this->ActiveIslands).ArrayMax = 0;
  (this->FreeIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIslands).ArrayNum = 0;
  (this->FreeIslands).ArrayMax = 0;
  (this->IslandPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandPool).ArrayNum = 0;
  (this->IslandPool).ArrayMax = 0;
  return this;
}

// UNiagaraDataChannelHandler_Islands @ 1490b2820

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler_Islands * __thiscall
UNiagaraDataChannelHandler_Islands::UNiagaraDataChannelHandler_Islands
          (UNiagaraDataChannelHandler_Islands *this,FObjectInitializer *param_1)

{
  UNiagaraDataChannelHandler::UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_Islands__6B_;
  (this->ActiveIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveIslands).ArrayNum = 0;
  (this->ActiveIslands).ArrayMax = 0;
  (this->FreeIslands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeIslands).ArrayNum = 0;
  (this->FreeIslands).ArrayMax = 0;
  (this->IslandPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IslandPool).ArrayNum = 0;
  (this->IslandPool).ArrayMax = 0;
  return this;
}

// ~UNiagaraDataChannelHandler_Islands @ 1490b8690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Islands::~UNiagaraDataChannelHandler_Islands
          (UNiagaraDataChannelHandler_Islands *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDataChannelHandler_Islands__6B_;
  DestructItems<FNDCIsland,int>
            ((FNDCIsland *)(this->IslandPool).AllocatorInstance.Data,(this->IslandPool).ArrayNum);
  pFVar1 = (this->IslandPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveIslands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraDataChannelHandler::~UNiagaraDataChannelHandler((UNiagaraDataChannelHandler *)this);
  return;
}

// ActivateNewIsland @ 1490caee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UNiagaraDataChannelHandler_Islands::ActivateNewIsland
          (UNiagaraDataChannelHandler_Islands *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<FNDCIsland,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UObject *pUVar9;
  longlong lVar10;
  FNDCIsland *this_00;
  FName local_res8;
  uint local_28 [2];
  FString local_20;
  
  pTVar2 = &this->IslandPool;
  if (0 < (this->FreeIslands).ArrayNum) {
    iVar7 = (this->FreeIslands).ArrayNum;
    local_28[0] = *(uint *)((this->FreeIslands).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    lVar10 = (longlong)(int)local_28[0];
    (this->FreeIslands).ArrayNum = iVar7 + -1;
    uVar8 = 0;
    if ((int)local_28[0] < (this->IslandPool).ArrayNum) {
      uVar8 = ~local_28[0] >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    this_00 = (FNDCIsland *)((pTVar2->AllocatorInstance).Data + lVar10 * 0x60);
    if (this_00 != (FNDCIsland *)0x0) goto LAB_1490cafbc;
  }
  uVar8 = (this->IslandPool).ArrayNum;
  piVar1 = &(this->IslandPool).ArrayMax;
  local_28[0] = uVar8;
  if (uVar8 == *piVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,&pTVar2->AllocatorInstance,piVar1);
    (this->IslandPool).ArrayNum = uVar8;
  }
  (this->IslandPool).ArrayNum = uVar8 + 1;
  this_00 = (FNDCIsland *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x60);
  DefaultConstructItems<FNDCIsland,int>(this_00,1);
LAB_1490cafbc:
  if (local_28[0] == 0xffffffff) {
    if (1 < (byte)LogNiagara._0_1_) {
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if ((pUVar9 == (UObject *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                             ,0x3a,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      local_res8.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
      local_res8.Number = *(uint *)&pUVar9->field_0x1c;
      ::FName::ToString(&local_res8,&local_20);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((this_00 == (FNDCIsland *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewIsland",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
                           ,0x125,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    pTVar3 = &this->ActiveIslands;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->ActiveIslands).ArrayMax * 4
        )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
    iVar7 = (this->ActiveIslands).ArrayNum;
    piVar1 = &(this->ActiveIslands).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->ActiveIslands).ArrayNum = iVar7 + 1;
    *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_28[0];
    FNDCIsland::Init(this_00,this);
  }
  return local_28[0];
}

// BeginFrame @ 1490cdcb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Islands::BeginFrame
          (UNiagaraDataChannelHandler_Islands *this,float param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  UNiagaraDataChannelHandler::BeginFrame((UNiagaraDataChannelHandler *)this,param_1);
  for (iVar6 = 0; (-1 < iVar6 && (iVar6 < (this->ActiveIslands).ArrayNum)); iVar6 = iVar6 + 1) {
    if (iVar6 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar1 = *(uint *)((this->ActiveIslands).AllocatorInstance.Data + (longlong)iVar6 * 4);
    uVar5 = 0;
    if ((int)uVar1 < (this->IslandPool).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->IslandPool).AllocatorInstance.Data;
    lVar7 = (longlong)(int)uVar1 * 0x60;
    if (*(longlong *)(pFVar2 + lVar7 + 0x50) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FNiagaraDataChannelData::BeginFrame
              (*(FNiagaraDataChannelData **)(pFVar2 + lVar7 + 0x50),
               *(UNiagaraDataChannelHandler **)(pFVar2 + lVar7));
  }
  return;
}

// Cleanup @ 1490d2fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Islands::Cleanup(UNiagaraDataChannelHandler_Islands *this)

{
  int *piVar1;
  
  piVar1 = &(this->ActiveIslands).ArrayMax;
  (this->ActiveIslands).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ActiveIslands).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FreeIslands).ArrayMax;
  (this->FreeIslands).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FreeIslands).AllocatorInstance,0,piVar1);
  }
  DestructItems<FNDCIsland,int>
            ((FNDCIsland *)(this->IslandPool).AllocatorInstance.Data,(this->IslandPool).ArrayNum);
  piVar1 = &(this->IslandPool).ArrayMax;
  (this->IslandPool).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,&(this->IslandPool).AllocatorInstance,0,piVar1);
  }
  UNiagaraDataChannelHandler::Cleanup((UNiagaraDataChannelHandler *)this);
  return;
}

// EndFrame @ 1490f0650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Islands::EndFrame(UNiagaraDataChannelHandler_Islands *this,float param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  UWorld *pUVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  TReferenceControllerBase<1> *pTVar19;
  FScriptContainerElement *pFVar20;
  bool bVar21;
  int iVar22;
  uint local_res18 [2];
  TReferenceControllerBase<1> *local_res20;
  UObject *local_78;
  undefined8 local_70;
  FSharedReferencer<1> aFStack_68 [6];
  
  bVar21 = false;
  local_res18[0] = 0;
  local_78 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (local_78 != (UObject *)0x0) {
    pUVar13 = UNiagaraDataChannel_Islands::StaticClass();
    iVar22 = (int)pUVar13->_padding_;
    if ((iVar22 <= *(int *)(*(longlong *)&local_78->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_78->field_0x10 + 0x30) + (longlong)iVar22 * 8) ==
        &pUVar13->_padding_)) goto LAB_1490f06c3;
  }
  local_78 = (UObject *)0x0;
LAB_1490f06c3:
  fVar8 = __real_bf800000;
  pTVar2 = &this->ActiveIslands;
  iVar22 = 0;
  do {
    if ((iVar22 < 0) || ((this->ActiveIslands).ArrayNum <= iVar22)) {
      return;
    }
    uVar5 = *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar22 * 4);
    uVar10 = 0;
    if ((int)uVar5 < (this->IslandPool).ArrayNum) {
      uVar10 = ~uVar5 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar20 = (this->IslandPool).AllocatorInstance.Data;
    lVar18 = (longlong)(int)uVar5 * 0x60;
    if ((*(longlong *)(pFVar20 + lVar18 + 0x50) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FNiagaraDataChannelData::EndFrame
              (*(FNiagaraDataChannelData **)(pFVar20 + lVar18 + 0x50),
               *(UNiagaraDataChannelHandler **)(pFVar20 + lVar18));
    if (((byte)*(undefined4 *)&local_78[5].field_0xc & 3) == 3) {
      pUVar14 = (UWorld *)(**(code **)(**(longlong **)(pFVar20 + lVar18) + 0x180))();
      DrawDebugBox(pUVar14,(TVector<double> *)(pFVar20 + lVar18 + 8),
                   (TVector<double> *)(pFVar20 + lVar18 + 0x20),&UE::Math::TQuat<double>::Identity,
                   &FColor::Red,false,fVar8,'\0',0.0);
    }
    plVar16 = *(longlong **)(pFVar20 + lVar18 + 0x40);
    plVar3 = plVar16 + *(int *)(pFVar20 + lVar18 + 0x48);
    for (; plVar16 != plVar3; plVar16 = plVar16 + 1) {
      if (((*plVar16 == 0) || ((*(uint *)(*plVar16 + 8) >> 0x1e & 1) != 0)) ||
         (bVar9 = UNiagaraComponent::IsComplete((UNiagaraComponent *)*plVar16), bVar9))
      goto LAB_1490f082a;
    }
    plVar16 = (longlong *)0x0;
LAB_1490f082a:
    if ((*(longlong *)(pFVar20 + lVar18 + 0x50) == 0) ||
       (((pTVar19 = local_res20, *(longlong *)(pFVar20 + lVar18 + 0x58) != 0 &&
         (*(int *)(*(longlong *)(pFVar20 + lVar18 + 0x58) + 8) == 1)) &&
        (plVar16 != (longlong *)0x0)))) {
      pTVar19 = *(TReferenceControllerBase<1> **)(pFVar20 + lVar18 + 0x58);
      bVar21 = true;
      lVar6 = *(longlong *)(pFVar20 + lVar18 + 0x50);
      if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res20 = pTVar19;
      if ((lVar6 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(longlong *)(lVar6 + 0x10) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 0x20)) ||
         (((*(longlong *)(lVar6 + 0x20) != 0 &&
           (*(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x78) + 0x124) != 0)) ||
          (0 < *(int *)(lVar6 + 0x40))))) goto LAB_1490f08fe;
      bVar9 = true;
    }
    else {
LAB_1490f08fe:
      bVar9 = false;
    }
    if (bVar21) {
      bVar21 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    }
    if (bVar9) {
      if (((this->ActiveIslands).ArrayNum <= iVar22) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->FreeIslands).ArrayNum;
      piVar1 = &(this->FreeIslands).ArrayMax;
      pFVar15 = (pTVar2->AllocatorInstance).Data;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->FreeIslands).AllocatorInstance,piVar1);
      }
      (this->FreeIslands).ArrayNum = iVar11 + 1;
      local_70 = 0;
      aFStack_68[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)((this->FreeIslands).AllocatorInstance.Data + (longlong)iVar11 * 4) =
           *(undefined4 *)(pFVar15 + (longlong)iVar22 * 4);
      pFVar15 = pFVar20 + lVar18 + 0x50;
      if (pFVar15 != (FScriptContainerElement *)&local_70) {
        *(undefined8 *)pFVar15 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar15 + 8),aFStack_68);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (aFStack_68[0].ReferenceController);
      puVar17 = *(undefined8 **)(pFVar20 + lVar18 + 0x40);
      iVar11 = *(int *)(pFVar20 + lVar18 + 0x48);
      puVar4 = puVar17 + iVar11;
      while( true ) {
        if (*(int *)(pFVar20 + lVar18 + 0x48) != iVar11) {
          local_res18[0] = local_res18[0] & 0xffffff00;
          `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (puVar17 == puVar4) break;
        (**(code **)(*(longlong *)*puVar17 + 0xae0))();
        puVar17 = puVar17 + 1;
      }
      pFVar20 = pFVar20 + lVar18 + 0x40;
      iVar11 = *(int *)(pFVar20 + 0xc);
      *(undefined4 *)&pFVar20[8].field_0x0 = 0;
      if (iVar11 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)pFVar20,0,(int *)(pFVar20 + 0xc));
      }
      if (((this->ActiveIslands).ArrayNum <= iVar22) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (this->ActiveIslands).ArrayNum;
      pFVar20 = (pTVar2->AllocatorInstance).Data;
      iVar12 = (iVar11 - iVar22) + -1;
      if (1 < iVar12) {
        iVar12 = 1;
      }
      if (iVar12 != 0) {
        memmove(pFVar20 + (longlong)iVar22 * 4,pFVar20 + (longlong)(iVar11 - iVar12) * 4,
                (longlong)iVar12 << 2);
      }
      iVar11 = (this->ActiveIslands).ArrayNum + -1;
      (this->ActiveIslands).ArrayNum = iVar11;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&pTVar2->AllocatorInstance,iVar11,&(this->ActiveIslands).ArrayMax);
      iVar22 = iVar22 + -1;
    }
    iVar22 = iVar22 + 1;
  } while( true );
}

// FindData @ 1490f9360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FNiagaraDataChannelData,1> * __thiscall
UNiagaraDataChannelHandler_Islands::FindData
          (UNiagaraDataChannelHandler_Islands *this,
          TSharedPtr<FNiagaraDataChannelData,1> *__return_storage_ptr__,
          FNiagaraDataChannelSearchParameters *param_1,ENiagaraResourceAccess param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FNDCIsland *pFVar2;
  
  pFVar2 = FindOrCreateIsland(this,param_1,param_2);
  if (pFVar2 == (FNDCIsland *)0x0) {
    __return_storage_ptr__->Object = (FNiagaraDataChannelData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    __return_storage_ptr__->Object = (pFVar2->Data).Object;
    pTVar1 = (pFVar2->Data).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// FindOrCreateIsland @ 1490f9d90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNDCIsland * __thiscall
UNiagaraDataChannelHandler_Islands::FindOrCreateIsland
          (UNiagaraDataChannelHandler_Islands *this,FNiagaraDataChannelSearchParameters *param_1,
          ENiagaraResourceAccess param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  USceneComponent *pUVar5;
  code *pcVar6;
  double dVar7;
  UNiagaraDataChannel_Islands *pUVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  UNiagaraDataChannel *pUVar12;
  FNDCIsland *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FNDCIsland *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UNiagaraDataChannel_Islands *local_res20;
  double local_198;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  
  pUVar12 = (UNiagaraDataChannel *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res20 = CastChecked<UNiagaraDataChannel_Islands_const_,UNiagaraDataChannel_const_>(pUVar12);
  pUVar5 = (param_1->OwningComponent).field0_0x0.DebugPtr;
  if ((pUVar5 == (USceneComponent *)0x0) || (param_1->bOverrideLocation != 0)) {
    local_198 = (param_1->Location).field0_0x0._s_0.Z;
    uVar18 = SUB84(local_198,0);
    uVar19 = (undefined4)((ulonglong)local_198 >> 0x20);
    uVar25 = *(undefined4 *)&(param_1->Location).field0_0x0;
    uVar26 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 4);
    uVar27 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 8);
    uVar28 = *(undefined4 *)((longlong)&(param_1->Location).field0_0x0 + 0xc);
  }
  else {
    local_198 = (pUVar5->ComponentToWorld).Translation.ZW.m128d_f64[0];
    uVar25 = *(undefined4 *)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64;
    uVar26 = *(undefined4 *)((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 4);
    uVar27 = *(undefined4 *)((pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 1);
    uVar28 = *(undefined4 *)((longlong)(pUVar5->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
    uVar18 = SUB84(local_198,0);
    uVar19 = (undefined4)((ulonglong)local_198 >> 0x20);
    local_e8 = uVar25;
    uStack_e4 = uVar26;
    uStack_e0 = uVar27;
    uStack_dc = uVar28;
    local_d8 = local_198;
  }
  pFVar13 = (FNDCIsland *)0x0;
  if ((param_2 == ReadOnly) && (pUVar5 != (USceneComponent *)0x0)) {
    pFVar16 = (this->ActiveIslands).AllocatorInstance.Data;
    iVar4 = (this->ActiveIslands).ArrayNum;
    pFVar1 = pFVar16 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->ActiveIslands).ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar16 == pFVar1) break;
      uVar11 = *(uint *)pFVar16;
      uVar10 = 0;
      if ((int)uVar11 < (this->IslandPool).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FNDCIsland *)(*pcVar6)();
        return pFVar13;
      }
      pUVar5 = (param_1->OwningComponent).field0_0x0.DebugPtr;
      pFVar17 = (FNDCIsland *)
                ((this->IslandPool).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x60);
      pFVar15 = (pFVar17->SpawnedComponents).AllocatorInstance.Data;
      pFVar2 = pFVar15 + (longlong)(pFVar17->SpawnedComponents).ArrayNum * 8;
      for (; pFVar15 != pFVar2; pFVar15 = pFVar15 + 8) {
        if (*(USceneComponent **)pFVar15 == (USceneComponent *)0x0) {
          bVar9 = pUVar5 == (USceneComponent *)0x0;
        }
        else {
          bVar9 = *(USceneComponent **)pFVar15 == pUVar5;
        }
        if (bVar9) {
          return pFVar17;
        }
      }
      pFVar16 = pFVar16 + 4;
    }
  }
  pUVar8 = local_res20;
  lVar14 = (**(code **)(this->_padding_ + 0x180))(this);
  if ((lVar14 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
                         ,0xe0,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    pFVar13 = (FNDCIsland *)(*pcVar6)();
    return pFVar13;
  }
  dVar22 = (pUVar8->MaxExtents).field0_0x0._s_0.Z;
  dVar23 = (pUVar8->PerElementExtents).field0_0x0._s_0.Z;
  dVar3 = (pUVar8->MaxExtents).field0_0x0._s_0.X;
  dVar7 = (pUVar8->MaxExtents).field0_0x0._s_0.Y;
  dVar20 = (pUVar8->PerElementExtents).field0_0x0._s_0.X;
  dVar24 = (pUVar8->PerElementExtents).field0_0x0._s_0.Y;
  if (pUVar8->Mode == AlignedStatic) {
    pFVar16 = (this->ActiveIslands).AllocatorInstance.Data;
    iVar4 = (this->ActiveIslands).ArrayNum;
    pFVar1 = pFVar16 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->ActiveIslands).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar16 == pFVar1) break;
      uVar11 = *(uint *)pFVar16;
      uVar10 = 0;
      if ((int)uVar11 < (this->IslandPool).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FNDCIsland *)(*pcVar6)();
        return pFVar13;
      }
      dVar21 = 0.0;
      pFVar17 = (FNDCIsland *)
                ((this->IslandPool).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x60);
      dVar22 = (pFVar17->Bounds).Origin.field0_0x0._s_0.X;
      dVar23 = (pFVar17->Bounds).Origin.field0_0x0._s_0.Y;
      dVar3 = (pFVar17->Bounds).Origin.field0_0x0._s_0.Z;
      dVar20 = dVar22 - (pFVar17->Bounds).BoxExtent.field0_0x0._s_0.X;
      dVar24 = dVar23 - (pFVar17->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dVar22 = dVar22 + (pFVar17->Bounds).BoxExtent.field0_0x0._s_0.X;
      dVar23 = dVar23 + (pFVar17->Bounds).BoxExtent.field0_0x0._s_0.Y;
      dVar7 = dVar3 - (pFVar17->Bounds).BoxExtent.field0_0x0._s_0.Z;
      dVar3 = dVar3 + (pFVar17->Bounds).BoxExtent.field0_0x0._s_0.Z;
      if (dVar20 <= (double)CONCAT44(uVar26,uVar25)) {
        if (dVar22 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar22)
        {
          dVar20 = (double)CONCAT44(uVar26,uVar25) - dVar22;
          goto LAB_1490fa0d6;
        }
      }
      else {
        dVar20 = (double)CONCAT44(uVar26,uVar25) - dVar20;
LAB_1490fa0d6:
        dVar21 = dVar20 * dVar20;
      }
      if (dVar24 <= (double)CONCAT44(uVar28,uVar27)) {
        if (dVar23 <= (double)CONCAT44(uVar28,uVar27) && (double)CONCAT44(uVar28,uVar27) != dVar23)
        {
          dVar24 = (double)CONCAT44(uVar28,uVar27) - dVar23;
          goto LAB_1490fa0f6;
        }
      }
      else {
        dVar24 = (double)CONCAT44(uVar28,uVar27) - dVar24;
LAB_1490fa0f6:
        dVar21 = dVar21 + dVar24 * dVar24;
      }
      if ((local_198 < dVar7) || (dVar7 = dVar3, dVar3 < local_198)) {
        dVar21 = dVar21 + (local_198 - dVar7) * (local_198 - dVar7);
      }
      if (dVar21 <= 0.0) {
        return pFVar17;
      }
      pFVar16 = pFVar16 + 4;
    }
  }
  else if (pUVar8->Mode == Dynamic) {
    pFVar16 = (this->ActiveIslands).AllocatorInstance.Data;
    iVar4 = (this->ActiveIslands).ArrayNum;
    pFVar1 = pFVar16 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->ActiveIslands).ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar16 == pFVar1) break;
      uVar11 = *(uint *)pFVar16;
      uVar10 = 0;
      if ((int)uVar11 < (this->IslandPool).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        pFVar13 = (FNDCIsland *)(*pcVar6)();
        return pFVar13;
      }
      pFVar17 = (FNDCIsland *)
                ((this->IslandPool).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x60);
      local_148._s_0.Z = (double)CONCAT44(uVar19,uVar18);
      local_188._s_0.X = dVar3;
      local_188._s_0.Y = dVar7;
      local_188._s_0.Z = dVar22;
      local_168._s_0.X = dVar20;
      local_168._s_0.Y = dVar24;
      local_168._s_0.Z = dVar23;
      local_148._0_4_ = uVar25;
      local_148._4_4_ = uVar26;
      local_148._8_4_ = uVar27;
      local_148._12_4_ = uVar28;
      bVar9 = FNDCIsland::TryGrow(pFVar17,(TVector<double> *)&local_148._s_0,
                                  (TVector<double> *)&local_168._s_0,
                                  (TVector<double> *)&local_188._s_0);
      if (bVar9) {
        return pFVar17;
      }
      pFVar16 = pFVar16 + 4;
    }
  }
  local_128._s_0.Z = (double)CONCAT44(uVar19,uVar18);
  local_128._0_4_ = uVar25;
  local_128._4_4_ = uVar26;
  local_128._8_4_ = uVar27;
  local_128._12_4_ = uVar28;
  uVar11 = ActivateNewIsland(this,(TVector<double> *)&local_128._s_0);
  if (uVar11 == 0xffffffff) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<220773903268577542>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Islands.cpp"
                       ,0x106,"NewIslandIndex != INDEX_NONE");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNDCIsland *)(*pcVar6)();
      return pFVar13;
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar11 < (this->IslandPool).ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNDCIsland *)(*pcVar6)();
      return pFVar13;
    }
    pFVar13 = (FNDCIsland *)
              ((this->IslandPool).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x60);
    if (pFVar13 != (FNDCIsland *)0x0) {
      local_108._s_0.Z = (double)CONCAT44(uVar19,uVar18);
      local_108._0_4_ = uVar25;
      local_108._4_4_ = uVar26;
      local_108._8_4_ = uVar27;
      local_108._12_4_ = uVar28;
      FNDCIsland::OnAcquired(pFVar13,(TVector<double> *)&local_108._s_0);
    }
  }
  return pFVar13;
}

// GetPrivateStaticClass @ 1491083c0

UClass * __cdecl UNiagaraDataChannelHandler_Islands::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataChannelHandler_Islands",
               &Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.InnerSingleton,
               StaticRegisterNativesUNiagaraDataChannelHandler_Islands,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataChannelHandler_Islands>,
               InternalVTableHelperCtorCaller<UNiagaraDataChannelHandler_Islands>,local_res8,
               UNiagaraDataChannelHandler::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataChannelHandler_Islands.InnerSingleton;
}

// Init @ 149113f80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Islands::Init
          (UNiagaraDataChannelHandler_Islands *this,UNiagaraDataChannel *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNDCIsland,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  UNiagaraDataChannel_Islands *this_01;
  uint uVar10;
  longlong lVar11;
  UNiagaraDataChannel *local_res8;
  undefined1 local_res10 [8];
  
  if ((param_1 == (UNiagaraDataChannel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InChannel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelHandler.cpp"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  plVar9 = (longlong *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1,local_res10);
  this->_padding_ = *plVar9;
  this_01 = CastChecked<UNiagaraDataChannel_Islands,UNiagaraDataChannel_const_>(param_1);
  if (this_01 != (UNiagaraDataChannel_Islands *)0x0) {
    UNiagaraDataChannel_Islands::AsyncLoadSystems(this_01);
    uVar3 = this_01->IslandPoolSize;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &(this->ActiveIslands).ArrayMax;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&(this->ActiveIslands).AllocatorInstance,(this->ActiveIslands).ArrayNum,
                 piVar1);
    }
    pTVar2 = &this->FreeIslands;
    piVar1 = &(this->FreeIslands).ArrayMax;
    if ((this->FreeIslands).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&pTVar2->AllocatorInstance,(this->FreeIslands).ArrayNum,piVar1);
    }
    this_00 = &this->IslandPool;
    iVar8 = (this->IslandPool).ArrayNum;
    if (iVar8 < (int)uVar3) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x60,8,uVar3 - iVar8,&this_00->AllocatorInstance,
                         &(this->IslandPool).ArrayNum,&(this->IslandPool).ArrayMax);
      DefaultConstructItems<FNDCIsland,int>
                ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x60,uVar3 - iVar8);
    }
    else if ((int)uVar3 < iVar8) {
      uVar10 = iVar8 - uVar3;
      if (((int)(uVar10 | uVar3) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar10 != 0) {
        TArray<FNDCIsland,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar3,uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,8,&this_00->AllocatorInstance,(this->IslandPool).ArrayNum,
                   &(this->IslandPool).ArrayMax);
      }
    }
    uVar10 = 0;
    if (0 < (int)uVar3) {
      lVar11 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->IslandPool).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FNDCIsland::Init((FNDCIsland *)((this_00->AllocatorInstance).Data + lVar11),this);
        iVar8 = (this->FreeIslands).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->FreeIslands).ArrayNum = iVar8 + 1;
        lVar11 = lVar11 + 0x60;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = uVar10;
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar3);
    }
  }
  return;
}

// StaticRegisterNativesUNiagaraDataChannelHandler_Islands @ 149139d00

void __cdecl
UNiagaraDataChannelHandler_Islands::StaticRegisterNativesUNiagaraDataChannelHandler_Islands(void)

{
  return;
}

// Tick @ 14913b280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataChannelHandler_Islands::Tick
          (UNiagaraDataChannelHandler_Islands *this,float param_1,ETickingGroup param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  UNiagaraComponent *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res8 [8];
  ETickingGroup local_res18 [4];
  
  *(ETickingGroup *)&this->_padding_ = param_2;
  local_res18[0] = param_2;
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar8 != (UObject *)0x0) {
    UNiagaraDataChannel_Islands::StaticClass();
  }
  for (iVar11 = 0; (-1 < iVar11 && (iVar11 < (this->ActiveIslands).ArrayNum)); iVar11 = iVar11 + 1)
  {
    uVar2 = *(uint *)((this->ActiveIslands).AllocatorInstance.Data + (longlong)iVar11 * 4);
    uVar6 = 0;
    if ((int)uVar2 < (this->IslandPool).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->IslandPool).AllocatorInstance.Data;
    lVar10 = (longlong)(int)uVar2 * 0x60;
    if (*(longlong *)(pFVar3 + lVar10 + 0x50) == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = FNiagaraDataChannelData::ConsumePublishRequests
                      (*(FNiagaraDataChannelData **)(pFVar3 + lVar10 + 0x50),
                       *(UNiagaraDataChannelHandler **)(pFVar3 + lVar10),local_res18);
    if (0 < iVar7) {
      puVar9 = *(undefined8 **)(pFVar3 + lVar10 + 0x40);
      iVar7 = *(int *)(pFVar3 + lVar10 + 0x48);
      puVar1 = puVar9 + iVar7;
      while( true ) {
        if (*(int *)(pFVar3 + lVar10 + 0x48) != iVar7) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar9 == puVar1) break;
        this_00 = (UNiagaraComponent *)*puVar9;
        bVar5 = UNiagaraComponent::IsComplete(this_00);
        if (bVar5) {
          (**(code **)(this_00->_padding_ + 0x2b8))(this_00,0);
        }
        puVar9 = puVar9 + 1;
      }
    }
  }
  return;
}

