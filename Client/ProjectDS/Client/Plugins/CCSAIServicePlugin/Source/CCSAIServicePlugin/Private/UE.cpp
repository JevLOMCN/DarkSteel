// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CCSAIServicePlugin
// Functions: 32

// Construct<FCCS_AICommandRequest> @ 14ac83330

void __cdecl UE::CoreUObject::Private::Construct<FCCS_AICommandRequest>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)param_1 = 5;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  return;
}

// ConstructForTests<FCCS_AICommandRequest> @ 14ac83370

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCCS_AICommandRequest>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(undefined1 *)param_1 = 5;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  ((TVector2<double>_u_0 *)((longlong)param_1 + 0x20))->_s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  return;
}

// Destruct<FCCS_AICommandRequest> @ 14ac833b0

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_AICommandRequest>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x50));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
    return;
  }
  return;
}

// Copy<FCCS_AICommandRequest> @ 14ac833f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCCS_AICommandRequest>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      FCCS_AICmd::operator=
                ((FCCS_AICmd *)((longlong)param_1 + 0x20),(FCCS_AICmd *)((longlong)param_2 + 0x20));
      *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x50),(FString *)((longlong)param_2 + 0x50));
      param_2 = (void *)((longlong)param_2 + 0x60);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x60);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCS_CharEntityRegistrationResponse> @ 14ac834a0

void __cdecl UE::CoreUObject::Private::Construct<FCCS_CharEntityRegistrationResponse>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)param_1 = 3;
  return;
}

// ConstructForTests<FCCS_CharEntityRegistrationResponse> @ 14ac834c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCCS_CharEntityRegistrationResponse>(void *param_1)

{
  *(undefined1 *)param_1 = 3;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FCCS_CharEntityRegistrationResponse> @ 14ac834e0

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_CharEntityRegistrationResponse>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FCCS_CharEntityRegistrationResponse> @ 14ac83500

bool __cdecl
UE::CoreUObject::Private::Copy<FCCS_CharEntityRegistrationResponse>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + lVar1 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x14);
      ::FString::operator=
                ((FString *)((longlong)param_1 + 0x18),(FString *)((longlong)param_1 + lVar1 + 0x18)
                );
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCS_LogoutRequest> @ 14ac83580

void __cdecl UE::CoreUObject::Private::Construct<FCCS_LogoutRequest>(void *param_1)

{
  *(undefined1 *)param_1 = 6;
  return;
}

// ConstructForTests<FCCS_LogoutRequest> @ 14ac83590

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCCS_LogoutRequest>(void *param_1)

{
  *(undefined1 *)param_1 = 6;
  return;
}

// Destruct<FCCS_LogoutRequest> @ 14ac835a0

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_LogoutRequest>(void *param_1)

{
  return;
}

// Copy<FCCS_LogoutRequest> @ 14ac835b0

bool __cdecl
UE::CoreUObject::Private::Copy<FCCS_LogoutRequest>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCS_LoginRequest> @ 14ac83660

void __cdecl UE::CoreUObject::Private::Construct<FCCS_LoginRequest>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FCCS_LoginRequest> @ 14ac83680

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCCS_LoginRequest>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCCS_LoginRequest> @ 14ac836a0

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_LoginRequest>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FCCS_LoginRequest> @ 14ac836c0

bool __cdecl
UE::CoreUObject::Private::Copy<FCCS_LoginRequest>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_2 + 8)) {
        iVar3 = *(int *)((longlong)param_2 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = ((ForAnyElementType *)((longlong)param_2 + 8))->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar3;
        if ((iVar3 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,*piVar1,pFVar4,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar4->Data,_Src,(longlong)iVar3 << 2);
          }
        }
      }
      puVar2 = (undefined1 *)((longlong)param_2 + 0x18);
      param_2 = (void *)((longlong)param_2 + 0x20);
      *(undefined1 *)((longlong)param_1 + 0x18) = *puVar2;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCS_AICmd> @ 14ac838d0

void __cdecl UE::CoreUObject::Private::Construct<FCCS_AICmd>(void *param_1)

{
  TVector2<double> TVar1;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(TVector2<double>_u_0 *)param_1 = TVar1.field0_0x0;
  return;
}

// ConstructForTests<FCCS_AICmd> @ 14ac83900

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCCS_AICmd>(void *param_1)

{
  TVector2<double> TVar1;
  
  TVar1.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  *(TVector2<double>_u_0 *)param_1 = TVar1.field0_0x0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FCCS_AICmd> @ 14ac83920

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_AICmd>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x18);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FCCS_AICmd> @ 14ac839c0

bool __cdecl UE::CoreUObject::Private::Copy<FCCS_AICmd>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined8 uVar3;
  ForAnyElementType *pFVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      pFVar5 = (ForAnyElementType *)((longlong)param_1 + 0x18);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + lVar6 + 0x18);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar6 + 0x10);
      if (pFVar5 != pFVar4) {
        iVar2 = *(int *)((longlong)param_1 + lVar6 + 0x20);
        piVar1 = (int *)((longlong)param_1 + 0x24);
        _Src = pFVar4->Data;
        *(int *)((longlong)param_1 + 0x20) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,1,iVar2,*piVar1,pFVar5,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar2 * 2);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x28);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCS_AIInput> @ 14ac83ec0

void __cdecl UE::CoreUObject::Private::Construct<FCCS_AIInput>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// ConstructForTests<FCCS_AIInput> @ 14ac83ed0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCCS_AIInput>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  return;
}

// Destruct<FCCS_AIInput> @ 14ac83ee0

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_AIInput>(void *param_1)

{
  return;
}

// Copy<FCCS_AIInput> @ 14ac83f30

bool __cdecl UE::CoreUObject::Private::Copy<FCCS_AIInput>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined2 *)param_1 = *(undefined2 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 2);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCS_AIRequest> @ 14ac844b0

void __cdecl UE::CoreUObject::Private::Construct<FCCS_AIRequest>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined1 *)param_1 = 4;
  return;
}

// ConstructForTests<FCCS_AIRequest> @ 14ac844d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCCS_AIRequest>(void *param_1)

{
  *(undefined1 *)param_1 = 4;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCCS_AIRequest> @ 14ac844f0

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_AIRequest>(void *param_1)

{
  return;
}

// Copy<FCCS_AIRequest> @ 14ac84500

bool __cdecl UE::CoreUObject::Private::Copy<FCCS_AIRequest>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCCS_CharEntityRegistrationRequest> @ 14ac84540

void __cdecl UE::CoreUObject::Private::Construct<FCCS_CharEntityRegistrationRequest>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined1 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FCCS_CharEntityRegistrationRequest> @ 14ac84570

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCCS_CharEntityRegistrationRequest>(void *param_1)

{
  *(undefined1 *)param_1 = 2;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FCCS_CharEntityRegistrationRequest> @ 14ac84590

void __cdecl UE::CoreUObject::Private::Destruct<FCCS_CharEntityRegistrationRequest>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FCCS_CharEntityRegistrationRequest> @ 14ac845b0

bool __cdecl
UE::CoreUObject::Private::Copy<FCCS_CharEntityRegistrationRequest>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_1 + lVar1 + 8);
      TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
                 (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

