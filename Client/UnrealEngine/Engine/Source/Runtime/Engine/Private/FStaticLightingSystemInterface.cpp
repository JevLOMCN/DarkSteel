// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// EditorTick @ 148463ce0

void __cdecl FStaticLightingSystemInterface::EditorTick(void)

{
  FStaticLightingSystemInterface *pFVar1;
  IStaticLightingSystemImpl *pIVar2;
  
  pFVar1 = Get();
  pIVar2 = GetPreferredImplementation(pFVar1);
  if (pIVar2 != (IStaticLightingSystemImpl *)0x0) {
    pFVar1 = Get();
    pIVar2 = GetPreferredImplementation(pFVar1);
                    /* WARNING: Could not recover jumptable at 0x000148463d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,*(code **)((longlong)*pIVar2 + 8));
    return;
  }
  return;
}

// GameTick @ 1484678a0

void __cdecl FStaticLightingSystemInterface::GameTick(float param_1)

{
  FStaticLightingSystemInterface *pFVar1;
  IStaticLightingSystemImpl *pIVar2;
  
  pFVar1 = Get();
  pIVar2 = GetPreferredImplementation(pFVar1);
  if (pIVar2 != (IStaticLightingSystemImpl *)0x0) {
    pFVar1 = Get();
    pIVar2 = GetPreferredImplementation(pFVar1);
                    /* WARNING: Could not recover jumptable at 0x0001484678d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,*(code **)((longlong)*pIVar2 + 8));
    return;
  }
  return;
}

// Get @ 148468d60

FStaticLightingSystemInterface * __cdecl FStaticLightingSystemInterface::Get(void)

{
  FStaticLightingSystemInterface *pFVar1;
  
  if (Interface == (FStaticLightingSystemInterface *)0x0) {
    pFVar1 = ::operator_new(0x50);
    Interface = (FStaticLightingSystemInterface *)0x0;
    if (pFVar1 != (FStaticLightingSystemInterface *)0x0) {
      *(undefined8 *)&(pFVar1->Implementations).field_0x10 = 0;
      *(undefined8 *)&(pFVar1->Implementations).field_0x18 = 0;
      *(undefined8 *)&(pFVar1->Implementations).field_0x38 = 0;
      *(undefined8 *)&(pFVar1->Implementations).field_0x48 = 0;
      *(undefined8 *)&pFVar1->Implementations = 0;
      *(undefined8 *)&(pFVar1->Implementations).field_0x8 = 0;
      *(undefined8 *)&(pFVar1->Implementations).field_0x20 = 0;
      *(undefined4 *)&(pFVar1->Implementations).field_0x28 = 0;
      *(undefined4 *)&(pFVar1->Implementations).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar1->Implementations).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar1->Implementations).field_0x34 = 0;
      *(undefined8 *)&(pFVar1->Implementations).field_0x40 = 0;
      Interface = pFVar1;
      return pFVar1;
    }
  }
  return Interface;
}

// GetLightComponentMapBuildData @ 14846c9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

FLightComponentMapBuildData * __cdecl
FStaticLightingSystemInterface::GetLightComponentMapBuildData(ULightComponent *param_1)

{
  code *pcVar1;
  FStaticLightingSystemInterface *pFVar2;
  IStaticLightingSystemImpl *pIVar3;
  UWorld *pUVar4;
  longlong lVar5;
  longlong *plVar6;
  FLightComponentMapBuildData *pFVar7;
  
  pFVar2 = Get();
  pIVar3 = GetPreferredImplementation(pFVar2);
  if (pIVar3 != (IStaticLightingSystemImpl *)0x0) {
    if ((param_1->_padding_ == 0) &&
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
       pUVar4 == (UWorld *)0x0)) {
      return (FLightComponentMapBuildData *)0x0;
    }
    pFVar2 = Get();
    pIVar3 = GetPreferredImplementation(pFVar2);
    pUVar4 = (UWorld *)param_1->_padding_;
    pcVar1 = *(code **)*pIVar3;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    lVar5 = (*pcVar1)(pIVar3,pUVar4);
    if (lVar5 != 0) {
      pFVar2 = Get();
      pIVar3 = GetPreferredImplementation(pFVar2);
      pUVar4 = (UWorld *)param_1->_padding_;
      pcVar1 = *(code **)*pIVar3;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      plVar6 = (longlong *)(*pcVar1)(pIVar3,pUVar4);
                    /* WARNING: Could not recover jumptable at 0x00014846ca68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar7 = (FLightComponentMapBuildData *)
               (**(code **)(*plVar6 + 8))(plVar6,param_1,*(code **)(*plVar6 + 8));
      return pFVar7;
    }
  }
  return (FLightComponentMapBuildData *)0x0;
}

// GetPrecomputedVolumetricLightmap @ 14846d5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPrecomputedVolumetricLightmap * __cdecl
FStaticLightingSystemInterface::GetPrecomputedVolumetricLightmap(UWorld *param_1)

{
  FStaticLightingSystemInterface *pFVar1;
  IStaticLightingSystemImpl *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  FPrecomputedVolumetricLightmap *pFVar5;
  
  pFVar1 = Get();
  pIVar2 = GetPreferredImplementation(pFVar1);
  if (pIVar2 != (IStaticLightingSystemImpl *)0x0) {
    pFVar1 = Get();
    pIVar2 = GetPreferredImplementation(pFVar1);
    lVar3 = (**(code **)*pIVar2)(pIVar2,param_1);
    if (lVar3 != 0) {
      pFVar1 = Get();
      pIVar2 = GetPreferredImplementation(pFVar1);
      plVar4 = (longlong *)(**(code **)*pIVar2)(pIVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014846d657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pFVar5 = (FPrecomputedVolumetricLightmap *)
               (**(code **)(*plVar4 + 0x10))(plVar4,*(code **)(*plVar4 + 0x10));
      return pFVar5;
    }
  }
  return (FPrecomputedVolumetricLightmap *)0x0;
}

// GetPreferredImplementation @ 14846d670

IStaticLightingSystemImpl * __thiscall
FStaticLightingSystemInterface::GetPreferredImplementation(FStaticLightingSystemInterface *this)

{
  IStaticLightingSystemImpl **ppIVar1;
  TIterator local_38;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NameGPULightmass,L"GPULightmass");
      _Init_thread_footer(&::_TSS0);
    }
  }
  ppIVar1 = TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
            ::Find((TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
                    *)this,NameGPULightmass);
  if (ppIVar1 != (IStaticLightingSystemImpl **)0x0) {
    return *ppIVar1;
  }
  if (0 < *(int *)&(this->Implementations).field_0x8 - *(int *)&(this->Implementations).field_0x34)
  {
    TSet<TTuple<FName,IStaticLightingSystemImpl_*>,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              (&local_38,
               (TSet<TTuple<FName,IStaticLightingSystemImpl_*>,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>,FDefaultSetAllocator>
                *)this);
    return *(IStaticLightingSystemImpl **)
            (*(longlong *)local_38._padding_ + 8 + (longlong)local_38._padding_._4_4_ * 0x18);
  }
  return (IStaticLightingSystemImpl *)0x0;
}

// GetPrimitiveMeshMapBuildData @ 14846d740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMeshMapBuildData * __cdecl
FStaticLightingSystemInterface::GetPrimitiveMeshMapBuildData
          (UPrimitiveComponent *param_1,int param_2)

{
  code *pcVar1;
  FStaticLightingSystemInterface *pFVar2;
  IStaticLightingSystemImpl *pIVar3;
  UWorld *pUVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FMeshMapBuildData *pFVar7;
  
  pFVar2 = Get();
  pIVar3 = GetPreferredImplementation(pFVar2);
  if ((pIVar3 != (IStaticLightingSystemImpl *)0x0) &&
     ((*(longlong *)&param_1->field_0xb0 != 0 ||
      (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
      pUVar4 != (UWorld *)0x0)))) {
    pFVar2 = Get();
    pIVar3 = GetPreferredImplementation(pFVar2);
    pUVar4 = *(UWorld **)&param_1->field_0xb0;
    pcVar1 = *(code **)*pIVar3;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    lVar5 = (*pcVar1)(pIVar3,pUVar4);
    if (lVar5 != 0) {
      pFVar2 = Get();
      pIVar3 = GetPreferredImplementation(pFVar2);
      pUVar4 = *(UWorld **)&param_1->field_0xb0;
      pcVar1 = *(code **)*pIVar3;
      if (pUVar4 == (UWorld *)0x0) {
        pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      puVar6 = (undefined8 *)(*pcVar1)(pIVar3,pUVar4);
      pFVar7 = (FMeshMapBuildData *)(**(code **)*puVar6)(puVar6,param_1,param_2);
      return pFVar7;
    }
  }
  return (FMeshMapBuildData *)0x0;
}

// IsStaticLightingSystemRunning @ 148478990

bool __cdecl FStaticLightingSystemInterface::IsStaticLightingSystemRunning(void)

{
  undefined1 uVar1;
  FStaticLightingSystemInterface *pFVar2;
  IStaticLightingSystemImpl *pIVar3;
  
  pFVar2 = Get();
  pIVar3 = GetPreferredImplementation(pFVar2);
  if (pIVar3 != (IStaticLightingSystemImpl *)0x0) {
    pFVar2 = Get();
    pIVar3 = GetPreferredImplementation(pFVar2);
                    /* WARNING: Could not recover jumptable at 0x0001484789c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,*(code **)((longlong)*pIVar3 + 0x10));
    return (bool)uVar1;
  }
  return false;
}

// RegisterImplementation @ 148481100

void __thiscall
FStaticLightingSystemInterface::RegisterImplementation
          (FStaticLightingSystemInterface *this,FName param_1,IStaticLightingSystemImpl *param_2)

{
  code *pcVar1;
  bool bVar2;
  IStaticLightingSystemImpl **ppIVar3;
  TPairInitializer<FName_const_&,IStaticLightingSystemImpl_*_const_&> local_res8;
  IStaticLightingSystemImpl *local_res18 [2];
  IStaticLightingSystemImpl ***local_18;
  IStaticLightingSystemImpl **local_10;
  
  local_res8.Value = (IStaticLightingSystemImpl **)param_1;
  local_res18[0] = param_2;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticLightingSystemInterface.cpp"
                       ,0x65,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppIVar3 = TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
            ::Find((TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
                    *)this,(FName)local_res8.Value);
  if (ppIVar3 != (IStaticLightingSystemImpl **)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Implementations.Find(Name) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticLightingSystemInterface.cpp"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<FName,IStaticLightingSystemImpl_*>,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,IStaticLightingSystemImpl_*_const_&>_>
            ((TSet<TTuple<FName,IStaticLightingSystemImpl_*>,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_18);
  return;
}

// UnregisterImplementation @ 14849aff0

void __thiscall
FStaticLightingSystemInterface::UnregisterImplementation
          (FStaticLightingSystemInterface *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IStaticLightingSystemImpl **ppIVar4;
  FName local_res8;
  FName local_res10;
  
  local_res10 = param_1;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticLightingSystemInterface.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ppIVar4 = TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
            ::Find((TMapBase<FName,IStaticLightingSystemImpl_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>_>
                    *)this,param_1);
  if (ppIVar4 == (IStaticLightingSystemImpl **)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Implementations.Find(Name) != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\StaticLightingSystemInterface.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)&(this->Implementations).field_0x8 != *(int *)&(this->Implementations).field_0x34) {
    local_res8 = param_1;
    uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    TSet<TTuple<FName,IStaticLightingSystemImpl_*>,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,IStaticLightingSystemImpl_*>,TDefaultMapHashableKeyFuncs<FName,IStaticLightingSystemImpl_*,0>,FDefaultSetAllocator>
                         *)this,local_res10.Number + uVar3,&local_res8);
  }
  return;
}

