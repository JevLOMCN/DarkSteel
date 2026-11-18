// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// <lambda_invoker_cdecl> @ 148077520

bool __cdecl `FObjectPropertyTrace::Init'::__l2::<lambda_1>::<lambda_invoker_cdecl>(float param_1)

{
  if (-1 < ObjectProperties->Enabled) {
    ObjectPropertyTrace::TraceObjects();
  }
  return true;
}

// Destroy @ 14809df90

void __cdecl FObjectPropertyTrace::Destroy(void)

{
  code *pcVar1;
  bool bVar2;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  if (((ObjectPropertyTrace::TickerHandle.Object == (FElement *)0x0) ||
      (ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     ((int)(ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController)->
           SharedReferenceCount < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ObjectPropertyTrace::TickerHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectPropertyTrace.cpp"
                       ,0x134,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.WeakReferenceCount.ReferenceController =
       ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController;
  local_18.Object = ObjectPropertyTrace::TickerHandle.Object;
  if (ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController)->
               WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  return;
}

// Init @ 1480ae8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FObjectPropertyTrace::Init(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  FWeakReferencer<1> FVar4;
  bool bVar5;
  FTSTicker *this;
  TWeakPtr<FTSTicker::FElement,1> *pTVar6;
  undefined ***pppuVar7;
  undefined1 auStackY_88 [32];
  TWeakPtr<FTSTicker::FElement,1> local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if (((ObjectPropertyTrace::TickerHandle.Object != (FElement *)0x0) &&
      (ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController !=
       (TReferenceControllerBase<1> *)0x0)) &&
     (0 < (int)(ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController)->
               SharedReferenceCount)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ObjectPropertyTrace::TickerHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ObjectPropertyTrace.cpp"
                       ,0x126,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this = FTSTicker::GetCoreTicker();
  local_20 = (undefined ***)0x0;
  local_38 = &___7__TFunction_OwnedObject_P6A_NM_Z_00_0A__Function_Private_Core_UE__6B_;
  local_30 = `FObjectPropertyTrace::Init'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_48[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(float),bool,float>::
                Call;
  pTVar6 = FTSTicker::AddTicker
                     (this,&local_58,L"ObjectPropertyTrace",0.0,
                      (TUniqueFunction<bool___cdecl(float)> *)local_48);
  if (pTVar6 != &ObjectPropertyTrace::TickerHandle) {
    ObjectPropertyTrace::TickerHandle.Object = pTVar6->Object;
    pTVar6->Object = (FElement *)0x0;
    FVar4 = ObjectPropertyTrace::TickerHandle.WeakReferenceCount;
    ObjectPropertyTrace::TickerHandle.WeakReferenceCount.ReferenceController =
         (pTVar6->WeakReferenceCount).ReferenceController;
    (pTVar6->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(FVar4.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((FVar4.ReferenceController)->_padding_ + 8))(FVar4.ReferenceController,1);
      }
    }
  }
  if (local_58.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_58.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_58.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_58.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_48[0] != (code *)0x0) {
    pppuVar7 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar7 = local_20;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  return;
}

// IsEnabled @ 1480b3850

bool __cdecl FObjectPropertyTrace::IsEnabled(void)

{
  return (bool)((byte)((uint)ObjectProperties->Enabled >> 0x1f) ^ 1);
}

// IsObjectRegistered @ 1480b3d90

bool __cdecl FObjectPropertyTrace::IsObjectRegistered(UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  ForAnyElementType this;
  
  pFVar1 = ObjectPropertyTrace::Objects.AllocatorInstance.Data +
           (longlong)ObjectPropertyTrace::Objects.ArrayNum * 8;
  this.Data = ObjectPropertyTrace::Objects.AllocatorInstance.Data;
  while( true ) {
    if (this.Data == pFVar1) {
      return false;
    }
    bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)this.Data,param_1);
    if (bVar2) break;
    this.Data = this.Data + 8;
  }
  return true;
}

// RegisterObject @ 1480c4890

void __cdecl FObjectPropertyTrace::RegisterObject(UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  longlong lVar5;
  ForAnyElementType this;
  UObject *local_res8;
  FWeakObjectPtr local_18 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_18[0].ObjectIndex = 0;
  local_18[0].ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res8);
  FVar3 = ObjectPropertyTrace::Objects.AllocatorInstance;
  pFVar1 = ObjectPropertyTrace::Objects.AllocatorInstance.Data +
           (longlong)ObjectPropertyTrace::Objects.ArrayNum * 8;
  this = ObjectPropertyTrace::Objects.AllocatorInstance;
  do {
    if (this.Data == pFVar1) {
LAB_1480c4942:
      if (((ObjectPropertyTrace::Objects.AllocatorInstance.Data <= local_18) &&
          (local_18 <
           (FWeakObjectPtr *)
           (ObjectPropertyTrace::Objects.AllocatorInstance.Data +
           (longlong)ObjectPropertyTrace::Objects.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (ObjectPropertyTrace::Objects.ArrayNum == ObjectPropertyTrace::Objects.ArrayMax) {
        ObjectPropertyTrace::Objects.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&ObjectPropertyTrace::Objects.AllocatorInstance,
                        &ObjectPropertyTrace::Objects.ArrayMax);
      }
      lVar5 = (longlong)ObjectPropertyTrace::Objects.ArrayNum;
      ObjectPropertyTrace::Objects.ArrayNum = ObjectPropertyTrace::Objects.ArrayNum + 1;
      *(FWeakObjectPtr *)(ObjectPropertyTrace::Objects.AllocatorInstance.Data + lVar5 * 8) =
           local_18[0];
      return;
    }
    bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)this.Data,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_18);
    if (bVar4) {
      if ((int)((longlong)this.Data - (longlong)FVar3.Data >> 3) != -1) {
        return;
      }
      goto LAB_1480c4942;
    }
    this.Data = this.Data + 8;
  } while( true );
}

// ToggleObjectRegistration @ 1480dc4f0

void __cdecl FObjectPropertyTrace::ToggleObjectRegistration(UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  ForAnyElementType FVar10;
  int iVar11;
  UObject *local_res8;
  UObject *local_res10;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  
  pFVar1 = ObjectPropertyTrace::Objects.AllocatorInstance.Data +
           (longlong)ObjectPropertyTrace::Objects.ArrayNum * 8;
  for (FVar10.Data = ObjectPropertyTrace::Objects.AllocatorInstance.Data; FVar10.Data != pFVar1;
      FVar10.Data = FVar10.Data + 8) {
    bVar6 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)FVar10.Data,param_1);
    if (bVar6) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      iVar11 = 0;
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_res8 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res8);
      if (((ObjectPropertyTrace::Objects.AllocatorInstance.Data <= &local_38) &&
          (&local_38 <
           (FWeakObjectPtr *)
           (ObjectPropertyTrace::Objects.AllocatorInstance.Data +
           (longlong)ObjectPropertyTrace::Objects.ArrayMax * 8))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = ObjectPropertyTrace::Objects.ArrayNum;
      FVar10.Data = ObjectPropertyTrace::Objects.AllocatorInstance.Data;
      if (ObjectPropertyTrace::Objects.ArrayNum == 0) {
        return;
      }
      bVar6 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                         ObjectPropertyTrace::Objects.AllocatorInstance.Data,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_38);
      bVar6 = !bVar6;
      iVar9 = iVar11;
      do {
        iVar3 = iVar9;
        do {
          iVar3 = iVar3 + 1;
          if (iVar5 <= iVar3) break;
          bVar7 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                             (FVar10.Data + (longlong)iVar3 * 8),
                             (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_38);
        } while (bVar6 == !bVar7);
        if (bVar6 != false) {
          if (iVar11 != iVar9) {
            memmove(FVar10.Data + (longlong)iVar11 * 8,FVar10.Data + (longlong)iVar9 * 8,
                    (longlong)(iVar3 - iVar9) << 3);
          }
          iVar11 = iVar11 + (iVar3 - iVar9);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar9 = iVar3;
        if (iVar5 <= iVar3) {
          ObjectPropertyTrace::Objects.ArrayNum = iVar11;
          return;
        }
      } while( true );
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  local_30.ObjectIndex = 0;
  local_30.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_30,(FObjectPtr)&local_res10);
  FVar4 = ObjectPropertyTrace::Objects.AllocatorInstance;
  pFVar1 = ObjectPropertyTrace::Objects.AllocatorInstance.Data +
           (longlong)ObjectPropertyTrace::Objects.ArrayNum * 8;
  FVar10 = ObjectPropertyTrace::Objects.AllocatorInstance;
  do {
    if (FVar10.Data == pFVar1) {
LAB_1480dc766:
      if (((ObjectPropertyTrace::Objects.AllocatorInstance.Data <= &local_30) &&
          (&local_30 <
           (FWeakObjectPtr *)
           (ObjectPropertyTrace::Objects.AllocatorInstance.Data +
           (longlong)ObjectPropertyTrace::Objects.ArrayMax * 8))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (ObjectPropertyTrace::Objects.ArrayNum == ObjectPropertyTrace::Objects.ArrayMax) {
        ObjectPropertyTrace::Objects.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&ObjectPropertyTrace::Objects.AllocatorInstance,
                        &ObjectPropertyTrace::Objects.ArrayMax);
      }
      lVar8 = (longlong)ObjectPropertyTrace::Objects.ArrayNum;
      ObjectPropertyTrace::Objects.ArrayNum = ObjectPropertyTrace::Objects.ArrayNum + 1;
      *(FWeakObjectPtr *)(ObjectPropertyTrace::Objects.AllocatorInstance.Data + lVar8 * 8) =
           local_30;
      return;
    }
    bVar6 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)FVar10.Data,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_30);
    if (bVar6) {
      if ((int)((longlong)FVar10.Data - (longlong)FVar4.Data >> 3) != -1) {
        return;
      }
      goto LAB_1480dc766;
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// UnregisterObject @ 1480e0450

void __cdecl FObjectPropertyTrace::UnregisterObject(UObject *param_1)

{
  code *pcVar1;
  int iVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UObject *local_res8;
  FWeakObjectPtr local_38 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  iVar9 = 0;
  local_38[0].ObjectIndex = 0;
  local_38[0].ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(local_38,(FObjectPtr)&local_res8);
  if (((ObjectPropertyTrace::Objects.AllocatorInstance.Data <= local_38) &&
      (local_38 <
       (FWeakObjectPtr *)
       (ObjectPropertyTrace::Objects.AllocatorInstance.Data +
       (longlong)ObjectPropertyTrace::Objects.ArrayMax * 8))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = ObjectPropertyTrace::Objects.ArrayNum;
  FVar3.Data = ObjectPropertyTrace::Objects.AllocatorInstance.Data;
  iVar5 = ObjectPropertyTrace::Objects.ArrayNum;
  if (ObjectPropertyTrace::Objects.ArrayNum != 0) {
    bVar6 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                       ObjectPropertyTrace::Objects.AllocatorInstance.Data,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_38);
    bVar6 = !bVar6;
    iVar8 = iVar9;
    do {
      iVar2 = iVar8;
      do {
        iVar2 = iVar2 + 1;
        if (iVar4 <= iVar2) break;
        bVar7 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                          ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)
                           (FVar3.Data + (longlong)iVar2 * 8),
                           (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)local_38);
      } while (bVar6 == !bVar7);
      if (bVar6 != false) {
        if (iVar9 != iVar8) {
          memmove(FVar3.Data + (longlong)iVar9 * 8,FVar3.Data + (longlong)iVar8 * 8,
                  (longlong)(iVar2 - iVar8) << 3);
        }
        iVar9 = iVar9 + (iVar2 - iVar8);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar2;
      iVar5 = iVar9;
    } while (iVar2 < iVar4);
  }
  ObjectPropertyTrace::Objects.ArrayNum = iVar5;
  return;
}

