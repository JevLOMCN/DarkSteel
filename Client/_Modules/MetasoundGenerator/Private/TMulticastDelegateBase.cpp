// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 2

// Broadcast<IBaseDelegateInstance<void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>,FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>_> @ 14b2a2be0

void __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>),FDefaultTSDelegateUserPolicy>,FName,FName,FName,TSharedPtr<Metasound::IOutputStorage,1>_>
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,FName param_1,FName param_2,
          FName param_3,TSharedPtr<Metasound::IOutputStorage,1> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  IOutputStorage *local_38;
  TReferenceControllerBase<1> *local_30;
  
  if ((this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  bVar4 = false;
  if ((int)uVar8 < 0) {
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
  }
  else {
    lVar9 = (longlong)(int)uVar8 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar9 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar9), plVar2 == (longlong *)0x0)) {
LAB_14b2a2d09:
        bVar4 = true;
      }
      else {
        pcVar3 = *(code **)(*plVar2 + 0x68);
        local_38 = param_4->Object;
        local_30 = (param_4->SharedReferenceCount).ReferenceController;
        if (local_30 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar6 = (*pcVar3)(plVar2,param_1,param_2,param_3,&local_38);
        if (cVar6 == '\0') goto LAB_14b2a2d09;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
    this->InvocationListLockCount = this->InvocationListLockCount + -1;
    if (bVar4) {
      CompactInvocationList(this,false);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// Broadcast<IBaseDelegateInstance<void___cdecl(Metasound::FVertexInterfaceData),FDefaultTSDelegateUserPolicy>,Metasound::FVertexInterfaceData> @ 14b2a2d80

void __thiscall
TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(Metasound::FVertexInterfaceData),FDefaultTSDelegateUserPolicy>,Metasound::FVertexInterfaceData>
          (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this,FVertexInterfaceData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FInputBinding *pFVar4;
  FSubInterfaceLayout *pFVar5;
  FOutputBinding *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ForAnyElementType local_80;
  int local_78;
  int local_74;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  undefined1 local_60;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  if ((this == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar8 = false;
  uVar13 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar12 = (longlong)(int)uVar13 << 4;
    bVar8 = false;
    do {
      uVar11 = 0;
      if ((int)uVar13 < (this->InvocationList).ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar2 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar2 + lVar12 + 8) == 0) ||
         (plVar3 = *(longlong **)(pFVar2 + lVar12), plVar3 == (longlong *)0x0)) {
LAB_14b2a3001:
        bVar8 = true;
      }
      else {
        iVar1 = (param_1->InputVertexInterfaceData).Bindings.ArrayNum;
        pFVar4 = (FInputBinding *)
                 (param_1->InputVertexInterfaceData).Bindings.AllocatorInstance.Data;
        local_80.Data = (FScriptContainerElement *)0x0;
        pcVar7 = *(code **)(*plVar3 + 0x68);
        local_78 = iVar1;
        if (iVar1 == 0) {
          local_74 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar1,0,&local_80,iVar1,&local_74);
          ConstructItems<Metasound::VertexDataPrivate::FInputBinding,Metasound::VertexDataPrivate::FInputBinding,int>
                    (local_80.Data,pFVar4,iVar1);
        }
        iVar1 = (param_1->InputVertexInterfaceData).SubInterfaces.ArrayNum;
        pFVar5 = (FSubInterfaceLayout *)
                 (param_1->InputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data;
        local_70.Data = (FScriptContainerElement *)0x0;
        local_68 = iVar1;
        if (iVar1 == 0) {
          local_64 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar1,0,&local_70,iVar1,&local_64);
          ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
                    (local_70.Data,pFVar5,iVar1);
        }
        iVar1 = (param_1->OutputVertexInterfaceData).Bindings.ArrayNum;
        local_60 = (param_1->OutputVertexInterfaceData).bIsVertexInterfaceFrozen;
        pFVar6 = (FOutputBinding *)
                 (param_1->OutputVertexInterfaceData).Bindings.AllocatorInstance.Data;
        local_58.Data = (FScriptContainerElement *)0x0;
        local_50 = iVar1;
        if (iVar1 == 0) {
          local_4c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar1,0,&local_58,iVar1,&local_4c);
          ConstructItems<Metasound::VertexDataPrivate::FOutputBinding,Metasound::VertexDataPrivate::FOutputBinding,int>
                    (local_58.Data,pFVar6,iVar1);
        }
        iVar1 = (param_1->OutputVertexInterfaceData).SubInterfaces.ArrayNum;
        pFVar5 = (FSubInterfaceLayout *)
                 (param_1->OutputVertexInterfaceData).SubInterfaces.AllocatorInstance.Data;
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = iVar1;
        if (iVar1 == 0) {
          local_3c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar1,0,&local_48,iVar1,&local_3c);
          ConstructItems<Metasound::VertexPrivate::FSubInterfaceLayout,Metasound::VertexPrivate::FSubInterfaceLayout,int>
                    (local_48.Data,pFVar5,iVar1);
        }
        cVar10 = (*pcVar7)(plVar3);
        if (cVar10 == '\0') goto LAB_14b2a3001;
      }
      lVar12 = lVar12 + -0x10;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar8) {
    CompactInvocationList(this,false);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  Metasound::FVertexInterfaceData::~FVertexInterfaceData(param_1);
  return;
}

