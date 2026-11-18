// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// ~ILevelInstanceInterface @ 147e57670

void __thiscall ILevelInstanceInterface::~ILevelInstanceInterface(ILevelInstanceInterface *this)

{
  *this = (ILevelInstanceInterface)&___7ILevelInstanceInterface__6B_;
  return;
}

// GetLevelInstanceSubsystem @ 147e685d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevelInstanceSubsystem * __thiscall
ILevelInstanceInterface::GetLevelInstanceSubsystem(ILevelInstanceInterface *this)

{
  AActor *this_00;
  UWorld *pUVar1;
  ULevelInstanceSubsystem *pUVar2;
  
  this_00 = CastChecked<AActor,ILevelInstanceInterface_const_>(this);
  pUVar1 = AActor::GetWorld(this_00);
  if (pUVar1 != (UWorld *)0x0) {
    pUVar1 = AActor::GetWorld(this_00);
    pUVar2 = UWorld::GetSubsystem<ULevelInstanceSubsystem>(pUVar1);
    return pUVar2;
  }
  return (ULevelInstanceSubsystem *)0x0;
}

// GetLevelStreaming @ 147e68640

ULevelStreamingLevelInstance * __thiscall
ILevelInstanceInterface::GetLevelStreaming(ILevelInstanceInterface *this)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  FLevelInstanceID *pFVar4;
  ULevelStreamingLevelInstance *pUVar5;
  ULevelStreamingLevelInstance *pUVar6;
  
  lVar3 = (**(code **)((longlong)*this + 0x40))();
  if (lVar3 != 0) {
    cVar1 = (**(code **)((longlong)*this + 0x18))(this);
    pUVar6 = (ULevelStreamingLevelInstance *)0x0;
    if (cVar1 != '\0') {
      pFVar4 = (FLevelInstanceID *)(**(code **)((longlong)*this + 0x10))(this);
      iVar2 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FLevelInstanceID>
                        ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                          *)(lVar3 + 0x130),(int)(pFVar4->Hash >> 0x20) * 0x17 + (int)pFVar4->Hash,
                         pFVar4);
      if (iVar2 != -1) {
        lVar3 = (longlong)iVar2 * 0x40 + *(longlong *)(lVar3 + 0x130);
        pUVar5 = (ULevelStreamingLevelInstance *)(lVar3 + 0x30);
        if (lVar3 == 0) {
          pUVar5 = pUVar6;
        }
        if (pUVar5 != (ULevelStreamingLevelInstance *)0x0) {
          pUVar6 = *(ULevelStreamingLevelInstance **)pUVar5;
        }
      }
    }
    return pUVar6;
  }
  return (ULevelStreamingLevelInstance *)0x0;
}

// GetLevelStreamingClass @ 147e686f0

TSubclassOf<ULevelStreamingLevelInstance> __thiscall
ILevelInstanceInterface::GetLevelStreamingClass(ILevelInstanceInterface *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = ULevelStreamingLevelInstance::StaticClass();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<ULevelStreamingLevelInstance>)in_RDX.field0_0x0;
}

// GetLoadedLevel @ 147e68c30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall ILevelInstanceInterface::GetLoadedLevel(ILevelInstanceInterface *this)

{
  ULevelInstanceSubsystem *this_00;
  ULevel *pUVar1;
  
  this_00 = (ULevelInstanceSubsystem *)(**(code **)((longlong)*this + 0x40))();
  if (this_00 != (ULevelInstanceSubsystem *)0x0) {
    pUVar1 = ULevelInstanceSubsystem::GetLevelInstanceLevel(this_00,this);
    return pUVar1;
  }
  return (ULevel *)0x0;
}

// IsInitiallyVisible @ 147e6e040

bool __thiscall ILevelInstanceInterface::IsInitiallyVisible(ILevelInstanceInterface *this)

{
  return true;
}

// IsLoaded @ 147e6e0d0

bool __thiscall ILevelInstanceInterface::IsLoaded(ILevelInstanceInterface *this)

{
  bool bVar1;
  ULevelInstanceSubsystem *this_00;
  
  this_00 = (ULevelInstanceSubsystem *)(**(code **)((longlong)*this + 0x40))();
  if (this_00 != (ULevelInstanceSubsystem *)0x0) {
    bVar1 = ULevelInstanceSubsystem::IsLoaded(this_00,this);
    return bVar1;
  }
  return false;
}

// LoadLevelInstance @ 147e6ea40

void __thiscall ILevelInstanceInterface::LoadLevelInstance(ILevelInstanceInterface *this)

{
  char cVar1;
  ULevelInstanceSubsystem *this_00;
  
  cVar1 = (**(code **)((longlong)*this + 0x30))();
  if (cVar1 != '\0') {
    this_00 = (ULevelInstanceSubsystem *)(**(code **)((longlong)*this + 0x40))(this);
    if (this_00 != (ULevelInstanceSubsystem *)0x0) {
      ULevelInstanceSubsystem::RequestLoadLevelInstance(this_00,this,false);
      return;
    }
  }
  return;
}

// OnLevelInstanceLoaded @ 147e71440

void __thiscall ILevelInstanceInterface::OnLevelInstanceLoaded(ILevelInstanceInterface *this)

{
  return;
}

// SetWorldAsset @ 147e7ec20

bool __thiscall
ILevelInstanceInterface::SetWorldAsset
          (ILevelInstanceInterface *this,TSoftObjectPtr<UWorld> *param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return false;
}

// UnloadLevelInstance @ 147e83640

void __thiscall ILevelInstanceInterface::UnloadLevelInstance(ILevelInstanceInterface *this)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  FLevelInstanceID *pFVar4;
  uint uVar5;
  ILevelInstanceInterface *local_res8;
  
  cVar1 = (**(code **)((longlong)*this + 0x30))();
  if ((cVar1 != '\0') && (lVar3 = (**(code **)((longlong)*this + 0x40))(this), lVar3 != 0)) {
    pFVar4 = (FLevelInstanceID *)(**(code **)((longlong)*this + 0x10))(this);
    iVar2 = TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FLevelInstanceID>
                      ((TSet<TTuple<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ULevelInstanceSubsystem::FLevelInstance,0>,FDefaultSetAllocator>
                        *)(lVar3 + 0x130),(int)(pFVar4->Hash >> 0x20) * 0x17 + (int)pFVar4->Hash,
                       pFVar4);
    if ((iVar2 != -1) ||
       (iVar2 = TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
                FindIndexByHash<FLevelInstanceID>
                          ((TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>
                            *)(lVar3 + 0xe0),(int)(pFVar4->Hash >> 0x20) * 0x17 + (int)pFVar4->Hash,
                           pFVar4), iVar2 != -1)) {
      TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator>::
      Emplace<FLevelInstanceID_const_&>
                ((TSet<FLevelInstanceID,DefaultKeyFuncs<FLevelInstanceID,0>,FDefaultSetAllocator> *)
                 (lVar3 + 0x90),(FLevelInstanceID *)&local_res8,(bool *)pFVar4);
    }
    if (*(int *)(lVar3 + 0x48) != *(int *)(lVar3 + 0x74)) {
      uVar5 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      local_res8 = this;
      TSet<TTuple<ILevelInstanceInterface_*,bool>,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>,FDefaultSetAllocator>
      ::RemoveImpl<ILevelInstanceInterface_const_*>
                ((TSet<TTuple<ILevelInstanceInterface_*,bool>,TDefaultMapHashableKeyFuncs<ILevelInstanceInterface_*,bool,0>,FDefaultSetAllocator>
                  *)(lVar3 + 0x40),uVar5 >> 0x10 ^ uVar5,&local_res8);
    }
  }
  return;
}

// UpdateLevelInstanceFromWorldAsset @ 147e83bb0

void __thiscall
ILevelInstanceInterface::UpdateLevelInstanceFromWorldAsset(ILevelInstanceInterface *this)

{
  char cVar1;
  ULevelInstanceSubsystem *this_00;
  longlong lVar2;
  
  cVar1 = (**(code **)((longlong)*this + 0x18))();
  if ((cVar1 != '\0') &&
     (this_00 = (ULevelInstanceSubsystem *)(**(code **)((longlong)*this + 0x40))(this),
     this_00 != (ULevelInstanceSubsystem *)0x0)) {
    lVar2 = (**(code **)((longlong)*this + 0x28))(this);
    if ((*(longlong *)(lVar2 + 8) != 0) &&
       (cVar1 = (**(code **)((longlong)*this + 0x30))(this), cVar1 != '\0')) {
      ULevelInstanceSubsystem::RequestLoadLevelInstance(this_00,this,true);
      return;
    }
    cVar1 = (**(code **)((longlong)*this + 0x48))(this);
    if (cVar1 != '\0') {
      (**(code **)((longlong)*this + 0x58))(this);
    }
  }
  return;
}

// _getUObject @ 147e87f40

UObject * __thiscall ILevelInstanceInterface::_getUObject(ILevelInstanceInterface *this)

{
  return (UObject *)0x0;
}

// execGetLoadedLevel @ 147e8a3b0

void __cdecl
ILevelInstanceInterface::execGetLoadedLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x78))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetWorldAsset @ 147e8a420

void __cdecl
ILevelInstanceInterface::execGetWorldAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x28))();
  *(undefined8 *)param_3 = *puVar1;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)((longlong)param_3 + 8),(FSoftObjectPath *)(puVar1 + 1));
  return;
}

// execIsLoaded @ 147e8a860

void __cdecl ILevelInstanceInterface::execIsLoaded(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x48))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execLoadLevelInstance @ 147e8a9c0

void __cdecl
ILevelInstanceInterface::execLoadLevelInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147e8a9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x50))();
  return;
}

// execSetWorldAsset @ 147e8bdc0

void __cdecl
ILevelInstanceInterface::execSetWorldAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  undefined1 uVar3;
  size_t _Size;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  FUtf8String local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Data.ArrayNum = 0;
  local_50.Data.ArrayMax = 0;
  local_68 = 0;
  uStack_58 = 0;
  local_60 = 0;
  FUtf8String::Reset(&local_50,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  _Src.Data = local_50.Data.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_50.Data.ArrayNum;
  local_20 = local_50.Data.ArrayNum;
  local_38 = (undefined4)local_60;
  uStack_34 = local_60._4_4_;
  uStack_30 = (undefined4)uStack_58;
  uStack_2c = uStack_58._4_4_;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x80);
  local_40 = local_68;
  if (local_50.Data.ArrayNum == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_50.Data.ArrayNum,0,&local_28,local_50.Data.ArrayNum,&local_1c);
    memcpy(local_28.Data,_Src.Data,_Size);
  }
  uVar3 = (*pcVar2)(param_1,&local_40);
  *(undefined1 *)param_3 = uVar3;
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// execUnloadLevelInstance @ 147e8bf50

void __cdecl
ILevelInstanceInterface::execUnloadLevelInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147e8bf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x58))();
  return;
}

