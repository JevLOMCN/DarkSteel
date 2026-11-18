// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 8

// FindOrAddEventTrack<FBreakingEvent> @ 14dae0490

FCacheEventTrack * __thiscall
FPendingFrameWrite::FindOrAddEventTrack<FBreakingEvent>(FPendingFrameWrite *this,FName param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  UPackage *pUVar5;
  FCacheEventTrack *pFVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FCacheEventTrack local_a8;
  FName local_70;
  FCacheEventTrack local_68;
  
  bVar8 = false;
  if (Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakingEvent,(UObject *)pUVar5,L"BreakingEvent"
                        );
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase,(UObject *)pUVar5,
                         L"CacheEventBase");
    if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14dae051b;
  }
  else {
LAB_14dae051b:
    iVar9 = (int)(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar9 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14dae0565;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("T::StaticStruct()->IsChildOf(FCacheEventBase::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\ChaosCache.h"
                     ,0xf0,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FCacheEventTrack *)(*pcVar1)();
    return pFVar6;
  }
LAB_14dae0565:
  pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
           ::Find((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                   *)&this->PendingEvents,param_1);
  if (pFVar6 == (FCacheEventTrack *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBreakingEvent,(UObject *)pUVar5,
                           L"BreakingEvent");
    }
    local_a8.Name = param_1;
    local_a8.Struct.field0_0x0 =
         (TObjectPtr<UScriptStruct>_u_0)
         Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton);
    }
    local_a8.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.TimeStamps.ArrayNum = 0;
    local_a8.TimeStamps.ArrayMax = 0;
    local_a8.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.EventData.ArrayNum = 0;
    local_a8.EventData.ArrayMax = 0;
    iVar9 = 0;
    iVar7 = 0;
    local_70 = param_1;
    local_68.Name = local_a8.Name;
    local_68.Struct.field0_0x0 = (TObjectPtr<UScriptStruct>_u_0)local_a8.Struct;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (iVar9 = 0, iVar7 = 0,
       local_a8.Struct.field0_0x0.DebugPtr != (TObjectPtr<UScriptStruct>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8.Struct.field0_0x0);
      iVar9 = local_a8.TimeStamps.ArrayNum;
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.TimeStamps.AllocatorInstance.Data;
    local_68.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.TimeStamps.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_68.TimeStamps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,0,&local_68.TimeStamps.AllocatorInstance,iVar9,
                 &local_68.TimeStamps.ArrayMax);
      memcpy(local_68.TimeStamps.AllocatorInstance.Data,FVar3.Data,(longlong)iVar9 << 2);
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.EventData.AllocatorInstance.Data;
    local_68.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.EventData.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_68.EventData.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,0,&local_68.EventData.AllocatorInstance,iVar7,
                 &local_68.EventData.ArrayMax);
      memcpy(local_68.EventData.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 << 3);
    }
    local_68.TransientVersion = local_a8.TransientVersion;
    pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
             ::Emplace<FName,FCacheEventTrack>
                       ((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                         *)&this->PendingEvents,&local_70,&local_68);
    bVar8 = true;
    FCacheEventTrack::~FCacheEventTrack(&local_68);
  }
  if (bVar8) {
    FCacheEventTrack::~FCacheEventTrack(&local_a8);
  }
  return pFVar6;
}

// FindOrAddEventTrack<FCollisionEvent> @ 14dae0740

FCacheEventTrack * __thiscall
FPendingFrameWrite::FindOrAddEventTrack<FCollisionEvent>(FPendingFrameWrite *this,FName param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  UPackage *pUVar5;
  FCacheEventTrack *pFVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FCacheEventTrack local_a8;
  FName local_70;
  FCacheEventTrack local_68;
  
  bVar8 = false;
  if (Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionEvent,(UObject *)pUVar5,
                         L"CollisionEvent");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase,(UObject *)pUVar5,
                         L"CacheEventBase");
    if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14dae07cb;
  }
  else {
LAB_14dae07cb:
    iVar9 = (int)(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar9 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14dae0815;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("T::StaticStruct()->IsChildOf(FCacheEventBase::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\ChaosCache.h"
                     ,0xf0,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FCacheEventTrack *)(*pcVar1)();
    return pFVar6;
  }
LAB_14dae0815:
  pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
           ::Find((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                   *)&this->PendingEvents,param_1);
  if (pFVar6 == (FCacheEventTrack *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollisionEvent,(UObject *)pUVar5,
                           L"CollisionEvent");
    }
    local_a8.Name = param_1;
    local_a8.Struct.field0_0x0 =
         (TObjectPtr<UScriptStruct>_u_0)
         Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton);
    }
    local_a8.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.TimeStamps.ArrayNum = 0;
    local_a8.TimeStamps.ArrayMax = 0;
    local_a8.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.EventData.ArrayNum = 0;
    local_a8.EventData.ArrayMax = 0;
    iVar9 = 0;
    iVar7 = 0;
    local_70 = param_1;
    local_68.Name = local_a8.Name;
    local_68.Struct.field0_0x0 = (TObjectPtr<UScriptStruct>_u_0)local_a8.Struct;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (iVar9 = 0, iVar7 = 0,
       local_a8.Struct.field0_0x0.DebugPtr != (TObjectPtr<UScriptStruct>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8.Struct.field0_0x0);
      iVar9 = local_a8.TimeStamps.ArrayNum;
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.TimeStamps.AllocatorInstance.Data;
    local_68.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.TimeStamps.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_68.TimeStamps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,0,&local_68.TimeStamps.AllocatorInstance,iVar9,
                 &local_68.TimeStamps.ArrayMax);
      memcpy(local_68.TimeStamps.AllocatorInstance.Data,FVar3.Data,(longlong)iVar9 << 2);
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.EventData.AllocatorInstance.Data;
    local_68.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.EventData.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_68.EventData.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,0,&local_68.EventData.AllocatorInstance,iVar7,
                 &local_68.EventData.ArrayMax);
      memcpy(local_68.EventData.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 << 3);
    }
    local_68.TransientVersion = local_a8.TransientVersion;
    pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
             ::Emplace<FName,FCacheEventTrack>
                       ((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                         *)&this->PendingEvents,&local_70,&local_68);
    bVar8 = true;
    FCacheEventTrack::~FCacheEventTrack(&local_68);
  }
  if (bVar8) {
    FCacheEventTrack::~FCacheEventTrack(&local_a8);
  }
  return pFVar6;
}

// FindOrAddEventTrack<FEnableStateEvent> @ 14dae09f0

FCacheEventTrack * __thiscall
FPendingFrameWrite::FindOrAddEventTrack<FEnableStateEvent>(FPendingFrameWrite *this,FName param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  UPackage *pUVar5;
  FCacheEventTrack *pFVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FCacheEventTrack local_a8;
  FName local_70;
  FCacheEventTrack local_68;
  
  bVar8 = false;
  if (Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnableStateEvent,(UObject *)pUVar5,
                         L"EnableStateEvent");
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase,(UObject *)pUVar5,
                         L"CacheEventBase");
    if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14dae0a7b;
  }
  else {
LAB_14dae0a7b:
    iVar9 = (int)(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar9 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14dae0ac5;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("T::StaticStruct()->IsChildOf(FCacheEventBase::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\ChaosCache.h"
                     ,0xf0,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FCacheEventTrack *)(*pcVar1)();
    return pFVar6;
  }
LAB_14dae0ac5:
  pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
           ::Find((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                   *)&this->PendingEvents,param_1);
  if (pFVar6 == (FCacheEventTrack *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FEnableStateEvent,(UObject *)pUVar5,
                           L"EnableStateEvent");
    }
    local_a8.Name = param_1;
    local_a8.Struct.field0_0x0 =
         (TObjectPtr<UScriptStruct>_u_0)
         Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton != (UScriptStruct *)0x0))
    {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton);
    }
    local_a8.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.TimeStamps.ArrayNum = 0;
    local_a8.TimeStamps.ArrayMax = 0;
    local_a8.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.EventData.ArrayNum = 0;
    local_a8.EventData.ArrayMax = 0;
    iVar9 = 0;
    iVar7 = 0;
    local_70 = param_1;
    local_68.Name = local_a8.Name;
    local_68.Struct.field0_0x0 = (TObjectPtr<UScriptStruct>_u_0)local_a8.Struct;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (iVar9 = 0, iVar7 = 0,
       local_a8.Struct.field0_0x0.DebugPtr != (TObjectPtr<UScriptStruct>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8.Struct.field0_0x0);
      iVar9 = local_a8.TimeStamps.ArrayNum;
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.TimeStamps.AllocatorInstance.Data;
    local_68.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.TimeStamps.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_68.TimeStamps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,0,&local_68.TimeStamps.AllocatorInstance,iVar9,
                 &local_68.TimeStamps.ArrayMax);
      memcpy(local_68.TimeStamps.AllocatorInstance.Data,FVar3.Data,(longlong)iVar9 << 2);
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.EventData.AllocatorInstance.Data;
    local_68.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.EventData.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_68.EventData.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,0,&local_68.EventData.AllocatorInstance,iVar7,
                 &local_68.EventData.ArrayMax);
      memcpy(local_68.EventData.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 << 3);
    }
    local_68.TransientVersion = local_a8.TransientVersion;
    pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
             ::Emplace<FName,FCacheEventTrack>
                       ((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                         *)&this->PendingEvents,&local_70,&local_68);
    bVar8 = true;
    FCacheEventTrack::~FCacheEventTrack(&local_68);
  }
  if (bVar8) {
    FCacheEventTrack::~FCacheEventTrack(&local_a8);
  }
  return pFVar6;
}

// FindOrAddEventTrack<FTrailingEvent> @ 14dae0ca0

FCacheEventTrack * __thiscall
FPendingFrameWrite::FindOrAddEventTrack<FTrailingEvent>(FPendingFrameWrite *this,FName param_1)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  UPackage *pUVar5;
  FCacheEventTrack *pFVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FCacheEventTrack local_a8;
  FName local_70;
  FCacheEventTrack local_68;
  
  bVar8 = false;
  if (Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTrailingEvent,(UObject *)pUVar5,L"TrailingEvent"
                        );
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton;
  if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCacheEventBase,(UObject *)pUVar5,
                         L"CacheEventBase");
    if (Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton != (UScriptStruct *)0x0)
    goto LAB_14dae0d2b;
  }
  else {
LAB_14dae0d2b:
    iVar9 = (int)(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_;
    if (((int)pUVar2->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar9 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FCacheEventBase.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14dae0d75;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("T::StaticStruct()->IsChildOf(FCacheEventBase::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\ChaosCache.h"
                     ,0xf0,L"");
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FCacheEventTrack *)(*pcVar1)();
    return pFVar6;
  }
LAB_14dae0d75:
  pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
           ::Find((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                   *)&this->PendingEvents,param_1);
  if (pFVar6 == (FCacheEventTrack *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_ChaosCaching();
      Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FTrailingEvent,(UObject *)pUVar5,
                           L"TrailingEvent");
    }
    local_a8.Name = param_1;
    local_a8.Struct.field0_0x0 =
         (TObjectPtr<UScriptStruct>_u_0)
         Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton);
    }
    local_a8.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.TimeStamps.ArrayNum = 0;
    local_a8.TimeStamps.ArrayMax = 0;
    local_a8.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.EventData.ArrayNum = 0;
    local_a8.EventData.ArrayMax = 0;
    iVar9 = 0;
    iVar7 = 0;
    local_70 = param_1;
    local_68.Name = local_a8.Name;
    local_68.Struct.field0_0x0 = (TObjectPtr<UScriptStruct>_u_0)local_a8.Struct;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (iVar9 = 0, iVar7 = 0,
       local_a8.Struct.field0_0x0.DebugPtr != (TObjectPtr<UScriptStruct>_u_0)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_a8.Struct.field0_0x0);
      iVar9 = local_a8.TimeStamps.ArrayNum;
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.TimeStamps.AllocatorInstance.Data;
    local_68.TimeStamps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.TimeStamps.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_68.TimeStamps.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar9,0,&local_68.TimeStamps.AllocatorInstance,iVar9,
                 &local_68.TimeStamps.ArrayMax);
      memcpy(local_68.TimeStamps.AllocatorInstance.Data,FVar3.Data,(longlong)iVar9 << 2);
      iVar7 = local_a8.EventData.ArrayNum;
    }
    FVar3.Data = local_a8.EventData.AllocatorInstance.Data;
    local_68.EventData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.EventData.ArrayNum = iVar7;
    if (iVar7 == 0) {
      local_68.EventData.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar7,0,&local_68.EventData.AllocatorInstance,iVar7,
                 &local_68.EventData.ArrayMax);
      memcpy(local_68.EventData.AllocatorInstance.Data,FVar3.Data,(longlong)iVar7 << 3);
    }
    local_68.TransientVersion = local_a8.TransientVersion;
    pFVar6 = TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
             ::Emplace<FName,FCacheEventTrack>
                       ((TMapBase<FName,FCacheEventTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>_>
                         *)&this->PendingEvents,&local_70,&local_68);
    bVar8 = true;
    FCacheEventTrack::~FCacheEventTrack(&local_68);
  }
  if (bVar8) {
    FCacheEventTrack::~FCacheEventTrack(&local_a8);
  }
  return pFVar6;
}

// FPendingFrameWrite @ 14dae72b0

FPendingFrameWrite * __thiscall
FPendingFrameWrite::FPendingFrameWrite(FPendingFrameWrite *this,FPendingFrameWrite *param_1)

{
  float fVar1;
  
  fVar1 = param_1->Time;
  (this->PendingParticleData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->Time = fVar1;
  (this->PendingParticleData).AllocatorInstance.Data =
       (param_1->PendingParticleData).AllocatorInstance.Data;
  (param_1->PendingParticleData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingParticleData).ArrayNum = (param_1->PendingParticleData).ArrayNum;
  (this->PendingParticleData).ArrayMax = (param_1->PendingParticleData).ArrayMax;
  (param_1->PendingParticleData).ArrayNum = 0;
  (param_1->PendingParticleData).ArrayMax = 0;
  (this->PendingCurveData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCurveData).AllocatorInstance.Data =
       (param_1->PendingCurveData).AllocatorInstance.Data;
  (param_1->PendingCurveData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCurveData).ArrayNum = (param_1->PendingCurveData).ArrayNum;
  (this->PendingCurveData).ArrayMax = (param_1->PendingCurveData).ArrayMax;
  (param_1->PendingCurveData).ArrayNum = 0;
  (param_1->PendingCurveData).ArrayMax = 0;
  *(undefined8 *)&(this->PendingEvents).field_0x0 = 0;
  *(undefined8 *)&(this->PendingEvents).field_0x8 = 0;
  *(undefined8 *)&(this->PendingEvents).field_0x20 = 0;
  *(undefined4 *)&(this->PendingEvents).field_0x28 = 0;
  *(undefined4 *)&(this->PendingEvents).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingEvents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingEvents).field_0x34 = 0;
  *(undefined8 *)&(this->PendingEvents).field_0x40 = 0;
  *(undefined4 *)&(this->PendingEvents).field_0x48 = 0;
  TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
              *)&this->PendingEvents,
             (TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
              *)&param_1->PendingEvents);
  (this->PendingChannelsIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChannelsIndices).AllocatorInstance.Data =
       (param_1->PendingChannelsIndices).AllocatorInstance.Data;
  (param_1->PendingChannelsIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChannelsIndices).ArrayNum = (param_1->PendingChannelsIndices).ArrayNum;
  (this->PendingChannelsIndices).ArrayMax = (param_1->PendingChannelsIndices).ArrayMax;
  (param_1->PendingChannelsIndices).ArrayNum = 0;
  (param_1->PendingChannelsIndices).ArrayMax = 0;
  *(undefined8 *)&(this->PendingChannelsData).field_0x0 = 0;
  *(undefined8 *)&(this->PendingChannelsData).field_0x8 = 0;
  *(undefined8 *)&(this->PendingChannelsData).field_0x20 = 0;
  *(undefined4 *)&(this->PendingChannelsData).field_0x28 = 0;
  *(undefined4 *)&(this->PendingChannelsData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingChannelsData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingChannelsData).field_0x34 = 0;
  *(undefined8 *)&(this->PendingChannelsData).field_0x40 = 0;
  *(undefined4 *)&(this->PendingChannelsData).field_0x48 = 0;
  TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->PendingChannelsData,
             (TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&param_1->PendingChannelsData);
  *(undefined8 *)&(this->PendingNamedTransformData).field_0x0 = 0;
  *(undefined8 *)&(this->PendingNamedTransformData).field_0x8 = 0;
  *(undefined8 *)&(this->PendingNamedTransformData).field_0x20 = 0;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x28 = 0;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x34 = 0;
  *(undefined8 *)&(this->PendingNamedTransformData).field_0x40 = 0;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x48 = 0;
  TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
              *)&this->PendingNamedTransformData,
             (TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
              *)&param_1->PendingNamedTransformData);
  return this;
}

// FPendingFrameWrite @ 14dae7400

FPendingFrameWrite * __thiscall FPendingFrameWrite::FPendingFrameWrite(FPendingFrameWrite *this)

{
  (this->PendingParticleData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingParticleData).ArrayNum = 0;
  (this->PendingParticleData).ArrayMax = 0;
  (this->PendingCurveData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCurveData).ArrayNum = 0;
  (this->PendingCurveData).ArrayMax = 0;
  *(undefined8 *)&this->PendingEvents = 0;
  *(undefined8 *)&(this->PendingEvents).field_0x8 = 0;
  *(undefined8 *)&(this->PendingEvents).field_0x20 = 0;
  *(undefined4 *)&(this->PendingEvents).field_0x28 = 0;
  *(undefined4 *)&(this->PendingEvents).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingEvents).field_0x34 = 0;
  *(undefined4 *)&(this->PendingEvents).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingEvents).field_0x40 = 0;
  *(undefined4 *)&(this->PendingEvents).field_0x48 = 0;
  (this->PendingChannelsIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingChannelsIndices).ArrayNum = 0;
  (this->PendingChannelsIndices).ArrayMax = 0;
  *(undefined8 *)&this->PendingChannelsData = 0;
  *(undefined8 *)&(this->PendingChannelsData).field_0x8 = 0;
  *(undefined8 *)&(this->PendingChannelsData).field_0x20 = 0;
  *(undefined4 *)&(this->PendingChannelsData).field_0x28 = 0;
  *(undefined4 *)&(this->PendingChannelsData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingChannelsData).field_0x34 = 0;
  *(undefined4 *)&(this->PendingChannelsData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingChannelsData).field_0x40 = 0;
  *(undefined4 *)&(this->PendingChannelsData).field_0x48 = 0;
  *(undefined8 *)&this->PendingNamedTransformData = 0;
  *(undefined8 *)&(this->PendingNamedTransformData).field_0x8 = 0;
  *(undefined8 *)&(this->PendingNamedTransformData).field_0x20 = 0;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x28 = 0;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x34 = 0;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingNamedTransformData).field_0x40 = 0;
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x48 = 0;
  return this;
}

// ~FPendingFrameWrite @ 14dae8b30

void __thiscall FPendingFrameWrite::~FPendingFrameWrite(FPendingFrameWrite *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->PendingNamedTransformData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingNamedTransformData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TTransform<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingNamedTransformData);
  *(undefined4 *)&(this->PendingChannelsData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingChannelsData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingChannelsData);
  pFVar2 = (this->PendingChannelsIndices).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->PendingEvents).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingEvents).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCacheEventTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingEvents);
  pFVar2 = (this->PendingCurveData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FPendingParticleWrite,int>
            ((FPendingParticleWrite *)(this->PendingParticleData).AllocatorInstance.Data,
             (this->PendingParticleData).ArrayNum);
  pFVar2 = (this->PendingParticleData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator= @ 14dae9180

FPendingFrameWrite * __thiscall
FPendingFrameWrite::operator=(FPendingFrameWrite *this,FPendingFrameWrite *param_1)

{
  TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TTuple<FName,float>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TTuple<FName,float>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &param_1->PendingParticleData;
  pTVar2 = &this->PendingParticleData;
  this->Time = param_1->Time;
  if (pTVar2 != pTVar1) {
    DestructItems<FPendingParticleWrite,int>
              ((FPendingParticleWrite *)(pTVar2->AllocatorInstance).Data,
               (this->PendingParticleData).ArrayNum);
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PendingParticleData).ArrayNum = (param_1->PendingParticleData).ArrayNum;
    (this->PendingParticleData).ArrayMax = (param_1->PendingParticleData).ArrayMax;
    (param_1->PendingParticleData).ArrayNum = 0;
    (param_1->PendingParticleData).ArrayMax = 0;
  }
  pTVar3 = &param_1->PendingCurveData;
  pTVar4 = &this->PendingCurveData;
  if (pTVar4 != pTVar3) {
    pFVar7 = (pTVar4->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PendingCurveData).ArrayNum = (param_1->PendingCurveData).ArrayNum;
    (this->PendingCurveData).ArrayMax = (param_1->PendingCurveData).ArrayMax;
    (param_1->PendingCurveData).ArrayNum = 0;
    (param_1->PendingCurveData).ArrayMax = 0;
  }
  if (&this->PendingEvents != &param_1->PendingEvents) {
    TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
                *)&this->PendingEvents,
               (TSet<TTuple<FName,FCacheEventTrack>,TDefaultMapHashableKeyFuncs<FName,FCacheEventTrack,0>,FDefaultSetAllocator>
                *)&param_1->PendingEvents);
  }
  pTVar5 = &param_1->PendingChannelsIndices;
  pTVar6 = &this->PendingChannelsIndices;
  if (pTVar6 != pTVar5) {
    pFVar7 = (pTVar6->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar6->AllocatorInstance).Data = (pTVar5->AllocatorInstance).Data;
    (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->PendingChannelsIndices).ArrayNum = (param_1->PendingChannelsIndices).ArrayNum;
    (this->PendingChannelsIndices).ArrayMax = (param_1->PendingChannelsIndices).ArrayMax;
    (param_1->PendingChannelsIndices).ArrayNum = 0;
    (param_1->PendingChannelsIndices).ArrayMax = 0;
  }
  if (&this->PendingChannelsData != &param_1->PendingChannelsData) {
    TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&this->PendingChannelsData,
               (TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)&param_1->PendingChannelsData);
  }
  if (&this->PendingNamedTransformData != &param_1->PendingNamedTransformData) {
    TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
    ::
    Move<TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>_>
              ((TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                *)&this->PendingNamedTransformData,
               (TSet<TTuple<FName,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                *)&param_1->PendingNamedTransformData);
  }
  return this;
}

