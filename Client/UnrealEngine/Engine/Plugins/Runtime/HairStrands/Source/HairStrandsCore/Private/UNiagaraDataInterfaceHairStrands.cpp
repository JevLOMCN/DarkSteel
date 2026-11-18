// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 110

// StaticClass @ 14e0cb480

UClass * __cdecl UNiagaraDataInterfaceHairStrands::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfaceHairStrands",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceHairStrands,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceHairStrands>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceHairStrands>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton;
}

// UNiagaraDataInterfaceHairStrands @ 14e0d10d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceHairStrands * __thiscall
UNiagaraDataInterfaceHairStrands::UNiagaraDataInterfaceHairStrands
          (UNiagaraDataInterfaceHairStrands *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->DefaultSource).field0_0x0.DebugPtr = (UGroomAsset *)0x0;
  (this->SourceActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->SourceComponent).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UNiagaraDataInterfaceHairStrands @ 14e0d1110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNiagaraDataInterfaceHairStrands * __thiscall
UNiagaraDataInterfaceHairStrands::UNiagaraDataInterfaceHairStrands
          (UNiagaraDataInterfaceHairStrands *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  (this->DefaultSource).field0_0x0.DebugPtr = (UGroomAsset *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  (this->SourceActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->SourceComponent).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_res8);
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[9] = 0;
    puVar1[0xb] = 0;
    *puVar1 = &___7FNDIHairStrandsProxy__6B_;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceHairStrands @ 14e0d1650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::~UNiagaraDataInterfaceHairStrands
          (UNiagaraDataInterfaceHairStrands *this)

{
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 14e0d2d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  UObject *pUVar9;
  TMatrix<float> *pTVar10;
  undefined1 *puVar11;
  TRefCountPtr<FHairGroupInstance> TVar12;
  FHairGroupInstance *pFVar13;
  undefined1 auStackY_9c8 [32];
  undefined1 local_988 [8];
  undefined1 local_980 [8];
  FMemMark local_978;
  TRefCountPtr<FHairGroupInstance> local_950;
  TRefCountPtr<FHairGroupInstance> local_948;
  FRDGEventName local_940;
  code *local_928;
  undefined1 *local_920;
  TMatrix<float> local_918;
  TMatrix<float> local_8d8;
  TMatrix<float> local_898;
  TMatrix<float> local_858;
  FRDGBuilder local_818;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_9c8;
  puVar7 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_920 = local_988;
  local_928 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_928,puVar7);
  local_940.EventFormat = L"";
  local_940.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_978.Mem = (FMemStackBase *)(pFVar8 + 2);
  local_940.FormattedEventName.Data.ArrayNum = 0;
  local_940.FormattedEventName.Data.ArrayMax = 0;
  local_978.Top = (local_978.Mem)->Top;
  local_978.SavedChunk = *(FTaggedMemory **)(pFVar8 + 4);
  local_978.bPopped = false;
  local_978.NextTopmostMark = *(FMemMark **)(pFVar8 + 5);
  pFVar8[5] = (FTlsAutoCleanup)((longlong)local_980 + 8);
  *(int *)(pFVar8 + 6) = *(int *)(pFVar8 + 6) + 1;
  FRDGBuilder::FRDGBuilder(&local_818,param_1,&local_940,None,GMaxRHIShaderPlatform);
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 400));
  GetRefCountedHairGroupInstance((UGroomComponent *)local_980,(int)pUVar9);
  lVar3 = *(longlong *)((longlong)this + 0x430);
  if ((*(longlong *)(lVar3 + 0x78) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x158,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = *(FNiagaraDataBuffer **)(lVar3 + 0x78);
  if (GEnableProxyInstanceTransform == false) {
    pTVar10 = ComputeWorldTransform(&local_898,this,(TRefCountPtr<FHairGroupInstance> *)local_980);
    UE::Math::TMatrix<float>::Inverse(pTVar10,&local_918);
    InterpolateGroomGuides
              (&local_818,pFVar4,*(uint *)((longlong)this + 0x438),*(uint *)((longlong)this + 0x43c)
               ,*(FNDIHairStrandsBuffer **)((longlong)this + 0x178),
               (TRefCountPtr<FHairGroupInstance> *)local_980,*(uint *)((longlong)this + 0x170),
               &local_918);
  }
  else {
    local_950.Reference = *(FHairGroupInstance **)((longlong)this + 0x188);
    if (local_950.Reference != (FHairGroupInstance *)0x0) {
      LOCK();
      *(int *)&(local_950.Reference)->field_0x8 = *(int *)&(local_950.Reference)->field_0x8 + 1;
      UNLOCK();
    }
    pTVar10 = ComputeWorldTransform(&local_858,this,&local_950);
    UE::Math::TMatrix<float>::Inverse(pTVar10,&local_8d8);
    if (local_950.Reference != (FHairGroupInstance *)0x0) {
      puVar11 = &(local_950.Reference)->field_0x8;
      LOCK();
      iVar1 = *(int *)puVar11;
      *(int *)puVar11 = *(int *)puVar11 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        TVar12.Reference = local_950.Reference;
        if (puVar11 == (undefined1 *)0x0) {
          TVar12.Reference = (FHairGroupInstance *)0x0;
        }
        if (TVar12.Reference != (FHairGroupInstance *)0x0) {
          (*(code *)**(undefined8 **)TVar12.Reference)(TVar12.Reference,1);
        }
      }
    }
    pFVar13 = *(FHairGroupInstance **)((longlong)this + 0x188);
    uVar2 = *(uint *)((longlong)this + 0x170);
    puVar11 = &pFVar13->field_0x8;
    if (pFVar13 != (FHairGroupInstance *)0x0) {
      LOCK();
      *(int *)puVar11 = *(int *)puVar11 + 1;
      UNLOCK();
    }
    local_948.Reference = pFVar13;
    InterpolateGroomGuides
              (&local_818,pFVar4,*(uint *)((longlong)this + 0x438),*(uint *)((longlong)this + 0x43c)
               ,*(FNDIHairStrandsBuffer **)((longlong)this + 0x178),&local_948,uVar2,&local_8d8);
    if (pFVar13 != (FHairGroupInstance *)0x0) {
      LOCK();
      iVar1 = *(int *)puVar11;
      *(int *)puVar11 = *(int *)puVar11 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (puVar11 == (undefined1 *)0x0) {
          pFVar13 = (FHairGroupInstance *)0x0;
        }
        if (pFVar13 != (FHairGroupInstance *)0x0) {
          (*(code *)**(undefined8 **)pFVar13)(pFVar13,1);
        }
      }
    }
  }
  FRDGBuilder::Execute(&local_818);
  if (local_980 != (undefined1  [8])0x0) {
    puVar11 = (undefined1 *)((longlong)local_980 + 8);
    LOCK();
    iVar1 = *(int *)puVar11;
    *(int *)puVar11 = *(int *)puVar11 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (puVar11 == (undefined1 *)0x0) {
        local_980 = (undefined1  [8])0x0;
      }
      if (local_980 != (undefined1  [8])0x0) {
        (*(code *)**(undefined8 **)local_980)(local_980,1);
      }
    }
  }
  FRDGBuilder::~FRDGBuilder(&local_818);
  if (local_978.bPopped == false) {
    if (((local_978.Mem)->TopMark != (FMemMark *)(local_980 + 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_978.bPopped = true;
    (local_978.Mem)->NumMarks = (local_978.Mem)->NumMarks + -1;
    if (local_978.SavedChunk != (local_978.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_978.Mem,local_978.SavedChunk);
    }
    (local_978.Mem)->Top = local_978.Top;
    (local_978.Mem)->TopMark = local_978.NextTopmostMark;
  }
  return;
}

// AdvectNodeOrientation @ 14e0d4ed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::AdvectNodeOrientation
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// AdvectNodePosition @ 14e0d4ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::AdvectNodePosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// AttachNodeOrientation @ 14e0d4ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::AttachNodeOrientation
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// AttachNodePosition @ 14e0d4f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::AttachNodePosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// AttachNodeState @ 14e0d4f10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::AttachNodeState
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// BuildBoundingBox @ 14e0d9070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::BuildBoundingBox
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// BuildShaderParameters @ 14e0d90a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::BuildShaderParameters
          (UNiagaraDataInterfaceHairStrands *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDIHairStrandsLocal::FShaderParameters>::GetStructMetadata
                     ();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x240;
  return;
}

// CalculateTickGroup @ 14e0d9310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ETickingGroup __thiscall
UNiagaraDataInterfaceHairStrands::CalculateTickGroup
          (UNiagaraDataInterfaceHairStrands *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    return *(ETickingGroup *)((longlong)param_1 + 0x428);
  }
  return TG_PrePhysics;
}

// CanExecuteOnTarget @ 14e0d9460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::CanExecuteOnTarget
          (UNiagaraDataInterfaceHairStrands *this,ENiagaraSimTarget param_1)

{
  return param_1 == GPUComputeSim;
}

// ComputeAirDragForce @ 14e0d9c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeAirDragForce
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeEdgeDirection @ 14e0d9f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeEdgeDirection
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeEdgeLength @ 14e0d9f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeEdgeLength
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeEdgeRotation @ 14e0d9f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeEdgeRotation
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeLocalState @ 14e0d9fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeLocalState
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeMaterialFrame @ 14e0d9fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeMaterialFrame
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeNodeInertia @ 14e0d9fd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeNodeInertia
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeNodeMass @ 14e0d9fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeNodeMass
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeNodeOrientation @ 14e0d9ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeNodeOrientation
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeNodePosition @ 14e0da000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeNodePosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeRestOrientation @ 14e0da010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeRestOrientation
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ComputeRestPosition @ 14e0da020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ComputeRestPosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// CopyToInternal @ 14e0dbc60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::CopyToInternal
          (UNiagaraDataInterfaceHairStrands *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  AActor *pAVar2;
  UGroomAsset *pUVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  bVar4 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar4) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar5 = StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar2 = (this->SourceActor).field0_0x0.DebugPtr, pAVar2 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
      param_1[1]._padding_ = (longlong)(this->SourceActor).field0_0x0;
      param_1[1]._padding_ = (longlong)(this->SourceComponent).WeakPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 = (this->DefaultSource).field0_0x0.DebugPtr, pUVar3 != (UGroomAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      param_1[1]._padding_ = (longlong)(this->DefaultSource).field0_0x0;
      return true;
    }
    pFVar6 = GetTypeName<UNiagaraDataInterfaceHairStrands>(&local_28);
    pwVar7 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar6 = GetTypeName<UNiagaraDataInterfaceHairStrands>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// DestroyPerInstanceData @ 14e0e4be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData
          (UNiagaraDataInterfaceHairStrands *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *pFVar4;
  FCommandList *pFVar5;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [32];
  code *local_118 [2];
  undefined **local_108;
  longlong lStack_100;
  ulong64 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  longlong lStack_60;
  ulong64 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (*(longlong *)((longlong)param_1 + 0x178) != 0) {
    local_c0 = (undefined ***)0x0;
    local_e8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNDIHairStrandsData::Release'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNDIHairStrandsData::Release'::`5'::<lambda_1>,1,0>::
                _vftable_;
    lStack_d0 = *(longlong *)((longlong)param_1 + 0x178);
    pFVar4 = FRenderCommandList::GetInstanceTLS();
    if (pFVar4 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNDIHairStrandsData::Release_::__l5::TSTR_DeleteResource498>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
    }
    else {
      pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
      local_b8._0_8_ = local_e8[0];
      local_90 = local_c0;
      local_a8 = local_d8;
      lStack_a0 = lStack_d0;
      local_98 = local_c8;
      local_e8[0] = (code *)0x0;
      local_88 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FNDIHairStrandsData::Release'::__l5::TSTR_DeleteResource498>::Get
                         ();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_b8,pFVar6);
      uVar8 = (ulonglong)local_88;
      if (2 < uVar8) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_b8._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_b8 + 0x10);
          if (local_90 != (undefined ***)0x0) {
            pppuVar7 = local_90;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_b8);
      }
    }
    if (local_e8[0] != (code *)0x0) {
      pppuVar7 = &local_d8;
      if (local_c0 != (undefined ***)0x0) {
        pppuVar7 = local_c0;
      }
      (*(code *)(*pppuVar7)[2])();
    }
    *(undefined8 *)((longlong)param_1 + 0x178) = 0;
  }
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_f0 = (undefined ***)0x0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
               ::_vftable_;
  local_f8 = param_2->ID;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                 ::Call;
  lStack_100 = lVar1;
  pFVar4 = FRenderCommandList::GetInstanceTLS();
  if (pFVar4 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData887>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
  }
  else {
    pFVar5 = FRenderCommandList::GetRenderThread(pFVar4);
    local_78._0_8_ = local_118[0];
    local_50 = local_f0;
    local_68 = local_108;
    lStack_60 = lStack_100;
    local_58 = local_f8;
    local_118[0] = (code *)0x0;
    local_48 = 2;
    pFVar6 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData887>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar5,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_78,pFVar6);
    uVar8 = (ulonglong)local_48;
    if (2 < uVar8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar7 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar7 = local_50;
        }
        (*(code *)(*pppuVar7)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_78);
    }
  }
  if (local_118[0] != (code *)0x0) {
    pppuVar7 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar7 = local_f0;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return;
}

// Equals @ 14e0e5110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::Equals
          (UNiagaraDataInterfaceHairStrands *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar2) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceHairStrands_const_>(&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UNiagaraDataInterfaceHairStrands_const_>(&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    if ((AActor *)param_1[1]._padding_ == (this->SourceActor).field0_0x0.DebugPtr) {
      bVar2 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals<UGroomComponent,bool>
                        ((TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *)&param_1[1]._padding_,
                         &this->SourceComponent);
      if ((bVar2) &&
         ((UGroomAsset *)param_1[1]._padding_ == (this->DefaultSource).field0_0x0.DebugPtr)) {
        return true;
      }
    }
  }
  return false;
}

// EvalSkinnedPosition @ 14e0e5300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::EvalSkinnedPosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ExtractDatasAndResources @ 14e0e7590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ExtractDatasAndResources
          (UNiagaraDataInterfaceHairStrands *this,FNiagaraSystemInstance *param_1,
          FNDIHairStrandsInfo *param_2)

{
  TWeakObjectPtr<UGroomComponent,FWeakObjectPtr> *this_00;
  longlong lVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UGroomComponent *pUVar10;
  TArray<FHairGroupPlatformData,TSizedDefaultAllocator<32>_> *pTVar11;
  FHairStrandsRestResource *pFVar12;
  TTransform<double> *pTVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  ExtractSourceComponent(this,param_1);
  param_2->GroupIndex = -1;
  param_2->LODIndex = -1;
  this_00 = &this->SourceComponent;
  uVar16 = 0;
  param_2->NumControlPoints = 0;
  param_2->NumCurves = 0;
  *&(param_2->LocalToWorld).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(param_2->LocalToWorld).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(param_2->LocalToWorld).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(param_2->LocalToWorld).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(param_2->LocalToWorld).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(param_2->LocalToWorld).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  param_2->bHasValidResources = false;
  bVar7 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (((!bVar7) ||
      (bVar7 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0),
      bVar7)) || (param_1 == (FNiagaraSystemInstance *)0x0)) {
    if ((this->DefaultSource).field0_0x0.DebugPtr != (UGroomAsset *)0x0) {
      param_2->LODIndex = 0;
      param_2->NumControlPoints = 0;
      pTVar13 = &param_1->WorldTransform;
      param_2->GroupIndex = 0;
      if (param_1 == (FNiagaraSystemInstance *)0x0) {
        pTVar13 = &UE::Math::TTransform<double>::Identity;
      }
      dVar6 = (pTVar13->Rotation).XY.m128d_f64[1];
      (param_2->LocalToWorld).Rotation.XY.m128d_f64[0] = (pTVar13->Rotation).XY.m128d_f64[0];
      (param_2->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar6;
      dVar6 = (pTVar13->Rotation).ZW.m128d_f64[1];
      (param_2->LocalToWorld).Rotation.ZW.m128d_f64[0] = (pTVar13->Rotation).ZW.m128d_f64[0];
      (param_2->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar6;
      dVar6 = (pTVar13->Translation).XY.m128d_f64[1];
      (param_2->LocalToWorld).Translation.XY.m128d_f64[0] = (pTVar13->Translation).XY.m128d_f64[0];
      (param_2->LocalToWorld).Translation.XY.m128d_f64[1] = dVar6;
      dVar6 = (pTVar13->Translation).ZW.m128d_f64[1];
      (param_2->LocalToWorld).Translation.ZW.m128d_f64[0] = (pTVar13->Translation).ZW.m128d_f64[0];
      (param_2->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar6;
      dVar6 = (pTVar13->Scale3D).XY.m128d_f64[1];
      (param_2->LocalToWorld).Scale3D.XY.m128d_f64[0] = (pTVar13->Scale3D).XY.m128d_f64[0];
      (param_2->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar6;
      dVar6 = (pTVar13->Scale3D).ZW.m128d_f64[1];
      (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[0] = (pTVar13->Scale3D).ZW.m128d_f64[0];
      (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar6;
      return;
    }
  }
  else {
    pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar8 = *(int *)&pUVar9[0x24].field_0x18;
    uVar17 = uVar16;
    if (0 < iVar8) {
      do {
        pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        uVar15 = (uint)uVar16;
        uVar14 = 0;
        if ((int)uVar15 < *(int *)&pUVar9[0x24].field_0x18) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar1 = *(longlong *)(*(longlong *)&pUVar9[0x24].field_0x10 + uVar17 * 8);
        if (lVar1 != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x648);
          pTVar3 = *(TReferenceControllerBase<1> **)(lVar1 + 0x650);
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          if (lVar2 != 0) {
            if (*(longlong *)(lVar2 + 0x30) == 0) {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4531953176097587110>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                 ,0x5a,"IsValid()");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((*(longlong *)(lVar2 + 0x30) == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (*(ulong64 *)(*(longlong *)(lVar2 + 0x30) + 0x120) == param_1->ID) {
              param_2->GroupIndex = uVar15;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar3);
              break;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 1;
      } while ((longlong)uVar17 < (longlong)iVar8);
    }
    if ((-1 < param_2->GroupIndex) &&
       (pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr),
       param_2->GroupIndex < *(int *)&pUVar9[0x24].field_0x18)) {
      pUVar10 = (UGroomComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar8 = UGroomComponent::GetForcedLOD(pUVar10);
      param_2->LODIndex = iVar8;
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      dVar6 = *(double *)&pUVar9[0xc].field_0x18;
      (param_2->LocalToWorld).Rotation.XY.m128d_f64[0] = *(double *)&pUVar9[0xc].field_0x10;
      (param_2->LocalToWorld).Rotation.XY.m128d_f64[1] = dVar6;
      dVar6 = *(double *)(pUVar9 + 0xd);
      (param_2->LocalToWorld).Rotation.ZW.m128d_f64[0] = *(double *)&pUVar9[0xc].field_0x20;
      (param_2->LocalToWorld).Rotation.ZW.m128d_f64[1] = dVar6;
      dVar6 = *(double *)&pUVar9[0xd].field_0x10;
      (param_2->LocalToWorld).Translation.XY.m128d_f64[0] = *(double *)&pUVar9[0xd].field_0x8;
      (param_2->LocalToWorld).Translation.XY.m128d_f64[1] = dVar6;
      dVar6 = *(double *)&pUVar9[0xd].field_0x20;
      (param_2->LocalToWorld).Translation.ZW.m128d_f64[0] = *(double *)&pUVar9[0xd].field_0x18;
      (param_2->LocalToWorld).Translation.ZW.m128d_f64[1] = dVar6;
      dVar6 = *(double *)&pUVar9[0xe].field_0x8;
      (param_2->LocalToWorld).Scale3D.XY.m128d_f64[0] = *(double *)(pUVar9 + 0xe);
      (param_2->LocalToWorld).Scale3D.XY.m128d_f64[1] = dVar6;
      dVar6 = *(double *)&pUVar9[0xe].field_0x18;
      (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar9[0xe].field_0x10;
      (param_2->LocalToWorld).Scale3D.ZW.m128d_f64[1] = dVar6;
      pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (*(longlong *)(pUVar9 + 0x24) != 0) {
        pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pTVar11 = UGroomAsset::GetHairGroupsPlatformData(*(UGroomAsset **)(pUVar9 + 0x24));
        if ((-1 < param_2->GroupIndex) && (param_2->GroupIndex < pTVar11->ArrayNum)) {
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pTVar11 = UGroomAsset::GetHairGroupsPlatformData(*(UGroomAsset **)(pUVar9 + 0x24));
          uVar14 = param_2->GroupIndex;
          uVar15 = 0;
          if ((int)uVar14 < pTVar11->ArrayNum) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (pTVar11->AllocatorInstance).Data;
          param_2->NumControlPoints = *(uint *)(pFVar4 + (longlong)(int)uVar14 * 2000 + 0xc);
          param_2->NumCurves = *(uint *)(pFVar4 + (longlong)(int)uVar14 * 2000 + 8);
          pUVar10 = (UGroomComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          pFVar12 = UGroomComponent::GetGuideStrandsRestResource(pUVar10,param_2->GroupIndex);
          param_2->bHasValidResources = pFVar12 != (FHairStrandsRestResource *)0x0;
        }
      }
    }
  }
  return;
}

// ExtractSourceComponent @ 14e0e7960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ExtractSourceComponent
          (UNiagaraDataInterfaceHairStrands *this,FNiagaraSystemInstance *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined1 *puVar5;
  UObject *pUVar6;
  longlong lVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  UClass *pUVar12;
  USceneComponent *this_00;
  AActor *pAVar13;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar14;
  USceneComponent *pUVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res20;
  undefined4 uStack_ac;
  undefined8 local_a8;
  UObject *local_a0;
  UClass *local_98;
  UObject *local_90;
  USceneComponent *local_88;
  UObject *local_80;
  UObject *local_78;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar17 = 0;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_a8 = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_a8);
  (this->SourceComponent).WeakPtr = local_res20;
  if ((this->SourceActor).field0_0x0.DebugPtr != (AActor *)0x0) {
    pUVar12 = Z_Construct_UClass_AGroomActor_NoRegister();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)&this->SourceActor,pUVar12);
    if ((bVar9) && (pAVar13 = (this->SourceActor).field0_0x0.DebugPtr, pAVar13 != (AActor *)0x0)) {
      local_a0 = (UObject *)pAVar13[1]._padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_a0);
      }
      FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_a0);
      return;
    }
    pAVar13 = (this->SourceActor).field0_0x0.DebugPtr;
    pcVar4 = *(code **)(pAVar13->_padding_ + 0x738);
    local_98 = Z_Construct_UClass_UGroomComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    local_90 = (UObject *)(*pcVar4)(pAVar13,&local_98);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_90 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_90);
    }
    FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_90);
    return;
  }
  if ((param_1 != (FNiagaraSystemInstance *)0x0) &&
     (this_00 = (USceneComponent *)FWeakObjectPtr::Get(&(param_1->AttachComponent).WeakPtr),
     pUVar15 = this_00, this_00 != (USceneComponent *)0x0)) {
    do {
      pUVar12 = Z_Construct_UClass_UGroomComponent_NoRegister();
      iVar3 = (int)pUVar12->_padding_;
      if ((iVar3 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
         ((((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar12->_padding_ && (pUVar15 != (USceneComponent *)0x0)) &&
          (lVar7._0_4_ = pUVar15[2].ClientAttachedChildren.ArrayNum,
          lVar7._4_4_ = pUVar15[2].ClientAttachedChildren.ArrayMax, lVar7 != 0)))) {
        local_88 = pUVar15;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_88);
        break;
      }
      pUVar15 = (pUVar15->AttachParent).field0_0x0.DebugPtr;
    } while (pUVar15 != (USceneComponent *)0x0);
    bVar9 = FWeakObjectPtr::IsValid(&(this->SourceComponent).WeakPtr);
    if (!bVar9) {
      pUVar12 = Z_Construct_UClass_UGroomComponent_NoRegister();
      local_80 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar12);
      if (local_80 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_80);
        }
        FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_80);
        return;
      }
      pAVar13 = USceneComponent::GetAttachmentRootActor(this_00);
      if (pAVar13 != (AActor *)0x0) {
        pTVar14 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            (&pAVar13->OwnedComponents);
        uVar10 = 1;
        iVar19 = 0;
        TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pTVar14->Elements).field_0x10;
        iVar3 = *(int *)&(pTVar14->Elements).field_0x28;
        iVar11 = iVar17;
        if (iVar3 != 0) {
          puVar21 = *(uint **)&(pTVar14->Elements).field_0x20;
          if (puVar21 == (uint *)0x0) {
            puVar21 = (uint *)TStack_68.Array;
          }
          uVar18 = *puVar21;
          iVar17 = 0;
          iVar19 = 0;
          while (uVar18 == 0) {
            iVar17 = iVar17 + 1;
            iVar19 = iVar19 + 0x20;
            iVar11 = iVar3;
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14e0e7bed;
            uVar18 = puVar21[iVar17];
          }
          uVar10 = ~(uVar18 - 1) & uVar18;
          uVar1 = (ulonglong)uVar10 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar11 = (int)lVar7 + -1 + iVar19;
          if (iVar3 < iVar11) {
            iVar11 = iVar3;
          }
        }
LAB_14e0e7bed:
        uVar18 = *(uint *)&(pTVar14->Elements).field_0x28;
        puVar2 = &(pTVar14->Elements).field_0x10;
        uVar16 = uVar18 & 0xffffffe0;
        TStack_68._padding_ = CONCAT44(uVar10,iVar17);
        TStack_68.CurrentBitIndex = iVar11;
        TStack_68.UnvisitedBitMask = 0xffffffff;
        iVar17 = (int)uVar18 >> 5;
        TStack_68._28_4_ = iVar11;
        TStack_68.BaseBitIndex = iVar19;
        uStack_48 = CONCAT44(uStack_ac,
                             *(int *)&(pTVar14->Elements).field_0x8 -
                             *(int *)&(pTVar14->Elements).field_0x34);
        local_70 = pTVar14;
        if ((((int)uVar18 < 0) || (*(int *)&(pTVar14->Elements).field_0x28 < (int)uVar18)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = *(uint *)&(pTVar14->Elements).field_0x28;
        if (uVar18 != uVar10) {
          puVar5 = *(undefined1 **)&(pTVar14->Elements).field_0x20;
          puVar20 = puVar2;
          if (puVar5 != (undefined1 *)0x0) {
            puVar20 = puVar5;
          }
          uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar17 * 4);
          while (uVar18 == 0) {
            iVar17 = iVar17 + 1;
            uVar16 = uVar16 + 0x20;
            uVar18 = uVar10;
            if ((int)(((int)(uVar10 - 1) >> 0x1f & 0x1fU) + (uVar10 - 1)) >> 5 < iVar17)
            goto LAB_14e0e7cf0;
            uVar18 = *(uint *)(puVar20 + (longlong)iVar17 * 4);
          }
          uVar1 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
          lVar7 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uVar18 = (uVar16 - 1) + (int)lVar7;
          if ((int)uVar10 < (int)uVar18) {
            uVar18 = uVar10;
          }
        }
LAB_14e0e7cf0:
        while( true ) {
          pTVar8 = local_70;
          if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
              (int)uStack_48) {
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (((TStack_68.CurrentBitIndex == uVar18) &&
              (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
             (pTVar8 == pTVar14)) break;
          pUVar6 = *(UObject **)
                    (*(longlong *)&pTVar8->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
          if (pUVar6 != (UObject *)0x0) {
            pUVar12 = Z_Construct_UClass_UGroomComponent_NoRegister();
            iVar17 = (int)pUVar12->_padding_;
            if (((iVar17 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar17 * 8) ==
                 &pUVar12->_padding_)) && (*(longlong *)(pUVar6 + 0x24) != 0)) {
              local_78 = pUVar6;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              FWeakObjectPtr::operator=(&(this->SourceComponent).WeakPtr,(FObjectPtr)&local_78);
              return;
            }
          }
          TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
        }
        return;
      }
    }
  }
  return;
}

// GetAirDrag @ 14e0e8b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetAirDrag
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->AirDrag;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetAirVelocity @ 14e0e8ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetAirVelocity
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->AirVelocity).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->AirVelocity).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->AirVelocity).field0_0x0._s_0.Z;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// GetBendDamping @ 14e0e9050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetBendDamping
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->BendDamping;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetBendScale @ 14e0e90d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetBendScale
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetBendStiffness @ 14e0e90e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetBendStiffness
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->BendStiffness;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetBoundingBox @ 14e0e9750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetBoundingBox
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetCollisionRadius @ 14e0e9760

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetCollisionRadius
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->CollisionRadius;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetGravityPreloading @ 14e0e9cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetGravityPreloading
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->GravityPreloading;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetGravityVector @ 14e0e9d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetGravityVector
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->GravityVector).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->GravityVector).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->GravityVector).field0_0x0._s_0.Z;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// GetGridDimension @ 14e0e9e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetGridDimension
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->GridDimension).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->GridDimension).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->GridDimension).field0_0x0._s_0.Z;
      pfVar3 = pfVar3 + local_20[0];
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// GetIterationCount @ 14e0e9f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetIterationCount
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->IterationCount;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetKineticFriction @ 14e0e9ff0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetKineticFriction
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->KineticFriction;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetNumStrands @ 14e0ea080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetNumStrands
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->NumStrands;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetPointPosition @ 14e0ea720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetPointPosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14e0ea8b0

UClass * __cdecl UNiagaraDataInterfaceHairStrands::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/HairStrandsCore",L"NiagaraDataInterfaceHairStrands",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceHairStrands,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceHairStrands>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceHairStrands>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceHairStrands.InnerSingleton;
}

// GetProjectBend @ 14e0eaaf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetProjectBend
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)(local_18.Ptr)->ProjectBend;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetProjectCollision @ 14e0eab70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetProjectCollision
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)(local_18.Ptr)->ProjectCollision;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetProjectStretch @ 14e0eabf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetProjectStretch
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)(local_18.Ptr)->ProjectStretch;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetRadiusScale @ 14e0eac70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetRadiusScale
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetSampleState @ 14e0eac80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetSampleState
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetSimCacheRendererAttributes @ 14e0eacb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> * __thiscall
UNiagaraDataInterfaceHairStrands::GetSimCacheRendererAttributes
          (UNiagaraDataInterfaceHairStrands *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FName *pFVar6;
  longlong lVar7;
  int iVar8;
  FName local_res10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar3 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UNiagaraEmitter_NoRegister();
    iVar8 = (int)pUVar4->_padding_;
    if ((iVar8 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar8 * 8) ==
        &pUVar4->_padding_)) {
      pFVar5 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)param_1);
      ::FString::ConcatFC(&local_28,pFVar5,L".");
      ::FString::ConcatFF(&local_38,&local_28,&FNiagaraConstants::ParticleAttributeNamespaceString);
      ::FString::ConcatFC(&local_48,&local_38,L".");
      ::FString::ConcatFC(&local_58,&local_48,L"NodePosition");
      if (local_58.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_58.Data.ArrayNum + -1;
      }
      pFVar6 = ::FName::FName(&local_res10,iVar8,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar1 = *pFVar6;
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      lVar7 = (longlong)iVar8;
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(FName *)(pFVar2 + lVar7 * 0xc) = FVar1;
      iVar8 = FNiagaraTypeDefinitionHandle::Register
                        ((FNiagaraTypeDefinitionHandle *)(pFVar2 + lVar7 * 0xc + 8),
                         &FNiagaraTypeDefinition::Vec3Def);
      *(int *)(pFVar2 + lVar7 * 0xc + 8) = iVar8;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      pFVar5 = UNiagaraEmitterBase::GetUniqueEmitterName((UNiagaraEmitterBase *)param_1);
      ::FString::ConcatFC(&local_48,pFVar5,L".");
      ::FString::ConcatFF(&local_38,&local_48,&FNiagaraConstants::ParticleAttributeNamespaceString);
      ::FString::ConcatFC(&local_28,&local_38,L".");
      ::FString::ConcatFC(&local_58,&local_28,L"RestPosition");
      if (local_58.Data.ArrayNum != 0) {
        iVar3 = local_58.Data.ArrayNum + -1;
      }
      pFVar6 = ::FName::FName(&local_res10,iVar3,(wchar_t *)local_58.Data.AllocatorInstance.Data,
                              FNAME_Add);
      FVar1 = *pFVar6;
      iVar3 = __return_storage_ptr__->ArrayNum;
      if (iVar3 == __return_storage_ptr__->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      lVar7 = (longlong)iVar3;
      __return_storage_ptr__->ArrayNum = iVar3 + 1;
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      *(FName *)(pFVar2 + lVar7 * 0xc) = FVar1;
      iVar3 = FNiagaraTypeDefinitionHandle::Register
                        ((FNiagaraTypeDefinitionHandle *)(pFVar2 + lVar7 * 0xc + 8),
                         &FNiagaraTypeDefinition::Vec3Def);
      *(int *)(pFVar2 + lVar7 * 0xc + 8) = iVar3;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetSolveBend @ 14e0eb420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetSolveBend
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)(local_18.Ptr)->SolveBend;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetSolveCollision @ 14e0eb4a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetSolveCollision
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)(local_18.Ptr)->SolveCollision;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetSolveStretch @ 14e0eb520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetSolveStretch
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)(local_18.Ptr)->SolveStretch;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStaticFriction @ 14e0eb5a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStaticFriction
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->StaticFriction;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStrandSize @ 14e0ebe60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStrandSize
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->StrandsSize;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStrandsDensity @ 14e0ebee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStrandsDensity
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->StrandsDensity;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStrandsSmoothing @ 14e0ebf60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStrandsSmoothing
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->StrandsSmoothing;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStrandsThickness @ 14e0ebfe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStrandsThickness
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->StrandsThickness;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStrandsViscosity @ 14e0ec060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStrandsViscosity
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->StrandsViscosity;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStretchDamping @ 14e0ec0e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStretchDamping
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->StretchDamping;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetStretchScale @ 14e0ec160

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStretchScale
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetStretchStiffness @ 14e0ec170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetStretchStiffness
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (local_18.Ptr)->StretchStiffness;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetSubSteps @ 14e0ec9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetSubSteps
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(local_18.Ptr)->SubSteps;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// GetThicknessScale @ 14e0eca50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetThicknessScale
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// GetVMExternalFunction @ 14e0ed090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetVMExternalFunction
          (UNiagaraDataInterfaceHairStrands *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 local_7c8 [8];
  FDelegateAllocation local_7c0;
  undefined1 local_7b0 [8];
  FDelegateAllocation local_7a8;
  undefined1 local_798 [8];
  FDelegateAllocation local_790;
  undefined1 local_780 [8];
  FDelegateAllocation local_778;
  undefined1 local_768 [8];
  FDelegateAllocation local_760;
  undefined1 local_750 [8];
  FDelegateAllocation local_748;
  undefined1 local_738 [8];
  FDelegateAllocation local_730;
  undefined1 local_720 [8];
  FDelegateAllocation local_718;
  undefined1 local_708 [8];
  FDelegateAllocation local_700;
  undefined1 local_6f0 [8];
  FDelegateAllocation local_6e8;
  undefined1 local_6d8 [8];
  FDelegateAllocation local_6d0;
  undefined1 local_6c0 [8];
  FDelegateAllocation local_6b8;
  undefined1 local_6a8 [8];
  FDelegateAllocation local_6a0;
  undefined1 local_690 [8];
  FDelegateAllocation local_688;
  undefined1 local_678 [8];
  FDelegateAllocation local_670;
  undefined1 local_660 [8];
  FDelegateAllocation local_658;
  undefined1 local_648 [8];
  FDelegateAllocation local_640;
  undefined1 local_630 [8];
  FDelegateAllocation local_628;
  undefined1 local_618 [8];
  FDelegateAllocation local_610;
  undefined1 local_600 [8];
  FDelegateAllocation local_5f8;
  undefined1 local_5e8 [8];
  FDelegateAllocation local_5e0;
  undefined1 local_5d0 [8];
  FDelegateAllocation local_5c8;
  undefined1 local_5b8 [8];
  FDelegateAllocation local_5b0;
  undefined1 local_5a0 [8];
  FDelegateAllocation local_598;
  undefined1 local_588 [8];
  FDelegateAllocation local_580;
  undefined1 local_570 [8];
  FDelegateAllocation local_568;
  FDestructionSentinel local_558;
  FDestructionSentinel local_540;
  FDestructionSentinel local_528;
  FDestructionSentinel local_510;
  FDestructionSentinel local_4f8;
  FDestructionSentinel local_4e0;
  FDestructionSentinel local_4c8;
  FDestructionSentinel local_4b0;
  FDestructionSentinel local_498;
  FDestructionSentinel local_480;
  FDestructionSentinel local_468;
  FDestructionSentinel local_450;
  FDestructionSentinel local_438;
  FDestructionSentinel local_420;
  FDestructionSentinel local_408;
  FDestructionSentinel local_3f0;
  FDestructionSentinel local_3d8;
  FDestructionSentinel local_3c0;
  FDestructionSentinel local_3a8;
  FDestructionSentinel local_390;
  FDestructionSentinel local_378;
  FDestructionSentinel local_360;
  FDestructionSentinel local_348;
  FDelegateAllocation *local_330;
  FDestructionSentinel local_328;
  FDelegateAllocation *local_310;
  FDestructionSentinel local_308;
  FDelegateAllocation *local_2f0;
  FDestructionSentinel local_2e8;
  FDelegateAllocation *local_2d0;
  FDestructionSentinel local_2c8;
  FDelegateAllocation *local_2b0;
  FDestructionSentinel local_2a8;
  FDelegateAllocation *local_290;
  FDestructionSentinel local_288;
  FDelegateAllocation *local_270;
  FDestructionSentinel local_268;
  FDelegateAllocation *local_250;
  FDestructionSentinel local_248;
  FDelegateAllocation *local_230;
  FDestructionSentinel local_228;
  FDelegateAllocation *local_210;
  FDestructionSentinel local_208;
  FDelegateAllocation *local_1f0;
  FDestructionSentinel local_1e8;
  FDelegateAllocation *local_1d0;
  FDestructionSentinel local_1c8;
  FDelegateAllocation *local_1b0;
  FDestructionSentinel local_1a8;
  FDelegateAllocation *local_190;
  FDestructionSentinel local_188;
  FDelegateAllocation *local_170;
  FDestructionSentinel local_168;
  FDelegateAllocation *local_150;
  FDestructionSentinel local_148;
  FDelegateAllocation *local_130;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FDestructionSentinel local_108;
  FDelegateAllocation *local_f0;
  FDestructionSentinel local_e8;
  FDelegateAllocation *local_d0;
  FDestructionSentinel local_c8;
  FDelegateAllocation *local_b0;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  FDestructionSentinel local_88;
  FDelegateAllocation *local_70;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIHairStrandsLocal::GetNumStrandsName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x92b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_7c8 = (undefined1  [8])0x0;
    local_7c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_7c0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c8,
               (FWriteAccessScope *)&local_348);
    local_330 = &local_7c0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_7c0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetNumStrandsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_348.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7c8,
               (FWriteAccessScope *)&local_558);
    if ((local_7c0.DelegateSize != 0) &&
       (local_7c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_7c0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_7c0,0,0,0x10);
      local_7c0.DelegateSize = 0;
    }
    if (local_558.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_558.Accessor,&local_558);
    }
    if (local_7c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_7c0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_7c8);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStrandSizeName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x930,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_7b0 = (undefined1  [8])0x0;
    local_7a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_7a8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7b0,
               (FWriteAccessScope *)&local_328);
    local_310 = &local_7a8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_7a8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandSizeBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_328.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_328.Accessor,&local_328);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_7b0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_7b0,
               (FWriteAccessScope *)&local_540);
    if ((local_7a8.DelegateSize != 0) &&
       (local_7a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_7a8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_7a8,0,0,0x10);
      local_7a8.DelegateSize = 0;
    }
    if (local_540.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_540.Accessor,&local_540);
    }
    if (local_7a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_7a8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_7b0);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetSubStepsName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x935,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_798 = (undefined1  [8])0x0;
    local_790.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_790.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_798,
               (FWriteAccessScope *)&local_308);
    local_2f0 = &local_790;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_790);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSubStepsBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_308.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_308.Accessor,&local_308);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_798);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_798,
               (FWriteAccessScope *)&local_528);
    if ((local_790.DelegateSize != 0) &&
       (local_790.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_790.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_790,0,0,0x10);
      local_790.DelegateSize = 0;
    }
    if (local_528.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_528.Accessor,&local_528);
    }
    if (local_790.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_790.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_798);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetIterationCountName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x93a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_780 = (undefined1  [8])0x0;
    local_778.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_778.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_780,
               (FWriteAccessScope *)&local_2e8);
    local_2d0 = &local_778;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_778);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetIterationCountBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_2e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e8.Accessor,&local_2e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_780);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_780,
               (FWriteAccessScope *)&local_510);
    if ((local_778.DelegateSize != 0) &&
       (local_778.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_778.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_778,0,0,0x10);
      local_778.DelegateSize = 0;
    }
    if (local_510.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_510.Accessor,&local_510);
    }
    if (local_778.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_778.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_780);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetGravityVectorName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x93f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_768 = (undefined1  [8])0x0;
    local_760.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_760.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
               (FWriteAccessScope *)&local_2c8);
    local_2b0 = &local_760;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_760);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityVectorBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_2c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c8.Accessor,&local_2c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_768);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
               (FWriteAccessScope *)&local_4f8);
    if ((local_760.DelegateSize != 0) &&
       (local_760.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_760.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_760,0,0,0x10);
      local_760.DelegateSize = 0;
    }
    if (local_4f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
    }
    if (local_760.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_760.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_768);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetGravityPreloadingName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x944,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_750 = (undefined1  [8])0x0;
    local_748.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_748.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_750,
               (FWriteAccessScope *)&local_2a8);
    local_290 = &local_748;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_748);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGravityPreloadingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_2a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_750);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_750,
               (FWriteAccessScope *)&local_4e0);
    if ((local_748.DelegateSize != 0) &&
       (local_748.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_748.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_748,0,0,0x10);
      local_748.DelegateSize = 0;
    }
    if (local_4e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
    }
    if (local_748.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_748.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_750);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetAirDragName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x949,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_738 = (undefined1  [8])0x0;
    local_730.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_730.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_738,
               (FWriteAccessScope *)&local_288);
    local_270 = &local_730;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_730);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirDragBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_288.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_288.Accessor,&local_288);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_738);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_738,
               (FWriteAccessScope *)&local_4c8);
    if ((local_730.DelegateSize != 0) &&
       (local_730.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_730.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_730,0,0,0x10);
      local_730.DelegateSize = 0;
    }
    if (local_4c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4c8.Accessor,&local_4c8);
    }
    if (local_730.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_730.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_738);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetAirVelocityName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x94e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_720 = (undefined1  [8])0x0;
    local_718.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_718.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_720,
               (FWriteAccessScope *)&local_268);
    local_250 = &local_718;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_718);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetAirVelocityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_268.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_720);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_720,
               (FWriteAccessScope *)&local_4b0);
    if ((local_718.DelegateSize != 0) &&
       (local_718.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_718.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_718,0,0,0x10);
      local_718.DelegateSize = 0;
    }
    if (local_4b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4b0.Accessor,&local_4b0);
    }
    if (local_718.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_718.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_720);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetSolveBendName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x953,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_708 = (undefined1  [8])0x0;
    local_700.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_700.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_708,
               (FWriteAccessScope *)&local_248);
    local_230 = &local_700;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_700);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_248.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_248.Accessor,&local_248);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_708);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_708,
               (FWriteAccessScope *)&local_498);
    if ((local_700.DelegateSize != 0) &&
       (local_700.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_700.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_700,0,0,0x10);
      local_700.DelegateSize = 0;
    }
    if (local_498.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_498.Accessor,&local_498);
    }
    if (local_700.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_700.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_708);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetProjectBendName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x958,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_6f0 = (undefined1  [8])0x0;
    local_6e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_6e8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6f0,
               (FWriteAccessScope *)&local_228);
    local_210 = &local_6e8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_6e8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectBendBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_228.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_228.Accessor,&local_228);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6f0,
               (FWriteAccessScope *)&local_480);
    if ((local_6e8.DelegateSize != 0) &&
       (local_6e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_6e8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_6e8,0,0,0x10);
      local_6e8.DelegateSize = 0;
    }
    if (local_480.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_480.Accessor,&local_480);
    }
    if (local_6e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_6e8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6f0);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetBendDampingName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x95d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_6d8 = (undefined1  [8])0x0;
    local_6d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_6d0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6d8,
               (FWriteAccessScope *)&local_208);
    local_1f0 = &local_6d0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_6d0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_208.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_208.Accessor,&local_208);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6d8,
               (FWriteAccessScope *)&local_468);
    if ((local_6d0.DelegateSize != 0) &&
       (local_6d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_6d0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_6d0,0,0,0x10);
      local_6d0.DelegateSize = 0;
    }
    if (local_468.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_468.Accessor,&local_468);
    }
    if (local_6d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_6d0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6d8);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetBendStiffnessName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x962,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_6c0 = (undefined1  [8])0x0;
    local_6b8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_6b8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c0,
               (FWriteAccessScope *)&local_1e8);
    local_1d0 = &local_6b8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_6b8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_1e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e8.Accessor,&local_1e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6c0,
               (FWriteAccessScope *)&local_450);
    if ((local_6b8.DelegateSize != 0) &&
       (local_6b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_6b8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_6b8,0,0,0x10);
      local_6b8.DelegateSize = 0;
    }
    if (local_450.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
    }
    if (local_6b8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_6b8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6c0);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetBendScaleName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x967,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_6a8 = (undefined1  [8])0x0;
    local_6a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_6a0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a8,
               (FWriteAccessScope *)&local_1c8);
    local_1b0 = &local_6a0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_6a0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetBendScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_1c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a8,
               (FWriteAccessScope *)&local_438);
    if ((local_6a0.DelegateSize != 0) &&
       (local_6a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_6a0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_6a0,0,0,0x10);
      local_6a0.DelegateSize = 0;
    }
    if (local_438.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
    }
    if (local_6a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_6a0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_6a8);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetSolveStretchName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x96c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_690 = (undefined1  [8])0x0;
    local_688.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_688.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_690,
               (FWriteAccessScope *)&local_1a8);
    local_190 = &local_688;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_688);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_1a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1a8.Accessor,&local_1a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_690);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_690,
               (FWriteAccessScope *)&local_420);
    if ((local_688.DelegateSize != 0) &&
       (local_688.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_688.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_688,0,0,0x10);
      local_688.DelegateSize = 0;
    }
    if (local_420.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_420.Accessor,&local_420);
    }
    if (local_688.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_688.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_690);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetProjectStretchName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x971,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_678 = (undefined1  [8])0x0;
    local_670.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_670.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
               (FWriteAccessScope *)&local_188);
    local_170 = &local_670;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_670);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectStretchBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_188.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
               (FWriteAccessScope *)&local_408);
    if ((local_670.DelegateSize != 0) &&
       (local_670.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_670.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_670,0,0,0x10);
      local_670.DelegateSize = 0;
    }
    if (local_408.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_408.Accessor,&local_408);
    }
    if (local_670.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_670.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_678);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStretchDampingName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x976,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_660 = (undefined1  [8])0x0;
    local_658.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_658.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,
               (FWriteAccessScope *)&local_168);
    local_150 = &local_658;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_658);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchDampingBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_168.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_660);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_660,
               (FWriteAccessScope *)&local_3f0);
    if ((local_658.DelegateSize != 0) &&
       (local_658.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_658.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_658,0,0,0x10);
      local_658.DelegateSize = 0;
    }
    if (local_3f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3f0.Accessor,&local_3f0);
    }
    if (local_658.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_658.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_660);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStretchStiffnessName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x97b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_648 = (undefined1  [8])0x0;
    local_640.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_640.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
               (FWriteAccessScope *)&local_148);
    local_130 = &local_640;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_640);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchStiffnessBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_648);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_648,
               (FWriteAccessScope *)&local_3d8);
    if ((local_640.DelegateSize != 0) &&
       (local_640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_640.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_640,0,0,0x10);
      local_640.DelegateSize = 0;
    }
    if (local_3d8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3d8.Accessor,&local_3d8);
    }
    if (local_640.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_640.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_648);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStretchScaleName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x980,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_630 = (undefined1  [8])0x0;
    local_628.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_628.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_630,
               (FWriteAccessScope *)&local_128);
    local_110 = &local_628;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_628);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStretchScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_128.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_630);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_630,
               (FWriteAccessScope *)&local_3c0);
    if ((local_628.DelegateSize != 0) &&
       (local_628.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_628.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_628,0,0,0x10);
      local_628.DelegateSize = 0;
    }
    if (local_3c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3c0.Accessor,&local_3c0);
    }
    if (local_628.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_628.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_630);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetSolveCollisionName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x985,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_618 = (undefined1  [8])0x0;
    local_610.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_610.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_618,
               (FWriteAccessScope *)&local_108);
    local_f0 = &local_610;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_610);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetSolveCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_108.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_618);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_618,
               (FWriteAccessScope *)&local_3a8);
    if ((local_610.DelegateSize != 0) &&
       (local_610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_610.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_610,0,0,0x10);
      local_610.DelegateSize = 0;
    }
    if (local_3a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3a8.Accessor,&local_3a8);
    }
    if (local_610.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_610.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_618);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetProjectCollisionName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x98a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_600 = (undefined1  [8])0x0;
    local_5f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_5f8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
               (FWriteAccessScope *)&local_e8);
    local_d0 = &local_5f8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_5f8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetProjectCollisionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_600);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_600,
               (FWriteAccessScope *)&local_390);
    if ((local_5f8.DelegateSize != 0) &&
       (local_5f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_5f8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_5f8,0,0,0x10);
      local_5f8.DelegateSize = 0;
    }
    if (local_390.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_390.Accessor,&local_390);
    }
    if (local_5f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_5f8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_600);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStaticFrictionName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x98f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_5e8 = (undefined1  [8])0x0;
    local_5e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_5e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
               (FWriteAccessScope *)&local_c8);
    local_b0 = &local_5e0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_5e0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStaticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
               (FWriteAccessScope *)&local_378);
    if ((local_5e0.DelegateSize != 0) &&
       (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_5e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_5e0,0,0,0x10);
      local_5e0.DelegateSize = 0;
    }
    if (local_378.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_378.Accessor,&local_378);
    }
    if (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_5e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5e8);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetKineticFrictionName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x994,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_5d0 = (undefined1  [8])0x0;
    local_5c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_5c8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d0,
               (FWriteAccessScope *)&local_a8);
    local_90 = &local_5c8;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_5c8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetKineticFrictionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5d0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5d0,
               (FWriteAccessScope *)&local_360);
    if ((local_5c8.DelegateSize != 0) &&
       (local_5c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_5c8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_5c8,0,0,0x10);
      local_5c8.DelegateSize = 0;
    }
    if (local_360.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_360.Accessor,&local_360);
    }
    if (local_5c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_5c8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5d0);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStrandsViscosityName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x999,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_5b8 = (undefined1  [8])0x0;
    local_5b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_5b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5b8,
               (FWriteAccessScope *)&local_88);
    local_70 = &local_5b0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_5b0);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetStrandsViscosityBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5b8);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetGridDimensionName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x99e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_5a0 = (undefined1  [8])0x0;
    local_598.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_598.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5a0,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_598;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_598);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetGridDimensionBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_5a0);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetCollisionRadiusName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9a3,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_588 = (undefined1  [8])0x0;
    local_580.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_580.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_588,
               (FWriteAccessScope *)&local_48);
    local_30 = &local_580;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_580);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetCollisionRadiusBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_588);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_588);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetRadiusScaleName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9a8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_570 = (undefined1  [8])0x0;
    local_568.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_568.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_570,
               (FWriteAccessScope *)&local_28);
    local_10 = &local_568;
    puVar4 = UE::Core::Private::DelegateAllocate(0x20,&local_568);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseFunctorDelegateInstance___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy__V<lambda_1>__1__Bind_TUNiagaraDataInterfaceHairStrands_GetRadiusScaleBinder__SAXPEAVUNiagaraDataInterface__AEAV__TDelegate___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy_____Z___V__6B_
      ;
      puVar4[3] = this;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_570);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_570);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStrandsDensityName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9ad,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetStrandsDensityBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStrandsSmoothingName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9b2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetStrandsSmoothingBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetStrandsThicknessName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9b7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetStrandsThicknessBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetThicknessScaleName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9bc,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetThicknessScaleBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetWorldTransformName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9c1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetWorldTransformBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetWorldInverseName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetWorldInverseBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetPointPositionName) {
    if (((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9cb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetPointPositionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeNodePositionName) {
    if (((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9d0,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeNodePositionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeNodeOrientationName) {
    if (((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9d5,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeNodeOrientationBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeNodeMassName) {
    if (((param_1->InputParamLocations).ArrayNum != 3) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 3 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9da,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeNodeMassBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeNodeInertiaName) {
    if (((param_1->InputParamLocations).ArrayNum != 3) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 3 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9df,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeNodeInertiaBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeEdgeLengthName) {
    if (((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9e4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeEdgeLengthBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeEdgeRotationName) {
    if (((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9e9,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeEdgeRotationBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeRestPositionName) {
    if (((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9ee,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeRestPositionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeRestOrientationName) {
    if (((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9f3,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeRestOrientationBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeLocalStateName) {
    if (((param_1->InputParamLocations).ArrayNum != 8) || (param_1->NumOutputs != 7)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 8 && BindingInfo.GetNumOutputs() == 7",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9f8,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeLocalStateBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::AttachNodePositionName) {
    if (((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x9fd,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_AttachNodePositionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::AttachNodeOrientationName) {
    if (((param_1->InputParamLocations).ArrayNum != 5) || (param_1->NumOutputs != 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 5 && BindingInfo.GetNumOutputs() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa02,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_AttachNodeOrientationBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::AttachNodeStateName) {
    if (((param_1->InputParamLocations).ArrayNum != 8) || (param_1->NumOutputs != 7)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 8 && BindingInfo.GetNumOutputs() == 7",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa07,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_AttachNodeStateBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::UpdateNodeStateName) {
    if (((param_1->InputParamLocations).ArrayNum != 0xb) || (param_1->NumOutputs != 7)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 11 && BindingInfo.GetNumOutputs() == 7",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa0c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_UpdateNodeStateBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::UpdatePointPositionName) {
    if (((param_1->InputParamLocations).ArrayNum != 7) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 7 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa11,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_UpdatePointPositionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ResetPointPositionName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa16,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ResetPointPositionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::AdvectNodePositionName) {
    if (((param_1->InputParamLocations).ArrayNum != 0x10) || (param_1->NumOutputs != 6)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 16 && BindingInfo.GetNumOutputs() == 6",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa1b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_AdvectNodePositionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::AdvectNodeOrientationName) {
    if (((param_1->InputParamLocations).ArrayNum != 0x13) || (param_1->NumOutputs != 7)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 19 && BindingInfo.GetNumOutputs() == 7",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa20,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_AdvectNodeOrientationBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::UpdateLinearVelocityName) {
    if (((param_1->InputParamLocations).ArrayNum != 8) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 8 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa25,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_UpdateLinearVelocityBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::UpdateAngularVelocityName) {
    if (((param_1->InputParamLocations).ArrayNum != 10) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 10 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa2a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_UpdateAngularVelocityBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetBoundingBoxName) {
    if (((param_1->InputParamLocations).ArrayNum != 2) || (param_1->NumOutputs != 6)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 2 && BindingInfo.GetNumOutputs() == 6",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa2f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetBoundingBoxBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ResetBoundingBoxName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa34,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ResetBoundingBoxBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::BuildBoundingBoxName) {
    if (((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa39,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_BuildBoundingBoxBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SetupDistanceSpringMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 7) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 7 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa3e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SetupDistanceSpringMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SolveDistanceSpringMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 9) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 9 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa43,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SolveDistanceSpringMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ProjectDistanceSpringMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 7) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 7 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa48,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ProjectDistanceSpringMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SetupAngularSpringMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 5)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa4d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SetupAngularSpringMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SolveAngularSpringMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 0xd) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 13 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa52,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SolveAngularSpringMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ProjectAngularSpringMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 9) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 9 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa57,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ProjectAngularSpringMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SetupStretchRodMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 5)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa5c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SetupStretchRodMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SolveStretchRodMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 10) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 10 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SolveStretchRodMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ProjectStretchRodMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa66,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ProjectStretchRodMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SetupBendRodMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 6) || (param_1->NumOutputs != 5)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 6 && BindingInfo.GetNumOutputs() == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa6b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SetupBendRodMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SolveBendRodMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 0xe) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 14 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa70,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SolveBendRodMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ProjectBendRodMaterialName) {
    if (((param_1->InputParamLocations).ArrayNum != 10) || (param_1->NumOutputs != 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 10 && BindingInfo.GetNumOutputs() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa75,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ProjectBendRodMaterialBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SolveHardCollisionConstraintName) {
    if (((param_1->InputParamLocations).ArrayNum != 0xf) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 15 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa7a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SolveHardCollisionConstraintBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ProjectHardCollisionConstraintName) {
    if (((param_1->InputParamLocations).ArrayNum != 0xf) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 15 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa7f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ProjectHardCollisionConstraintBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SolveSoftCollisionConstraintName) {
    if (((param_1->InputParamLocations).ArrayNum != 0x15) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 21 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa84,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SolveSoftCollisionConstraintBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ProjectSoftCollisionConstraintName) {
    if (((param_1->InputParamLocations).ArrayNum != 0x10) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 16 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa89,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ProjectSoftCollisionConstraintBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::SetupSoftCollisionConstraintName) {
    if (((param_1->InputParamLocations).ArrayNum != 4) || (param_1->NumOutputs != 5)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 4 && BindingInfo.GetNumOutputs() == 5",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa8e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_SetupSoftCollisionConstraintBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeEdgeDirectionName) {
    if (((param_1->InputParamLocations).ArrayNum != 0x10) || (param_1->NumOutputs != 3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 16 && BindingInfo.GetNumOutputs() == 3",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa93,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeEdgeDirectionBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::UpdateMaterialFrameName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa98,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_UpdateMaterialFrameBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeMaterialFrameName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 4)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 4",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xa9d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeMaterialFrameBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::ComputeAirDragForceName) {
    if (((param_1->InputParamLocations).ArrayNum != 0xe) || (param_1->NumOutputs != 6)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 14 && BindingInfo.GetNumOutputs() == 6",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xaa2,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_ComputeAirDragForceBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::InitGridSamplesName) {
    if (((param_1->InputParamLocations).ArrayNum != 9) || (param_1->NumOutputs != 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 9 && BindingInfo.GetNumOutputs() == 8",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xaa7,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_InitGridSamplesBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::GetSampleStateName) {
    if (((param_1->InputParamLocations).ArrayNum != 0xf) || (param_1->NumOutputs != 6)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 15 && BindingInfo.GetNumOutputs() == 6",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xaac,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_GetSampleStateBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::NeedSimulationResetName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xab1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_NeedSimulationResetBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::HasGlobalInterpolationName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xab6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_HasGlobalInterpolationBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  else if (FVar1 == NDIHairStrandsLocal::NeedRestUpdateName) {
    if (((param_1->InputParamLocations).ArrayNum != 1) || (param_1->NumOutputs != 1)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BindingInfo.GetNumInputs() == 1 && BindingInfo.GetNumOutputs() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0xabb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TUNiagaraDataInterfaceHairStrands_NeedRestUpdateBinder::Bind
              ((UNiagaraDataInterface *)this,param_3);
  }
  return;
}

// GetWorldInverse @ 14e0f12f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetWorldInverse
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  TMatrix<double> *this_00;
  undefined1 auStack_148 [32];
  FUserPtrHandler<FNDIHairStrandsData> local_128;
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_128,param_1);
  this_00 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(local_128.Ptr)->WorldTransform,&local_98);
  UE::Math::TMatrix<double>::Inverse(this_00,&local_118);
  WriteTransform(&local_118,param_1);
  return;
}

// GetWorldTransform @ 14e0f1370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::GetWorldTransform
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  FUserPtrHandler<FNDIHairStrandsData> local_98;
  TMatrix<double> local_88;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_98,param_1);
  UE::Math::TTransform<double>::ToMatrixWithScale(&(local_98.Ptr)->WorldTransform,&local_88);
  WriteTransform(&local_88,param_1);
  return;
}

// HasGlobalInterpolation @ 14e0f1690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::HasGlobalInterpolation
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  int local_20 [2];
  FUserPtrHandler<FNDIHairStrandsData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIHairStrandsData>::FUserPtrHandler<FNDIHairStrandsData>
            (&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)(uint)(local_18.Ptr)->GlobalInterpolation;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// HasPreSimulateTick @ 14e0f1710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::HasPreSimulateTick(UNiagaraDataInterfaceHairStrands *this)

{
  return true;
}

// HasTickGroupPrereqs @ 14e0f1d70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::HasTickGroupPrereqs(UNiagaraDataInterfaceHairStrands *this)

{
  return true;
}

// InitGridSamples @ 14e0f2130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::InitGridSamples
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// InitPerInstanceData @ 14e0f2140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::InitPerInstanceData
          (UNiagaraDataInterfaceHairStrands *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  FNDIHairStrandsData *this_00;
  FNDIHairStrandsBuffer *pFVar5;
  TStaticArray<float,128,4294967295> *pTVar6;
  longlong lVar7;
  FNDIHairStrandsBuffer *pFVar8;
  FNDIHairStrandsInfo local_88;
  
  this_00 = FNDIHairStrandsData::FNDIHairStrandsData(param_1);
  if ((this_00 == (FNDIHairStrandsData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                         ,0x36a,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  pFVar8 = (FNDIHairStrandsBuffer *)0x0;
  this_00->HairStrandsBuffer = (FNDIHairStrandsBuffer *)0x0;
  if (this != (UNiagaraDataInterfaceHairStrands *)0x0) {
    local_88.LocalToWorld.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_88.LocalToWorld.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_88.LocalToWorld.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_88.LocalToWorld.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_88.LocalToWorld.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_88.LocalToWorld.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_88.GroupIndex = 0;
    local_88.LODIndex = 0;
    local_88.NumControlPoints = 0;
    local_88.NumCurves = 0;
    local_88.bHasValidResources = false;
    ExtractDatasAndResources(this,param_2,&local_88);
    FNDIHairStrandsData::Update(this_00,this,&local_88,0.0);
    pFVar5 = ::operator_new(0x2a0);
    if (pFVar5 != (FNDIHairStrandsBuffer *)0x0) {
      memset(pFVar5,0,0x2a0);
      FRenderResource::FRenderResource((FRenderResource *)pFVar5);
      pFVar5->bValidGeometryType = false;
      pFVar5->_padding_ = (longlong)&___7FNDIHairStrandsBuffer__6B_;
      (pFVar5->BoundingBoxBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (pFVar5->BoundingBoxBuffer).PixelFormat = PF_Unknown;
      (pFVar5->BoundingBoxBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (pFVar5->BoundingBoxBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (pFVar5->BoundingBoxBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (pFVar5->BoundingBoxBuffer).NumBytes = 0;
      (pFVar5->ParamsScaleBuffer).Buffer.Reference = (FRDGPooledBuffer *)0x0;
      (pFVar5->ParamsScaleBuffer).PixelFormat = PF_Unknown;
      (pFVar5->ParamsScaleBuffer).TransientRDGBuffer = (FRDGBuffer *)0x0;
      (pFVar5->ParamsScaleBuffer).TransientRDGSRV = (FRDGBufferSRV *)0x0;
      (pFVar5->ParamsScaleBuffer).TransientRDGUAV = (FRDGBufferUAV *)0x0;
      (pFVar5->ParamsScaleBuffer).NumBytes = 0;
      pFVar5->CurrentMeshLOD = -1;
      pFVar5->bShouldReset = false;
      pFVar5->ResetCount = 0;
      pFVar8 = pFVar5;
    }
    this_00->HairStrandsBuffer = pFVar8;
    lVar7 = 4;
    pFVar8->bNeedResouces = local_88.bHasValidResources;
    pTVar6 = &this_00->ParamsScale;
    pFVar5 = pFVar8;
    do {
      uVar2 = *(undefined8 *)(pTVar6->Elements + 2);
      *(undefined8 *)(pFVar5->ParamsScale).Elements = *(undefined8 *)pTVar6->Elements;
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 2) = uVar2;
      uVar2 = *(undefined8 *)(pTVar6->Elements + 6);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 4) = *(undefined8 *)(pTVar6->Elements + 4);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 6) = uVar2;
      uVar2 = *(undefined8 *)(pTVar6->Elements + 10);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 8) = *(undefined8 *)(pTVar6->Elements + 8);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 10) = uVar2;
      uVar2 = *(undefined8 *)(pTVar6->Elements + 0xe);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0xc) =
           *(undefined8 *)(pTVar6->Elements + 0xc);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0xe) = uVar2;
      uVar2 = *(undefined8 *)(pTVar6->Elements + 0x12);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x10) =
           *(undefined8 *)(pTVar6->Elements + 0x10);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x12) = uVar2;
      uVar2 = *(undefined8 *)(pTVar6->Elements + 0x16);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x14) =
           *(undefined8 *)(pTVar6->Elements + 0x14);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x16) = uVar2;
      uVar2 = *(undefined8 *)(pTVar6->Elements + 0x1a);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x18) =
           *(undefined8 *)(pTVar6->Elements + 0x18);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x1a) = uVar2;
      uVar2 = *(undefined8 *)(pTVar6->Elements + 0x1e);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x1c) =
           *(undefined8 *)(pTVar6->Elements + 0x1c);
      *(undefined8 *)((pFVar5->ParamsScale).Elements + 0x1e) = uVar2;
      lVar7 = lVar7 + -1;
      pTVar6 = (TStaticArray<float,128,4294967295> *)(pTVar6->Elements + 0x20);
      pFVar5 = (FNDIHairStrandsBuffer *)&pFVar5->ParamsScale;
    } while (lVar7 != 0);
    pFVar8->bValidGeometryType = false;
    BeginInitResource((FRenderResource *)this_00->HairStrandsBuffer,(FRenderCommandPipe *)0x0);
    this_00->ForceReset = true;
  }
  return true;
}

// IsComponentValid @ 14e0f3330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::IsComponentValid(UNiagaraDataInterfaceHairStrands *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->SourceComponent).WeakPtr);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->SourceComponent,(void *)0x0);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// NeedRestUpdate @ 14e0f3f40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::NeedRestUpdate
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// NeedSimulationReset @ 14e0f3f50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::NeedSimulationReset
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// PerInstanceDataSize @ 14e0f3f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
UNiagaraDataInterfaceHairStrands::PerInstanceDataSize(UNiagaraDataInterfaceHairStrands *this)

{
  return 0x430;
}

// PerInstanceTick @ 14e0f3fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceHairStrands::PerInstanceTick
          (UNiagaraDataInterfaceHairStrands *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  USkeletalMeshComponent *this_00;
  longlong lVar5;
  code *pcVar6;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  UObject *pUVar10;
  USceneComponent *this_01;
  AActor *pAVar11;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar12;
  UClass *pUVar13;
  USkeletalMesh *pUVar14;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> **ppTVar17;
  wchar_t *pwVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined1 *puVar24;
  uint *puVar25;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8 [4];
  int local_1d4;
  int local_1d0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_1c8;
  FName local_1c0;
  UNiagaraDataInterfaceHairStrands *local_1b8;
  FString local_1b0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_178;
  FNDIHairStrandsInfo local_168;
  undefined4 local_cc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  uint uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  TBitArray<FDefaultBitArrayAllocator> **ppTStack_a0;
  undefined1 local_98 [16];
  TBitArray<FDefaultBitArrayAllocator> *local_88 [3];
  TBitArray<FDefaultBitArrayAllocator> **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_168.LocalToWorld.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  iVar16 = 0;
  local_168.LocalToWorld.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  local_168.LocalToWorld.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  local_168.LocalToWorld.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  local_168.LocalToWorld.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_168.LocalToWorld.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_168.GroupIndex = 0;
  local_168.LODIndex = 0;
  local_168.NumControlPoints = 0;
  local_168.NumCurves = 0;
  local_168.bHasValidResources = false;
  local_1b8 = this;
  ExtractDatasAndResources(this,param_2,&local_168);
  bVar8 = TWeakObjectPtr<UGroomComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->SourceComponent,(void *)0x0);
  if (!bVar8) {
    pUVar10 = FWeakObjectPtr::Get(&(this->SourceComponent).WeakPtr);
    if (pUVar10[0x2b].field_0x18 == '\0') {
      iVar23 = 0;
      this_01 = (USceneComponent *)FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
      if ((this_01 != (USceneComponent *)0x0) &&
         (pAVar11 = USceneComponent::GetAttachmentRootActor(this_01), pAVar11 != (AActor *)0x0)) {
        pTVar12 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            (&pAVar11->OwnedComponents);
        iVar2 = *(int *)&(pTVar12->Elements).field_0x28;
        uStack_bc = 1;
        local_a8 = 0;
        puVar1 = &(pTVar12->Elements).field_0x10;
        iStack_ac = local_a8;
        if (iVar2 != 0) {
          puVar25 = *(uint **)&(pTVar12->Elements).field_0x20;
          if (puVar25 == (uint *)0x0) {
            puVar25 = (uint *)puVar1;
          }
          uVar22 = *puVar25;
          iVar23 = 0;
          local_a8 = 0;
          while (uVar22 == 0) {
            iVar23 = iVar23 + 1;
            local_a8 = local_a8 + 0x20;
            iStack_ac = iVar2;
            if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar23) goto LAB_14e0f412d;
            uVar22 = puVar25[iVar23];
          }
          uStack_bc = ~(uVar22 - 1) & uVar22;
          uVar20 = (ulonglong)uStack_bc * 2 + 1;
          lVar5 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_1d4 = (int)lVar5;
          iStack_ac = local_1d4 + -1 + local_a8;
          if (iVar2 < iStack_ac) {
            iStack_ac = iVar2;
          }
        }
LAB_14e0f412d:
        uVar22 = *(uint *)&(pTVar12->Elements).field_0x28;
        uStack_a4 = local_cc;
        uVar21 = uVar22 & 0xffffffe0;
        uStack_b0 = 0xffffffff;
        TStack_198._padding_ = CONCAT44(uStack_bc,iVar23);
        ppTStack_a0 = (TBitArray<FDefaultBitArrayAllocator> **)
                      CONCAT44(ppTStack_a0._4_4_,
                               *(int *)&(pTVar12->Elements).field_0x8 -
                               *(int *)&(pTVar12->Elements).field_0x34);
        iVar19 = (int)uVar22 >> 5;
        TStack_198._28_4_ = local_cc;
        TStack_198.BaseBitIndex = local_a8;
        TStack_198.UnvisitedBitMask = 0xffffffff;
        TStack_198.CurrentBitIndex = iStack_ac;
        ppTStack_178 = ppTStack_a0;
        local_1c8 = pTVar12;
        local_1a0 = pTVar12;
        TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        local_c8 = pTVar12;
        iStack_c0 = iVar23;
        local_b8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if ((((int)uVar22 < 0) || (iVar2 < (int)uVar22)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        pTVar7 = local_1c8;
        uVar3 = *(uint *)&(pTVar12->Elements).field_0x28;
        iVar23 = iVar16;
        if (uVar22 != uVar3) {
          puVar4 = *(undefined1 **)&(pTVar12->Elements).field_0x20;
          puVar24 = puVar1;
          if (puVar4 != (undefined1 *)0x0) {
            puVar24 = puVar4;
          }
          uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar19 * 4);
          while (uVar22 == 0) {
            iVar19 = iVar19 + 1;
            uVar21 = uVar21 + 0x20;
            uVar22 = uVar3;
            if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar19)
            goto LAB_14e0f4240;
            uVar22 = *(uint *)(puVar24 + (longlong)iVar19 * 4);
          }
          uVar20 = (ulonglong)(~(uVar22 - 1) & uVar22) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          local_1d0 = (int)lVar5;
          uVar22 = local_1d0 + -1 + uVar21;
          if ((int)uVar3 < (int)uVar22) {
            uVar22 = uVar3;
          }
        }
LAB_14e0f4240:
        while( true ) {
          pTVar12 = local_1a0;
          if (*(int *)&(local_1a0->Elements).field_0x8 - *(int *)&(local_1a0->Elements).field_0x34
              != (int)ppTStack_178) {
            local_1d8[0] = 0;
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d8);
          }
          if (((TStack_198.CurrentBitIndex == uVar22) &&
              (TStack_198.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (this = local_1b8, pTVar12 == pTVar7)) break;
          this_00 = *(USkeletalMeshComponent **)
                     (*(longlong *)&pTVar12->Elements + (longlong)TStack_198.CurrentBitIndex * 0x10)
          ;
          if (this_00 != (USkeletalMeshComponent *)0x0) {
            pUVar13 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            iVar16 = (int)pUVar13->_padding_;
            if (((iVar16 <= *(int *)(this_00->_padding_ + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar16 * 8)
                 == &pUVar13->_padding_)) &&
               (pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00),
               pUVar14 != (USkeletalMesh *)0x0)) {
              pUVar14 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
              local_1c0 = (FName)pUVar14->_padding_;
              ::FName::ToString(&local_1c0,&local_1b0);
              pwVar18 = L"";
              if (local_1b0.Data.ArrayNum == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = local_1b0.Data.ArrayNum + -1;
                pwVar18 = (wchar_t *)local_1b0.Data.AllocatorInstance.Data;
              }
              uVar21 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar18);
              iVar23 = iVar23 + uVar21;
              if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              }
            }
          }
          TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
        }
      }
      iVar16 = *(int *)((longlong)param_1 + 0x424);
      *(int *)((longlong)param_1 + 0x424) = iVar23;
      if (iVar23 == iVar16) {
        *(undefined1 *)((longlong)param_1 + 0x174) = 0;
        goto LAB_14e0f4494;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x174) = 1;
    local_b8 = (TBitArray<FDefaultBitArrayAllocator> *)
               &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::`8'::<lambda_1>,1,0>
                ::_vftable_;
    _uStack_b0 = *(undefined8 *)((longlong)param_1 + 0x178);
    local_c8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
               ::Call;
    ppTStack_a0 = (TBitArray<FDefaultBitArrayAllocator> **)0x0;
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceHairStrands::PerInstanceTick_::__l8::TSTR_FNiagaraDIDestroyInstanceData908>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_c8);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_88[2]._4_4_ = uStack_a4;
      local_88[2]._0_4_ = local_a8;
      local_98._0_8_ = local_c8;
      local_c8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                  *)0x0;
      local_70 = ppTStack_a0;
      local_88[0] = local_b8;
      local_88[1] = (TBitArray<FDefaultBitArrayAllocator> *)_uStack_b0;
      local_68 = 2;
      pFVar15 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::PerInstanceTick'::__l8::TSTR_FNiagaraDIDestroyInstanceData908>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_98,pFVar15);
      uVar20 = (ulonglong)local_68;
      if ((2 < uVar20) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar20] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
            local_98._0_8_ !=
            (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)0x0
           ) {
          ppTVar17 = local_88;
          if (local_70 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
            ppTVar17 = local_70;
          }
          (*(code *)((*ppTVar17)->AllocatorInstance).SecondaryData)();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar20])(local_98);
      }
    }
    if (local_c8 !=
        (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)0x0) {
      ppTVar17 = &local_b8;
      if (ppTStack_a0 != (TBitArray<FDefaultBitArrayAllocator> **)0x0) {
        ppTVar17 = ppTStack_a0;
      }
      (*(code *)((*ppTVar17)->AllocatorInstance).SecondaryData)();
    }
  }
LAB_14e0f4494:
  FNDIHairStrandsData::Update(param_1,this,&local_168,param_3);
  return false;
}

// PostInitProperties @ 14e0f4570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::PostInitProperties(UNiagaraDataInterfaceHairStrands *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowAnyVariable);
  }
  return;
}

// ProjectAngularSpringMaterial @ 14e0f4a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ProjectAngularSpringMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ProjectBendRodMaterial @ 14e0f4aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ProjectBendRodMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ProjectDistanceSpringMaterial @ 14e0f4ab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ProjectDistanceSpringMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ProjectHardCollisionConstraint @ 14e0f4ac0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ProjectHardCollisionConstraint
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ProjectSoftCollisionConstraint @ 14e0f4ad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ProjectSoftCollisionConstraint
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ProjectStretchRodMaterial @ 14e0f4ae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ProjectStretchRodMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ProvidePerInstanceDataForRenderThread @ 14e0f4af0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceHairStrands *this,void *param_1,void *param_2,ulong64 *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                       ,0xe3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 != (void *)0x0) && (param_1 != (void *)0x0)) {
    FNDIHairStrandsData::CopyDatas(param_1,param_2);
  }
  return;
}

// ResetBoundingBox @ 14e0f5ad0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ResetBoundingBox
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// ResetPointPosition @ 14e0f6370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::ResetPointPosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SetShaderParameters @ 14e0f65b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SetShaderParameters
          (UNiagaraDataInterfaceHairStrands *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  uchar *puVar1;
  FRDGBuilder *pFVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FNDIHairStrandsBuffer *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  bool bVar10;
  ulong64 uVar11;
  FNDIHairStrandsData *pFVar12;
  UObject *pUVar13;
  TRefCountPtr<FHairGroupInstance> TVar14;
  FHairGroupInstance *pFVar15;
  FHairGroupInstanceRDG *pFVar16;
  FShaderParametersMetadata *pFVar17;
  TMatrix<float> *pTVar18;
  TQuat<float> *pTVar19;
  FRDGBufferUAV *pFVar20;
  FRDGBufferSRV *pFVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  undefined1 auStack_4a8 [32];
  char local_488;
  char local_487;
  TRefCountPtr<FHairGroupInstance> local_480;
  ulonglong local_478;
  int local_470;
  int local_46c;
  undefined8 local_468;
  undefined1 local_460 [8];
  TRefCountPtr<FHairGroupInstance> local_458;
  TRefCountPtr<FHairGroupInstance> local_450;
  ulonglong local_448;
  FRDGBuilder *local_440;
  undefined8 local_438;
  int iStack_430;
  int iStack_42c;
  undefined8 local_428;
  undefined1 uStack_420;
  undefined1 uStack_41f;
  undefined1 uStack_41e;
  undefined1 uStack_41d;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined1 uStack_414;
  undefined1 uStack_413;
  undefined1 uStack_412;
  undefined1 uStack_411;
  FRDGBufferSRV *pFStack_410;
  FRDGBufferUAV *local_408;
  FRDGBufferSRV *pFStack_400;
  FRDGBufferSRV *local_3f8;
  FRDGBufferSRV *pFStack_3f0;
  FRDGBuffer *local_3e8;
  FRDGBuffer *pFStack_3e0;
  FRDGBuffer *local_3d8;
  FRDGBuffer *pFStack_3d0;
  FRDGBufferSRV *local_3c8;
  FRDGBufferSRV *pFStack_3c0;
  FRDGBufferSRV *local_3b8;
  FRDGBufferSRV *pFStack_3b0;
  FRDGBufferSRV *local_3a8;
  FRDGBufferSRV *pFStack_3a0;
  FRDGBufferSRV *local_398;
  TQuat<float> local_388;
  TQuat<float> local_378;
  TMatrix<float> local_368;
  TMatrix<float> local_328;
  TMatrix<float> local_2e8;
  TMatrix<float> local_2a8;
  TMatrix<float> local_268;
  TMatrix<float> local_228;
  FHairGroupInstanceRDG local_1e8;
  TMatrix<float> local_138;
  TMatrix<float> local_f8;
  TMatrix<float> local_b8;
  TMatrix<float> local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4a8;
  pFVar2 = param_1->GraphBuilder;
  local_440 = pFVar2;
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("DataInterfaceProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                          ,0x1c1,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = param_1->DataInterfaceProxy;
  uVar11 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar12 = TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
            ::Find((TMapBase<unsigned___int64,FNDIHairStrandsData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIHairStrandsData,0>_>
                    *)(pFVar3 + 1),uVar11);
  if (pFVar12 == (FNDIHairStrandsData *)0x0) {
    local_468 = 0;
    pFVar15 = (FHairGroupInstance *)0x0;
    local_480.Reference = (FHairGroupInstance *)0x0;
  }
  else {
    pUVar13 = FWeakObjectPtr::Get(&(pFVar12->HairGroupInstSource).WeakPtr);
    TVar14 = GetRefCountedHairGroupInstance((UGroomComponent *)local_460,(int)pUVar13);
                    /* WARNING: Load size is inaccurate */
    local_480.Reference = *TVar14.Reference;
    *(undefined8 *)TVar14.Reference = 0;
    pFVar15 = (FHairGroupInstance *)CONCAT44(local_460._4_4_,local_460._0_4_);
  }
  if (pFVar15 != (FHairGroupInstance *)0x0) {
    puVar22 = &pFVar15->field_0x8;
    LOCK();
    iVar23 = *(int *)puVar22;
    *(int *)puVar22 = *(int *)puVar22 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      if (puVar22 == (undefined1 *)0x0) {
        pFVar15 = (FHairGroupInstance *)0x0;
      }
      if (pFVar15 != (FHairGroupInstance *)0x0) {
        (*(code *)**(undefined8 **)pFVar15)(pFVar15,1);
      }
    }
  }
  pFVar16 = ::Convert(&local_1e8,pFVar2,&local_480);
  local_448._0_1_ = pFVar16->bIsValid;
  local_448._1_1_ = pFVar16->bIsRootValid;
  local_448._2_1_ = pFVar16->bIsDeformedValid;
  local_448._3_1_ = pFVar16->field_0x3;
  local_448._4_4_ = pFVar16->MeshLODIndex;
  iStack_430 = pFVar16->GeometryType;
  iStack_42c = pFVar16->BindingType;
  local_428._0_4_ = pFVar16->NumPoints;
  local_428._4_4_ = pFVar16->NumCurves;
  uVar7 = *(undefined8 *)((longlong)&(pFVar16->RestPositionOffsetValue).field0_0x0 + 4);
  pFStack_410 = pFVar16->RestPositionBuffer;
  _uStack_420 = (undefined4)*(undefined8 *)&pFVar16->SampleCount;
  uStack_41c = (undefined4)((ulonglong)*(undefined8 *)&pFVar16->SampleCount >> 0x20);
  local_408 = pFVar16->DeformedPositionBufferUAV;
  pFStack_400 = pFVar16->DeformedPositionOffsetSRV;
  uStack_418 = (undefined4)uVar7;
  _uStack_414 = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_3f8 = pFVar16->CurvesOffsetsBuffer;
  pFStack_3f0 = pFVar16->PointToCurveIndexBuffer;
  local_3e8 = pFVar16->DeformedPositionBuffer;
  pFStack_3e0 = pFVar16->DeformedPositionOffset;
  local_3d8 = pFVar16->PreviousDeformedPositionBuffer;
  pFStack_3d0 = pFVar16->PreviousDeformedPositionOffset;
  local_3b8 = pFVar16->RootBarycentricCoordinatesBuffer;
  pFStack_3b0 = pFVar16->RootToUniqueTriangleIndexBuffer;
  local_3c8 = pFVar16->RestTrianglePositionBuffer;
  pFStack_3c0 = pFVar16->DeformedTrianglePositionBuffer;
  local_3a8 = pFVar16->RestSamplePositionsBuffer;
  pFStack_3a0 = pFVar16->MeshSampleWeightsBuffer;
  local_398 = pFVar16->DeformedSamplePositionsBuffer;
  local_478 = local_448 >> 0x20;
  local_470 = iStack_430;
  if (((pFVar12 == (FNDIHairStrandsData *)0x0) ||
      (pFVar4 = pFVar12->HairStrandsBuffer, pFVar4 == (FNDIHairStrandsBuffer *)0x0)) ||
     ((int)pFVar4->_padding_ == -1)) {
    local_488 = '\0';
LAB_14e0f679a:
    local_487 = '\0';
  }
  else {
    local_488 = '\x01';
    if ((((char)local_448 == '\0') || (iStack_430 == 3)) ||
       (((pFVar4->ParamsScaleBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0 ||
        ((pFVar4->BoundingBoxBuffer).Buffer.Reference == (FRDGPooledBuffer *)0x0))))
    goto LAB_14e0f679a;
    local_487 = '\x01';
  }
  uVar24 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  local_438 = local_448;
  pFVar17 = TShaderParameterStructTypeInfo<NDIHairStrandsLocal::FShaderParameters>::
            GetStructMetadata();
  puVar5 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar17->Size + uVar24;
  if (local_488 != '\0') {
    if (local_487 != '\0') {
      if ((pFVar12 == (FNDIHairStrandsData *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ProxyData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\Niagara\\NiagaraDataInterfaceHairStrands.cpp"
                              ,0xdb6,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = pFVar12->HairStrandsBuffer;
      if (((local_438._1_1_ == '\0') || ((char)local_448 == '\0')) || (local_470 == 3)) {
        local_46c = 0;
      }
      else {
        local_46c = (pFVar12->GlobalInterpolation != false) + 1;
      }
      iVar23 = 0;
      if (((pFVar4->bShouldReset == false) && (pFVar4->bValidGeometryType != false)) &&
         (pFVar4->CurrentMeshLOD == (int)local_478)) {
        iVar23 = pFVar4->ResetCount + 1;
        if (GHairSimulationMaxDelay + 1 < iVar23) {
          iVar23 = GHairSimulationMaxDelay + 1;
        }
      }
      pFVar4->ResetCount = iVar23;
      local_460._0_4_ = ZEXT14(iVar23 <= GHairSimulationMaxDelay);
      if ((GHairSimulationRestUpdate == 0) &&
         ((local_460._0_4_ == 0 || (pFVar12->bSkinningTransfer == false)))) {
        local_468 = (ulonglong)local_468._4_4_ << 0x20;
      }
      else {
        local_468 = CONCAT44(local_468._4_4_,1);
      }
      bVar10 = pFVar12->LocalSimulation;
      pFVar4->bShouldReset = false;
      pFVar4->bValidGeometryType = true;
      pFVar4->CurrentMeshLOD = (int)local_478;
      local_138.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_138.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_138.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_138.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_138.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_138.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_138.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_138.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_138.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_138.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_138.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_138.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_138.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_138.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_138.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_138.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_f8.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
      local_f8.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
      local_f8.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
      local_f8.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
      local_f8.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
      local_f8.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
      local_f8.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
      local_f8.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
      local_f8.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
      local_f8.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
      local_f8.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
      local_f8.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
      local_f8.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
      local_f8.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
      local_f8.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
      local_f8.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
      local_478 = CONCAT44(local_478._4_4_,(uint)bVar10);
      if (GEnableProxyInstanceTransform == false) {
        pTVar18 = ComputeWorldTransform(&local_368,pFVar12,&local_480);
        local_138.M[0]._0_8_ = *(undefined8 *)pTVar18->M[0];
        local_138.M[0]._8_8_ = *(undefined8 *)(pTVar18->M[0] + 2);
        local_138.M[1]._0_8_ = *(undefined8 *)pTVar18->M[1];
        local_138.M[1]._8_8_ = *(undefined8 *)(pTVar18->M[1] + 2);
        local_138.M[2]._0_8_ = *(undefined8 *)pTVar18->M[2];
        local_138.M[2]._8_8_ = *(undefined8 *)(pTVar18->M[2] + 2);
        local_138.M[3]._0_8_ = *(undefined8 *)pTVar18->M[3];
        local_138.M[3]._8_8_ = *(undefined8 *)(pTVar18->M[3] + 2);
        pTVar18 = ComputeBoneTransform(&local_328,pFVar12,&local_480);
        local_f8.M[0]._0_8_ = *(undefined8 *)pTVar18->M[0];
        local_f8.M[0]._8_8_ = *(undefined8 *)(pTVar18->M[0] + 2);
        local_f8.M[1]._0_8_ = *(undefined8 *)pTVar18->M[1];
        local_f8.M[1]._8_8_ = *(undefined8 *)(pTVar18->M[1] + 2);
        local_f8.M[2]._0_8_ = *(undefined8 *)pTVar18->M[2];
        local_f8.M[2]._8_8_ = *(undefined8 *)(pTVar18->M[2] + 2);
        local_f8.M[3]._0_8_ = *(undefined8 *)pTVar18->M[3];
        local_f8.M[3]._8_8_ = *(undefined8 *)(pTVar18->M[3] + 2);
      }
      else {
        local_458.Reference = pFVar12->HairGroupInstance;
        if (local_458.Reference != (FHairGroupInstance *)0x0) {
          LOCK();
          *(int *)&(local_458.Reference)->field_0x8 = *(int *)&(local_458.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        pTVar18 = ComputeWorldTransform(&local_2e8,pFVar12,&local_458);
        local_138.M[0]._0_8_ = *(undefined8 *)pTVar18->M[0];
        local_138.M[0]._8_8_ = *(undefined8 *)(pTVar18->M[0] + 2);
        local_138.M[1]._0_8_ = *(undefined8 *)pTVar18->M[1];
        local_138.M[1]._8_8_ = *(undefined8 *)(pTVar18->M[1] + 2);
        local_138.M[2]._0_8_ = *(undefined8 *)pTVar18->M[2];
        local_138.M[2]._8_8_ = *(undefined8 *)(pTVar18->M[2] + 2);
        local_138.M[3]._0_8_ = *(undefined8 *)pTVar18->M[3];
        local_138.M[3]._8_8_ = *(undefined8 *)(pTVar18->M[3] + 2);
        if (local_458.Reference != (FHairGroupInstance *)0x0) {
          puVar22 = &(local_458.Reference)->field_0x8;
          LOCK();
          iVar23 = *(int *)puVar22;
          *(int *)puVar22 = *(int *)puVar22 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            TVar14.Reference = local_458.Reference;
            if (puVar22 == (undefined1 *)0x0) {
              TVar14.Reference = (FHairGroupInstance *)0x0;
            }
            if (TVar14.Reference != (FHairGroupInstance *)0x0) {
              (*(code *)**(undefined8 **)TVar14.Reference)(TVar14.Reference,1);
            }
          }
        }
        local_450.Reference = pFVar12->HairGroupInstance;
        if (local_450.Reference != (FHairGroupInstance *)0x0) {
          LOCK();
          *(int *)&(local_450.Reference)->field_0x8 = *(int *)&(local_450.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        pTVar18 = ComputeBoneTransform(&local_2a8,pFVar12,&local_450);
        local_f8.M[0]._0_8_ = *(undefined8 *)pTVar18->M[0];
        local_f8.M[0]._8_8_ = *(undefined8 *)(pTVar18->M[0] + 2);
        local_f8.M[1]._0_8_ = *(undefined8 *)pTVar18->M[1];
        local_f8.M[1]._8_8_ = *(undefined8 *)(pTVar18->M[1] + 2);
        local_f8.M[2]._0_8_ = *(undefined8 *)pTVar18->M[2];
        local_f8.M[2]._8_8_ = *(undefined8 *)(pTVar18->M[2] + 2);
        local_f8.M[3]._0_8_ = *(undefined8 *)pTVar18->M[3];
        local_f8.M[3]._8_8_ = *(undefined8 *)(pTVar18->M[3] + 2);
        if (local_450.Reference != (FHairGroupInstance *)0x0) {
          puVar22 = &(local_450.Reference)->field_0x8;
          LOCK();
          iVar23 = *(int *)puVar22;
          *(int *)puVar22 = *(int *)puVar22 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            TVar14.Reference = local_450.Reference;
            if (puVar22 == (undefined1 *)0x0) {
              TVar14.Reference = (FHairGroupInstance *)0x0;
            }
            if (TVar14.Reference != (FHairGroupInstance *)0x0) {
              (*(code *)**(undefined8 **)TVar14.Reference)(TVar14.Reference,1);
            }
          }
        }
      }
      bVar10 = UE::Math::TVector<float>::ContainsNaN(&pFVar12->BoneLinearVelocity);
      if (((((bVar10) ||
            (bVar10 = UE::Math::TVector<float>::ContainsNaN(&pFVar12->BoneAngularVelocity), bVar10))
           || (bVar10 = UE::Math::TVector<float>::ContainsNaN(&pFVar12->BoneLinearAcceleration),
              bVar10)) ||
          (bVar10 = UE::Math::TVector<float>::ContainsNaN(&pFVar12->BoneAngularAcceleration), bVar10
          )) && (4 < (byte)LogHairStrands._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      }
      if ((((local_438._2_1_ != '\0') && (local_470 != 3)) &&
          ((local_438._1_1_ == '\0' || ((char)local_448 == '\0')))) &&
         ((iStack_42c == 2 && (4 < (byte)LogHairStrands._0_1_)))) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
      }
      uVar7 = *(undefined8 *)&(pFVar4->BoundingBoxOffsets).field0_0x0;
      uVar8 = *(undefined8 *)((longlong)&(pFVar4->BoundingBoxOffsets).field0_0x0 + 8);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x40) = local_138.M[0]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x40) + 8) = local_138.M[0]._8_8_;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x1d0) = uVar7;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x1d0 + 8) = uVar8;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x50) = local_138.M[1]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x50) + 8) = local_138.M[1]._8_8_;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x60) = local_138.M[2]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x60) + 8) = local_138.M[2]._8_8_;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x70) = local_138.M[3]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x70) + 8) = local_138.M[3]._8_8_;
      pTVar18 = UE::Math::TMatrix<float>::Inverse(&local_138,&local_268);
      uVar7 = *(undefined8 *)(pTVar18->M[0] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x80) = *(undefined8 *)pTVar18->M[0];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x80 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pTVar18->M[1] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x90) = *(undefined8 *)pTVar18->M[1];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x90 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pTVar18->M[2] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xa0) = *(undefined8 *)pTVar18->M[2];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xa0 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pTVar18->M[3] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xb0) = *(undefined8 *)pTVar18->M[3];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xb0 + 8) = uVar7;
      local_b8.M[1][0] = local_138.M[1][0];
      local_b8.M[1][1] = local_138.M[1][1];
      local_b8.M[1][2] = local_138.M[1][2];
      local_b8.M[1][3] = local_138.M[1][3];
      local_b8.M[0][0] = local_138.M[0][0];
      local_b8.M[0][1] = local_138.M[0][1];
      local_b8.M[0][2] = local_138.M[0][2];
      local_b8.M[0][3] = local_138.M[0][3];
      local_b8.M[3][0] = local_138.M[3][0];
      local_b8.M[3][1] = local_138.M[3][1];
      local_b8.M[3][2] = local_138.M[3][2];
      local_b8.M[3][3] = local_138.M[3][3];
      local_b8.M[2][0] = local_138.M[2][0];
      local_b8.M[2][1] = local_138.M[2][1];
      local_b8.M[2][2] = local_138.M[2][2];
      local_b8.M[2][3] = local_138.M[2][3];
      UE::Math::TMatrix<float>::RemoveScaling(&local_b8,__real_322bcc77);
      pTVar19 = UE::Math::TMatrix<float>::ToQuat(&local_b8,&local_388);
      uVar7 = *(undefined8 *)&pTVar19->Z;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xc0) = *(undefined8 *)pTVar19;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xc0 + 8) = uVar7;
      *(int *)(puVar5 + (ulonglong)uVar24 + 0x160) = pFVar12->NumStrands;
      iVar23 = pFVar12->StrandsSize;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xd0) = local_f8.M[0]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xd0) + 8) = local_f8.M[0]._8_8_;
      *(int *)(puVar5 + (ulonglong)uVar24 + 0x164) = iVar23;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xe0) = local_f8.M[1]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xe0) + 8) = local_f8.M[1]._8_8_;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xf0) = local_f8.M[2]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xf0) + 8) = local_f8.M[2]._8_8_;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x100) = local_f8.M[3]._0_8_;
      *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x100) + 8) = local_f8.M[3]._8_8_;
      pTVar18 = UE::Math::TMatrix<float>::Inverse(&local_f8,&local_228);
      fVar9 = __real_322bcc77;
      uVar7 = *(undefined8 *)(pTVar18->M[0] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x110) = *(undefined8 *)pTVar18->M[0];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x110 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pTVar18->M[1] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x120) = *(undefined8 *)pTVar18->M[1];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x120 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pTVar18->M[2] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x130) = *(undefined8 *)pTVar18->M[2];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x130 + 8) = uVar7;
      uVar7 = *(undefined8 *)(pTVar18->M[3] + 2);
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x140) = *(undefined8 *)pTVar18->M[3];
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x140 + 8) = uVar7;
      local_78.M[1][0] = local_f8.M[1][0];
      local_78.M[1][1] = local_f8.M[1][1];
      local_78.M[1][2] = local_f8.M[1][2];
      local_78.M[1][3] = local_f8.M[1][3];
      local_78.M[0][0] = local_f8.M[0][0];
      local_78.M[0][1] = local_f8.M[0][1];
      local_78.M[0][2] = local_f8.M[0][2];
      local_78.M[0][3] = local_f8.M[0][3];
      local_78.M[3][0] = local_f8.M[3][0];
      local_78.M[3][1] = local_f8.M[3][1];
      local_78.M[3][2] = local_f8.M[3][2];
      local_78.M[3][3] = local_f8.M[3][3];
      local_78.M[2][0] = local_f8.M[2][0];
      local_78.M[2][1] = local_f8.M[2][1];
      local_78.M[2][2] = local_f8.M[2][2];
      local_78.M[2][3] = local_f8.M[2][3];
      UE::Math::TMatrix<float>::RemoveScaling(&local_78,fVar9);
      pTVar19 = UE::Math::TMatrix<float>::ToQuat(&local_78,&local_378);
      uVar7 = *(undefined8 *)&pTVar19->Z;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x150) = *(undefined8 *)pTVar19;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x150 + 8) = uVar7;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x200) =
           *(undefined8 *)&(pFVar12->BoneLinearVelocity).field0_0x0;
      *(float *)(puVar5 + (ulonglong)uVar24 + 0x208) =
           (pFVar12->BoneLinearVelocity).field0_0x0._s_0.Z;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x210) =
           *(undefined8 *)&(pFVar12->BoneAngularVelocity).field0_0x0;
      *(float *)(puVar5 + (ulonglong)uVar24 + 0x218) =
           (pFVar12->BoneAngularVelocity).field0_0x0._s_0.Z;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x220) =
           *(undefined8 *)&(pFVar12->BoneLinearAcceleration).field0_0x0;
      *(float *)(puVar5 + (ulonglong)uVar24 + 0x228) =
           (pFVar12->BoneLinearAcceleration).field0_0x0._s_0.Z;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x230) =
           *(undefined8 *)&(pFVar12->BoneAngularAcceleration).field0_0x0;
      *(float *)(puVar5 + (ulonglong)uVar24 + 0x238) =
           (pFVar12->BoneAngularAcceleration).field0_0x0._s_0.Z;
      *(undefined4 *)(puVar5 + (ulonglong)uVar24 + 0x1b0) = local_460._0_4_;
      *(int *)(puVar5 + (ulonglong)uVar24 + 0x168) = local_46c;
      *(undefined4 *)(puVar5 + (ulonglong)uVar24 + 0x1b4) = (undefined4)local_468;
      *(undefined4 *)(puVar5 + (ulonglong)uVar24 + 0x1b8) = (undefined4)local_478;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x170) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(puVar5 + (ulonglong)uVar24 + 0x178) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x180) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      *(float *)(puVar5 + (ulonglong)uVar24 + 0x188) =
           UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      *(ulonglong *)(puVar5 + (ulonglong)uVar24 + 400) = CONCAT44(uStack_418,uStack_41c);
      puVar1 = puVar5 + (ulonglong)uVar24 + 0x198;
      puVar1[0] = uStack_414;
      puVar1[1] = uStack_413;
      puVar1[2] = uStack_412;
      puVar1[3] = uStack_411;
      puVar1 = puVar5 + (ulonglong)uVar24 + 0x1bc;
      puVar1[0] = uStack_420;
      puVar1[1] = uStack_41f;
      puVar1[2] = uStack_41e;
      puVar1[3] = uStack_41d;
      bVar10 = UE::Groom::IsRBFLocalSpaceEnabled();
      *(uint *)(puVar5 + (ulonglong)uVar24 + 0x1c0) = (uint)bVar10;
      *(FRDGBufferUAV **)(puVar5 + uVar24) = local_408;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x10) = local_3f8;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 8) = pFStack_410;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1a0) = pFStack_400;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x18) = local_3c8;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x20) = pFStack_3c0;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1e0) = local_3a8;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1e8) = pFStack_3a0;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1f0) = local_398;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x28) = local_3b8;
      *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x30) = pFStack_3b0;
      pFVar20 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&pFVar4->BoundingBoxBuffer,local_440);
      *(FRDGBufferUAV **)(puVar5 + (ulonglong)uVar24 + 0x1a8) = pFVar20;
      pFVar21 = FNiagaraPooledRWBuffer::GetOrCreateSRV(&pFVar4->ParamsScaleBuffer,local_440);
      goto LAB_14e0f7237;
    }
    pFVar12->HairStrandsBuffer->bValidGeometryType = false;
  }
  uVar7 = _UNK_150631e08;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x1d0) = __xmm_00000003000000020000000100000000;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x1d0 + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x40) = UE::Math::TMatrix<float>::Identity.M[0]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x40) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x50) = UE::Math::TMatrix<float>::Identity.M[1]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x50) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x60) = UE::Math::TMatrix<float>::Identity.M[2]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x60) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x70) = UE::Math::TMatrix<float>::Identity.M[3]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x70) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x80) = UE::Math::TMatrix<float>::Identity.M[0]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x80) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x90) = UE::Math::TMatrix<float>::Identity.M[1]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x90) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xa0) = UE::Math::TMatrix<float>::Identity.M[2]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xa0) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xb0) = UE::Math::TMatrix<float>::Identity.M[3]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xb0) + 8) = uVar7;
  *(TQuat<float> *)(puVar5 + (ulonglong)uVar24 + 0xc0) = UE::Math::TQuat<float>::Identity;
  puVar1 = puVar5 + (ulonglong)uVar24 + 0x160;
  puVar1[0] = '\x01';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1 = puVar5 + (ulonglong)uVar24 + 0x164;
  puVar1[0] = '\x01';
  uVar7 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xd0) = UE::Math::TMatrix<float>::Identity.M[0]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xd0) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xe0) = UE::Math::TMatrix<float>::Identity.M[1]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xe0) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0xf0) = UE::Math::TMatrix<float>::Identity.M[2]._0_8_
  ;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0xf0) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x100) =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x100) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x110) =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x110) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x120) =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x120) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x130) =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x130) + 8) = uVar7;
  uVar7 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x140) =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((longlong)(puVar5 + (ulonglong)uVar24 + 0x140) + 8) = uVar7;
  *(TQuat<float> *)(puVar5 + (ulonglong)uVar24 + 0x150) = UE::Math::TQuat<float>::Identity;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x200) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar5 + (ulonglong)uVar24 + 0x208) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x210) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar5 + (ulonglong)uVar24 + 0x218) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x220) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar5 + (ulonglong)uVar24 + 0x228) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x230) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar5 + (ulonglong)uVar24 + 0x238) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  puVar1 = puVar5 + (ulonglong)uVar24 + 0x1b0;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  puVar1 = puVar5 + (ulonglong)uVar24 + 0x168;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1 = puVar5 + (ulonglong)uVar24 + 0x1b8;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x170) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar5 + (ulonglong)uVar24 + 0x178) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 0x180) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar5 + (ulonglong)uVar24 + 0x188) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)(puVar5 + (ulonglong)uVar24 + 400) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  *(float *)(puVar5 + (ulonglong)uVar24 + 0x198) =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  *(FRDGBufferUAV **)(puVar5 + uVar24) = local_408;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x10) = local_3f8;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 8) = pFStack_410;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1a0) = pFStack_400;
  puVar1 = puVar5 + (ulonglong)uVar24 + 0x1bc;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x18) = local_3c8;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x20) = pFStack_3c0;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1e0) = local_3a8;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1e8) = pFStack_3a0;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1f0) = local_398;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x28) = local_3b8;
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x30) = pFStack_3b0;
  pFVar20 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferUAV
                      (param_1->ComputeDispatchInterface,local_440,PF_R32_UINT);
  *(FRDGBufferUAV **)(puVar5 + (ulonglong)uVar24 + 0x1a8) = pFVar20;
  pFVar21 = FNiagaraGpuComputeDispatchInterface::GetEmptyBufferSRV
                      (param_1->ComputeDispatchInterface,local_440,PF_R32_FLOAT);
LAB_14e0f7237:
  *(FRDGBufferSRV **)(puVar5 + (ulonglong)uVar24 + 0x1f8) = pFVar21;
  if (local_480.Reference != (FHairGroupInstance *)0x0) {
    puVar22 = &(local_480.Reference)->field_0x8;
    LOCK();
    iVar23 = *(int *)puVar22;
    *(int *)puVar22 = *(int *)puVar22 + -1;
    UNLOCK();
    if (iVar23 == 1) {
      TVar14.Reference = local_480.Reference;
      if (puVar22 == (undefined1 *)0x0) {
        TVar14.Reference = (FHairGroupInstance *)0x0;
      }
      if (TVar14.Reference != (FHairGroupInstance *)0x0) {
        (*(code *)**(undefined8 **)TVar14.Reference)(TVar14.Reference,1);
      }
    }
  }
  return;
}

// SetupAngularSpringMaterial @ 14e0f7560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SetupAngularSpringMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SetupBendRodMaterial @ 14e0f7570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SetupBendRodMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SetupDistanceSpringMaterial @ 14e0f7580

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SetupDistanceSpringMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SetupSoftCollisionConstraint @ 14e0f7590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SetupSoftCollisionConstraint
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SetupStretchRodMaterial @ 14e0f75a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SetupStretchRodMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SimCachePostReadFrame @ 14e0f7640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame
          (UNiagaraDataInterfaceHairStrands *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  FName *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  double *pdVar14;
  FNDIHairStrandsData *pFVar15;
  bool bVar16;
  uint uVar17;
  FName *pFVar18;
  double *pdVar19;
  code **ppcVar20;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar21;
  FNDIHairStrandsData *pFVar22;
  code **ppcVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  FName *pFVar29;
  longlong lVar30;
  undefined1 auStack_9e8 [32];
  longlong local_9c8;
  longlong local_9c0;
  longlong local_9b8;
  longlong *local_9b0;
  TReferenceControllerBase<1> *local_9a8;
  FScriptContainerElement *local_9a0;
  FName local_998;
  FNiagaraTypeDefinitionHandle local_990 [2];
  void *local_988;
  undefined8 local_980;
  FName local_978;
  FNiagaraTypeDefinitionHandle local_970 [2];
  void *local_968;
  undefined8 local_960;
  FNDIHairStrandsData *local_958;
  longlong local_950;
  FScriptContainerElement *local_948;
  FName local_940;
  FName local_938 [2];
  double local_928 [134];
  longlong local_4f8;
  uint local_4f0;
  uint local_4ec;
  code *local_4e8 [2];
  code *local_4d8 [3];
  code **local_4c0;
  undefined1 local_4b8 [40];
  code **local_490;
  byte local_488;
  FNDIHairStrandsData local_478;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_9e8;
  local_958 = param_1;
  (**(code **)(this[-1]._padding_ + 0x2f8))(&this[-1]._padding_,param_1,param_2,0);
  pFVar18 = ::FName::FName(&local_940,"NodePosition");
  local_978 = *pFVar18;
  local_970[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_970,&FNiagaraTypeDefinition::Vec3Def);
  local_968 = (void *)0x0;
  local_960 = 0;
  pFVar18 = ::FName::FName(local_938,"RestPosition");
  local_998 = *pFVar18;
  local_990[0].RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(local_990,&FNiagaraTypeDefinition::Vec3Def);
  pFVar28 = (param_2->Emitters).AllocatorInstance.Data;
  iVar3 = (param_2->Emitters).ArrayNum;
  local_988 = (void *)0x0;
  local_980 = 0;
  local_9a0 = pFVar28;
  if ((iVar3 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_948 = pFVar28 + (longlong)iVar3 * 0x10;
  if (pFVar28 != local_948) {
    do {
      local_9a8 = *(TReferenceControllerBase<1> **)(pFVar28 + 8);
      lVar30 = *(longlong *)pFVar28;
      if (local_9a8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_9a8->SharedReferenceCount = (atomic<int>)((int)local_9a8->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((*(longlong *)(lVar30 + 0x10) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParticleDataSet",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                              ,0x39,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar30 = *(longlong *)(lVar30 + 0x10);
      local_950 = lVar30;
      if ((*(longlong *)(lVar30 + 8) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("CompiledData.Get() != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x169,L""), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar4 = *(longlong **)(lVar30 + 8);
      pFVar5 = (FName *)*plVar4;
      pFVar18 = (FName *)((longlong)pFVar5 + (longlong)(int)plVar4[1] * 0xc);
      for (pFVar29 = pFVar5; pFVar29 != pFVar18; pFVar29 = (FName *)&pFVar29[1].Number) {
        if ((*pFVar29 == local_978) &&
           (pFVar29[1].ComparisonIndex.Value == local_970[0].RegisteredTypeIndex)) {
          lVar30 = ((longlong)pFVar29 - (longlong)pFVar5) / 6 +
                   ((longlong)pFVar29 - (longlong)pFVar5 >> 0x3f);
          local_9b8 = (lVar30 >> 1) - (lVar30 >> 0x3f);
          goto LAB_14e0f7849;
        }
      }
      uVar27 = 0xffffffff;
      local_9b8 = 0xffffffff;
      if (pFVar5 != pFVar18) {
LAB_14e0f7849:
        uVar27 = (uint)local_9b8;
        pFVar29 = pFVar5;
        do {
          if ((*pFVar29 == local_998) &&
             (pFVar29[1].ComparisonIndex.Value == local_990[0].RegisteredTypeIndex)) {
            lVar30 = ((longlong)pFVar29 - (longlong)pFVar5) / 6 +
                     ((longlong)pFVar29 - (longlong)pFVar5 >> 0x3f);
            uVar24 = (int)(lVar30 >> 1) - (int)(lVar30 >> 0x3f);
            goto LAB_14e0f7871;
          }
          pFVar29 = (FName *)&pFVar29[1].Number;
        } while (pFVar29 != pFVar18);
      }
      uVar24 = 0xffffffff;
LAB_14e0f7871:
      local_9b0 = plVar4;
      if ((((-1 < (int)uVar27) && (iVar3 = (int)plVar4[3], (int)uVar27 < iVar3)) &&
          (-1 < (int)uVar24)) && ((int)uVar24 < iVar3)) {
        uVar17 = 0;
        if ((int)uVar27 < iVar3) {
          uVar17 = ~uVar27 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_9c8 = (longlong)(int)uVar27;
          local_9c0 = (longlong)iVar3;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar30 = (longlong)(int)uVar27 * 0x20;
        if (*(short *)(lVar30 + 8 + plVar4[2]) == 3) {
          uVar17 = 0;
          if ((int)uVar24 < (int)plVar4[3]) {
            uVar17 = ~uVar24 >> 0x1f;
          }
          if (uVar17 == 0) {
            local_9c8 = (longlong)(int)uVar24;
            local_9c0 = (longlong)(int)plVar4[3];
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          lVar26 = (longlong)(int)uVar24 * 0x20;
          if (*(short *)(local_9b0[2] + 8 + lVar26) == 3) {
            uVar17 = 0;
            if ((int)local_9b8 < (int)local_9b0[3]) {
              uVar17 = ~uVar27 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (local_9c8 = (longlong)(int)uVar27, local_9c0 = (longlong)(int)local_9b0[3],
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            plVar4 = local_9b0;
            uVar1 = *(ushort *)(local_9b0[2] + lVar30);
            uVar27 = 0;
            if ((int)uVar24 < (int)local_9b0[3]) {
              uVar27 = ~uVar24 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (local_9c8 = (longlong)(int)uVar24, local_9c0 = (longlong)(int)local_9b0[3],
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar2 = *(ushort *)(lVar26 + plVar4[2]);
            FNDIHairStrandsData::FNDIHairStrandsData(&local_478);
            FNDIHairStrandsData::CopyDatas(&local_478,local_958);
            lVar30 = 8;
            pdVar14 = local_928;
            pFVar15 = &local_478;
            do {
              pFVar22 = pFVar15;
              pdVar19 = pdVar14;
              dVar7 = (pFVar22->WorldTransform).Rotation.XY.m128d_f64[1];
              dVar8 = (pFVar22->WorldTransform).Rotation.ZW.m128d_f64[0];
              dVar9 = (pFVar22->WorldTransform).Rotation.ZW.m128d_f64[1];
              pFVar15 = (FNDIHairStrandsData *)&(pFVar22->BoneTransform).Translation;
              *pdVar19 = (pFVar22->WorldTransform).Rotation.XY.m128d_f64[0];
              pdVar19[1] = dVar7;
              dVar7 = (pFVar22->WorldTransform).Translation.XY.m128d_f64[0];
              dVar10 = (pFVar22->WorldTransform).Translation.XY.m128d_f64[1];
              pdVar19[2] = dVar8;
              pdVar19[3] = dVar9;
              dVar8 = (pFVar22->WorldTransform).Translation.ZW.m128d_f64[0];
              dVar9 = (pFVar22->WorldTransform).Translation.ZW.m128d_f64[1];
              pdVar19[4] = dVar7;
              pdVar19[5] = dVar10;
              dVar7 = (pFVar22->WorldTransform).Scale3D.XY.m128d_f64[0];
              dVar10 = (pFVar22->WorldTransform).Scale3D.XY.m128d_f64[1];
              pdVar19[6] = dVar8;
              pdVar19[7] = dVar9;
              dVar8 = (pFVar22->WorldTransform).Scale3D.ZW.m128d_f64[0];
              dVar9 = (pFVar22->WorldTransform).Scale3D.ZW.m128d_f64[1];
              pdVar19[8] = dVar7;
              pdVar19[9] = dVar10;
              dVar7 = (pFVar22->BoneTransform).Rotation.XY.m128d_f64[0];
              dVar10 = (pFVar22->BoneTransform).Rotation.XY.m128d_f64[1];
              pdVar19[10] = dVar8;
              pdVar19[0xb] = dVar9;
              dVar8 = (pFVar22->BoneTransform).Rotation.ZW.m128d_f64[0];
              dVar9 = (pFVar22->BoneTransform).Rotation.ZW.m128d_f64[1];
              pdVar19[0xc] = dVar7;
              pdVar19[0xd] = dVar10;
              pdVar19[0xe] = dVar8;
              pdVar19[0xf] = dVar9;
              lVar30 = lVar30 + -1;
              pdVar14 = pdVar19 + 0x10;
            } while (lVar30 != 0);
            dVar7 = (pFVar22->BoneTransform).Translation.XY.m128d_f64[1];
            dVar8 = (pFVar22->BoneTransform).Translation.ZW.m128d_f64[0];
            dVar9 = (pFVar22->BoneTransform).Translation.ZW.m128d_f64[1];
            local_4e8[0] = (code *)0x0;
            pdVar19[0x10] = (((VectorRegister4Double *)pFVar15)->XY).m128d_f64[0];
            pdVar19[0x11] = dVar7;
            local_4c0 = (code **)0x0;
            dVar7 = (pFVar22->BoneTransform).Scale3D.XY.m128d_f64[0];
            dVar10 = (pFVar22->BoneTransform).Scale3D.XY.m128d_f64[1];
            pdVar19[0x12] = dVar8;
            pdVar19[0x13] = dVar9;
            pdVar19[0x14] = dVar7;
            pdVar19[0x15] = dVar10;
            local_4f8 = local_950;
            local_4f0 = (uint)uVar1;
            local_4ec = (uint)uVar2;
            local_4c0 = FMemory::Malloc(0x450,0x10);
            lVar30 = 8;
            *local_4c0 = (code *)&UE::Core::Private::Function::
                                  TFunction_OwnedObject<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::`6'::<lambda_1>,1,1>
                                  ::_vftable_;
            ppcVar23 = local_4c0 + 2;
            pdVar14 = local_928;
            do {
              pdVar19 = pdVar14;
              ppcVar20 = ppcVar23;
              pcVar6 = (code *)pdVar19[1];
              pcVar11 = (code *)pdVar19[2];
              pcVar12 = (code *)pdVar19[3];
              *ppcVar20 = (code *)*pdVar19;
              ppcVar20[1] = pcVar6;
              pcVar6 = (code *)pdVar19[4];
              pcVar13 = (code *)pdVar19[5];
              ppcVar20[2] = pcVar11;
              ppcVar20[3] = pcVar12;
              pcVar11 = (code *)pdVar19[6];
              pcVar12 = (code *)pdVar19[7];
              ppcVar20[4] = pcVar6;
              ppcVar20[5] = pcVar13;
              pcVar6 = (code *)pdVar19[8];
              pcVar13 = (code *)pdVar19[9];
              ppcVar20[6] = pcVar11;
              ppcVar20[7] = pcVar12;
              pcVar11 = (code *)pdVar19[10];
              pcVar12 = (code *)pdVar19[0xb];
              ppcVar20[8] = pcVar6;
              ppcVar20[9] = pcVar13;
              pcVar6 = (code *)pdVar19[0xc];
              pcVar13 = (code *)pdVar19[0xd];
              ppcVar20[10] = pcVar11;
              ppcVar20[0xb] = pcVar12;
              pcVar11 = (code *)pdVar19[0xe];
              pcVar12 = (code *)pdVar19[0xf];
              ppcVar20[0xc] = pcVar6;
              ppcVar20[0xd] = pcVar13;
              ppcVar20[0xe] = pcVar11;
              ppcVar20[0xf] = pcVar12;
              lVar30 = lVar30 + -1;
              ppcVar23 = ppcVar20 + 0x10;
              pdVar14 = pdVar19 + 0x10;
            } while (lVar30 != 0);
            pcVar6 = (code *)pdVar19[0x11];
            pcVar11 = (code *)pdVar19[0x12];
            pcVar12 = (code *)pdVar19[0x13];
            ppcVar20[0x10] = (code *)pdVar19[0x10];
            ppcVar20[0x11] = pcVar6;
            pcVar6 = (code *)pdVar19[0x14];
            pcVar13 = (code *)pdVar19[0x15];
            ppcVar20[0x12] = pcVar11;
            ppcVar20[0x13] = pcVar12;
            pcVar11 = (code *)pdVar19[0x16];
            pcVar12 = (code *)pdVar19[0x17];
            ppcVar20[0x14] = pcVar6;
            ppcVar20[0x15] = pcVar13;
            ppcVar20[0x16] = pcVar11;
            ppcVar20[0x17] = pcVar12;
            if (local_4c0 + 2 != (code **)0x0) {
              local_4e8[0] = UE::Core::Private::Function::
                             TFunctionRefCaller<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::<lambda_1>,void,FRHICommandListImmediate_&>
                             ::Call;
            }
            this_00 = FRenderCommandList::GetInstanceTLS();
            if (this_00 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame_::__l6::TSTR_NiagaraInterpolateGroomSimCache1116>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_4e8);
            }
            else {
              this_01 = FRenderCommandList::GetRenderThread(this_00);
              local_4b8._0_8_ = local_4e8[0];
              local_490 = local_4c0;
              local_4c0 = (code **)0x0;
              local_4b8._16_8_ = local_4d8[0];
              local_4b8._24_8_ = local_4d8[1];
              local_4b8._32_8_ = local_4d8[2];
              local_4e8[0] = (code *)0x0;
              local_488 = 2;
              pFVar21 = (FRenderCommandTag *)
                        TRenderCommandTag<`UNiagaraDataInterfaceHairStrands::SimCachePostReadFrame'::__l6::TSTR_NiagaraInterpolateGroomSimCache1116>
                        ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                  *)local_4b8,pFVar21);
              uVar25 = (ulonglong)local_488;
              if ((2 < uVar25) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar25] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if ((code *)local_4b8._0_8_ != (code *)0x0) {
                  ppcVar23 = (code **)(local_4b8 + 0x10);
                  if (local_490 != (code **)0x0) {
                    ppcVar23 = local_490;
                  }
                  (**(code **)(*ppcVar23 + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar25])(local_4b8);
              }
            }
            if (local_4e8[0] != (code *)0x0) {
              ppcVar23 = local_4e8 + 2;
              if (local_4c0 != (code **)0x0) {
                ppcVar23 = local_4c0;
              }
              (**(code **)(*ppcVar23 + 0x10))();
            }
          }
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_9a8)
      ;
      pFVar28 = local_9a0 + 0x10;
      local_9a0 = pFVar28;
    } while (pFVar28 != local_948);
  }
  if (local_988 != (void *)0x0) {
    FMemory::Free(local_988);
  }
  if (local_968 != (void *)0x0) {
    FMemory::Free(local_968);
  }
  return;
}

// SolveAngularSpringMaterial @ 14e0f7da0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SolveAngularSpringMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SolveBendRodMaterial @ 14e0f7db0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SolveBendRodMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SolveDistanceSpringMaterial @ 14e0f7dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SolveDistanceSpringMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SolveHardCollisionConstraint @ 14e0f7de0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SolveHardCollisionConstraint
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SolveSoftCollisionConstraint @ 14e0f7df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SolveSoftCollisionConstraint
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// SolveStretchRodMaterial @ 14e0f7e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::SolveStretchRodMaterial
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceHairStrands @ 14e0f8470

void __cdecl
UNiagaraDataInterfaceHairStrands::StaticRegisterNativesUNiagaraDataInterfaceHairStrands(void)

{
  return;
}

// UpdateAngularVelocity @ 14e0f9c70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::UpdateAngularVelocity
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// UpdateLinearVelocity @ 14e0fa4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::UpdateLinearVelocity
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// UpdateMaterialFrame @ 14e0fa4e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::UpdateMaterialFrame
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// UpdateNodeState @ 14e0fa4f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::UpdateNodeState
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// UpdatePointPosition @ 14e0fa500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceHairStrands::UpdatePointPosition
          (UNiagaraDataInterfaceHairStrands *this,FVectorVMExternalFunctionContext *param_1)

{
  return;
}

// _getUObject @ 14e0faeb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall
UNiagaraDataInterfaceHairStrands::_getUObject(UNiagaraDataInterfaceHairStrands *this)

{
  return (UObject *)&this[-1]._padding_;
}

