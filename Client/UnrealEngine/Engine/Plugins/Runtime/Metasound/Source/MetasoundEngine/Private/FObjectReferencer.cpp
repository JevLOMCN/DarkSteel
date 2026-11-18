// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 5

// FObjectReferencer @ 14b34a940

FObjectReferencer * __thiscall
Metasound::Engine::FModule::FObjectReferencer::FObjectReferencer(FObjectReferencer *this)

{
  this->_padding_ = (longlong)&___7IObjectReferencer_INodeClassRegistry_Frontend_Metasound__6B_;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)&this->_padding_);
  this->_padding_ =
       (longlong)&_vftable__for__Metasound__Frontend__INodeClassRegistry__IObjectReferencer__;
  this->_padding_ = (longlong)&_vftable__for__FGCObject__;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->ObjectArrayCriticalSection,4000);
  (this->ObjectArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectArray).ArrayNum = 0;
  (this->ObjectArray).ArrayMax = 0;
  return this;
}

// AddObject @ 14b364640

void __thiscall
Metasound::Engine::FModule::FObjectReferencer::AddObject(FObjectReferencer *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_18 [2];
  
  lpCriticalSection = &this->ObjectArrayCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_18[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar2 = (this->ObjectArray).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->ObjectArray).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ObjectArray).ArrayNum;
  piVar1 = &(this->ObjectArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ObjectArray).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->ObjectArray).AllocatorInstance.Data;
  (this->ObjectArray).ArrayNum = iVar5 + 1;
  *(UObject **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
                    /* WARNING: Could not recover jumptable at 0x00014b36474c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// AddReferencedObjects @ 14b365300

void __thiscall
Metasound::Engine::FModule::FObjectReferencer::AddReferencedObjects
          (FObjectReferencer *this,FReferenceCollector *param_1)

{
  longlong *lpCriticalSection;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (**(code **)(param_1->_padding_ + 0x90))
              (param_1,(this->ObjectArrayCriticalSection).CriticalSection.Opaque3[2],
               *(undefined4 *)&(this->ObjectArray).AllocatorInstance.Data,0,0);
                    /* WARNING: Could not recover jumptable at 0x00014b365359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetReferencerName @ 14b3bfe10

FString * __thiscall
Metasound::Engine::FModule::FObjectReferencer::GetReferencerName
          (FObjectReferencer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMetasoundEngineModule::FObjectReferencer");
  return __return_storage_ptr__;
}

// RemoveObject @ 14b3d50e0

void __thiscall
Metasound::Engine::FModule::FObjectReferencer::RemoveObject
          (FObjectReferencer *this,UObject *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  UObject *local_48 [2];
  
  lpCriticalSection = &this->ObjectArrayCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_48[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar2 = (this->ObjectArray).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
      ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)(this->ObjectArray).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->ObjectArray).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->ObjectArray).AllocatorInstance.Data;
    bVar4 = *(UObject **)pFVar2 != local_48[0];
    lVar8 = 0;
    pUVar5 = local_48[0];
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar8 = lVar8 + 1;
        iVar7 = iVar7 + 1;
        if (iVar1 <= lVar8) break;
      } while (bVar4 == (*(UObject **)(pFVar2 + lVar8 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar6) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
          pUVar5 = local_48[0];
        }
        iVar9 = iVar9 + (iVar7 - iVar6);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar6 = iVar7;
    } while (lVar8 < iVar1);
    (this->ObjectArray).ArrayNum = iVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00014b3d527c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

