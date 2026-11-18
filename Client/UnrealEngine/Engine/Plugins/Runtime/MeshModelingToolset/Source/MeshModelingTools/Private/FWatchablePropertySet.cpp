// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// WatchProperty<int> @ 14cbdb260

int __thiscall
FWatchablePropertySet::WatchProperty<int>
          (FWatchablePropertySet *this,int *param_1,TFunction<void___cdecl(int_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<int> *this_00;
  TPropertyWatcher<int> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(int_const_&)> local_58;
  
  this_00 = ::operator_new(0xa0);
  pTVar4 = (TPropertyWatcher<int> *)0x0;
  if (this_00 != (TPropertyWatcher<int> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<int>::TPropertyWatcher<int><int,void>(this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<int> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// WatchProperty<FName> @ 14cbdb340

int __thiscall
FWatchablePropertySet::WatchProperty<FName>
          (FWatchablePropertySet *this,FName *param_1,
          TFunction<void___cdecl(FName_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<FName> *this_00;
  TPropertyWatcher<FName> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(FName_const_&)> local_58;
  
  this_00 = ::operator_new(0xa0);
  pTVar4 = (TPropertyWatcher<FName> *)0x0;
  if (this_00 != (TPropertyWatcher<FName> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<FName>::TPropertyWatcher<FName><FName,void>(this_00,param_1,&local_58)
    ;
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<FName> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// WatchProperty<FString> @ 14cbdb420

int __thiscall
FWatchablePropertySet::WatchProperty<FString>
          (FWatchablePropertySet *this,FString *param_1,
          TFunction<void___cdecl(FString_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<FString> *this_00;
  TPropertyWatcher<FString> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(FString_const_&)> local_58;
  
  this_00 = ::operator_new(0xb0);
  pTVar4 = (TPropertyWatcher<FString> *)0x0;
  if (this_00 != (TPropertyWatcher<FString> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<FString>::TPropertyWatcher<FString><FString,void>
                       (this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<FString> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// WatchProperty<double> @ 14cc1aa30

int __thiscall
FWatchablePropertySet::WatchProperty<double>
          (FWatchablePropertySet *this,double *param_1,
          TFunction<void___cdecl(double_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<double> *this_00;
  TPropertyWatcher<double> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(double_const_&)> local_58;
  
  this_00 = ::operator_new(0xb0);
  pTVar4 = (TPropertyWatcher<double> *)0x0;
  if (this_00 != (TPropertyWatcher<double> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<double>::TPropertyWatcher<double><double,void>
                       (this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<double> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// WatchProperty<FLinearColor> @ 14cc1ab10

int __thiscall
FWatchablePropertySet::WatchProperty<FLinearColor>
          (FWatchablePropertySet *this,FLinearColor *param_1,
          TFunction<void___cdecl(FLinearColor_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<FLinearColor> *this_00;
  TPropertyWatcher<FLinearColor> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(FLinearColor_const_&)> local_58;
  
  this_00 = ::operator_new(0xb0);
  pTVar4 = (TPropertyWatcher<FLinearColor> *)0x0;
  if (this_00 != (TPropertyWatcher<FLinearColor> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<FLinearColor>::TPropertyWatcher<FLinearColor><FLinearColor,void>
                       (this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<FLinearColor> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// SilentUpdateWatcherAtIndex @ 14cc80980

void __thiscall
FWatchablePropertySet::SilentUpdateWatcherAtIndex(FWatchablePropertySet *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  piVar1 = &(this->PropertyWatchers).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("i >= 0 && i < PropertyWatchers.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\InteractiveTool.h"
                         ,0xc9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cc80a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)
                 ((this->PropertyWatchers).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10))
            ();
  return;
}

// WatchProperty<TObjectPtr<UTexture2D>_> @ 14ccb9660

int __thiscall
FWatchablePropertySet::WatchProperty<TObjectPtr<UTexture2D>_>
          (FWatchablePropertySet *this,TObjectPtr<UTexture2D> *param_1,
          TFunction<void___cdecl(TObjectPtr<UTexture2D>_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TPropertyWatcher<TObjectPtr<UTexture2D>_> *this_00;
  TPropertyWatcher<TObjectPtr<UTexture2D>_> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(TObjectPtr<UTexture2D>_const_&)> local_58;
  
  this_00 = ::operator_new(0xb0);
  pTVar4 = (TPropertyWatcher<TObjectPtr<UTexture2D>_> *)0x0;
  if (this_00 != (TPropertyWatcher<TObjectPtr<UTexture2D>_> *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<TObjectPtr<UTexture2D>_>::
             TPropertyWatcher<TObjectPtr<UTexture2D>_><TObjectPtr<UTexture2D>,void>
                       (this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<TObjectPtr<UTexture2D>_> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// SilentUpdateWatched @ 14cd2e690

void __thiscall FWatchablePropertySet::SilentUpdateWatched(FWatchablePropertySet *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->PropertyWatchers).AllocatorInstance.Data;
  iVar2 = (this->PropertyWatchers).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PropertyWatchers).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x10))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// WatchProperty<enum_EPolyEditExtrudeDirection> @ 14cd4ea20

int __thiscall
FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDirection>
          (FWatchablePropertySet *this,EPolyEditExtrudeDirection *param_1,
          TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  void *this_00;
  TPropertyWatcher<EPolyEditExtrudeDirection> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(EPolyEditExtrudeDirection_const_&)> local_58;
  
  this_00 = ::operator_new(0xa0);
  pTVar4 = (TPropertyWatcher<EPolyEditExtrudeDirection> *)0x0;
  if (this_00 != (void *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<enum_EPolyEditExtrudeDirection>::
             TPropertyWatcher<enum_EPolyEditExtrudeDirection><enum_EPolyEditExtrudeDirection,void>
                       (this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<EPolyEditExtrudeDirection> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

// WatchProperty<enum_EPolyEditExtrudeDistanceMode> @ 14cd4eb00

int __thiscall
FWatchablePropertySet::WatchProperty<enum_EPolyEditExtrudeDistanceMode>
          (FWatchablePropertySet *this,EPolyEditExtrudeDistanceMode *param_1,
          TFunction<void___cdecl(EPolyEditExtrudeDistanceMode_const_&)> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  void *this_00;
  TPropertyWatcher<EPolyEditExtrudeDistanceMode> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TFunction<void___cdecl(EPolyEditExtrudeDistanceMode_const_&)> local_58;
  
  this_00 = ::operator_new(0xa0);
  pTVar4 = (TPropertyWatcher<EPolyEditExtrudeDistanceMode> *)0x0;
  if (this_00 != (void *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_2;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar5 = (undefined8 *)&param_2->field_0x10;
      if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
        puVar5 = *(undefined8 **)&param_2->field_0x28;
      }
      (**(code **)*puVar5)(puVar5,&local_58.field_0x10);
    }
    pTVar4 = TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode>::
             TPropertyWatcher<enum_EPolyEditExtrudeDistanceMode><enum_EPolyEditExtrudeDistanceMode,void>
                       (this_00,param_1,&local_58);
  }
  iVar3 = (this->PropertyWatchers).ArrayNum;
  piVar1 = &(this->PropertyWatchers).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  pFVar2 = (this->PropertyWatchers).AllocatorInstance.Data;
  (this->PropertyWatchers).ArrayNum = iVar3 + 1;
  *(TPropertyWatcher<EPolyEditExtrudeDistanceMode> **)(pFVar2 + (longlong)iVar3 * 8) = pTVar4;
  if (*(longlong *)param_2 != 0) {
    plVar6 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return iVar3;
}

