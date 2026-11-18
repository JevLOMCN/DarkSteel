// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 25

// StaticClass @ 149ce4320

UClass * __cdecl UPCGMatchAndSetWeighted::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetWeighted",
               &Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetWeighted,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMatchAndSetWeighted>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetWeighted>,local_res8,
               UPCGMatchAndSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.InnerSingleton;
}

// operator()<int> @ 149ceae40

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<int>
          (void *this,int param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<int,int> local_68;
  TArrayView<int_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    local_88 = local_98.Data + (longlong)iVar10 * 4;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    *(undefined4 *)local_88 = 0;
    local_68.DataPtr = (int *)local_88;
    IPCGAttributeAccessor::GetRange<int>(pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar10 * 0x211f54f + 0x1b0cb1a7U ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uStack_70 = 1;
      local_78 = local_98.Data + (longlong)(int)uVar16 * 4;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (int *)local_78;
      IPCGAttributeAccessor::SetRange<int>(pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<float> @ 149cee8c0

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<float>
          (void *this,float param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    local_88 = local_98.Data + (longlong)iVar10 * 4;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    *(undefined4 *)local_88 = 0;
    local_68.DataPtr = (float *)local_88;
    IPCGAttributeAccessor::GetRange<float>(pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar10 * 0x211f54f + 0x1b0cb1a7U ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uStack_70 = 1;
      local_78 = local_98.Data + (longlong)(int)uVar16 * 4;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (float *)local_78;
      IPCGAttributeAccessor::SetRange<float>(pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<double> @ 149cf2340

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<double>
          (void *this,double param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<double,int> local_68;
  TArrayView<double_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    local_88 = local_98.Data + (longlong)iVar10 * 8;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    *(undefined8 *)local_88 = 0;
    local_68.DataPtr = (double *)local_88;
    IPCGAttributeAccessor::GetRange<double>(pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar10 * 0x211f54f + 0x1b0cb1a7U ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uStack_70 = 1;
      local_78 = local_98.Data + (longlong)(int)uVar16 * 8;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (double *)local_78;
      IPCGAttributeAccessor::SetRange<double>(pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<UE::Math::TQuat<double>_> @ 149cf5fc0

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TQuat<double>_>(void *this,TQuat<double> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  TQuat<double> *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TQuat<double> *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<UE::Math::TQuat<double>,int> local_68;
  TArrayView<UE::Math::TQuat<double>_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1020,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    local_88 = (TQuat<double> *)(local_98.Data + (longlong)iVar10 * 0x20);
    uStack_80 = 1;
    local_88->X = 0.0;
    local_88->Y = 0.0;
    local_88->Z = 0.0;
    local_88->W = 0.0;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    local_68.DataPtr = local_88;
    IPCGAttributeAccessor::GetRange<UE::Math::TQuat<double>_>
              (pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x211f54f + 0x1b0cb1a7U ^
                   *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_78 = (TQuat<double> *)(local_98.Data + (longlong)(int)uVar16 * 0x20);
      uStack_70 = 1;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = local_78;
      IPCGAttributeAccessor::SetRange<UE::Math::TQuat<double>_>
                (pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<UE::Math::TRotator<double>_> @ 149cf9cd0

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TRotator<double>_>(void *this,TRotator<double> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  TRotator<double> *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TRotator<double> *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<UE::Math::TRotator<double>,int> local_68;
  TArrayView<UE::Math::TRotator<double>_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    *(undefined8 *)(local_98.Data + (longlong)iVar10 * 0x18) = 0;
    *(undefined8 *)(local_98.Data + (longlong)iVar10 * 0x18 + 8) = 0;
    local_88 = (TRotator<double> *)(local_98.Data + (longlong)iVar10 * 0x18);
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    local_88->Roll = 0.0;
    local_68.DataPtr = local_88;
    IPCGAttributeAccessor::GetRange<UE::Math::TRotator<double>_>
              (pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x211f54f + 0x1b0cb1a7U ^
                   *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uStack_70 = 1;
      local_78 = (TRotator<double> *)(local_98.Data + (longlong)(int)uVar16 * 0x18);
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = local_78;
      IPCGAttributeAccessor::SetRange<UE::Math::TRotator<double>_>
                (pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<UE::Math::TTransform<double>_> @ 149cfe1b0

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TTransform<double>_>(void *this,TTransform<double> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  __m128 _Var10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  TTransform<double> *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TTransform<double> *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<UE::Math::TTransform<double>,int> local_68;
  TArrayView<UE::Math::TTransform<double>_const_,int> local_58 [2];
  
  uVar16 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar21 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if (0 < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar21,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar16 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar17 = (undefined8 *)*plVar2;
  lVar20 = plVar2[1];
  puVar1 = puVar17 + (int)lVar20;
  while( true ) {
    iVar13 = (int)uVar16;
    if ((int)plVar2[1] != (int)lVar20) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar13 = (int)local_90;
    }
    if (puVar17 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar17;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar13 == local_90._4_4_) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1060,&local_98,(int *)((longlong)&local_90 + 4));
    }
    fVar7 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar9 = GlobalVectorConstants::Float0001.m128_f32[3];
    local_90 = CONCAT44(local_90._4_4_,iVar13 + 1);
    uStack_80 = 1;
    local_88 = (TTransform<double> *)(local_98.Data + (longlong)iVar13 * 0x60);
    (local_88->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (local_88->Rotation).XY.m128d_f64[1] = (double)fVar7;
    (local_88->Rotation).ZW.m128d_f64[0] = (double)fVar8;
    (local_88->Rotation).ZW.m128d_f64[1] = (double)fVar9;
    _Var10 = GlobalVectorConstants::FloatZero;
    fVar7 = GlobalVectorConstants::FloatZero.m128_f32[1];
    (local_88->Translation).XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (local_88->Translation).XY.m128d_f64[1] = (double)fVar7;
    (local_88->Translation).ZW.m128d_f64[0] = (double)_Var10.m128_f32[2];
    (local_88->Translation).ZW.m128d_f64[1] = (double)_Var10.m128_f32[3];
    fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar8 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar9 = GlobalVectorConstants::Float1110.m128_f32[3];
    (local_88->Scale3D).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (local_88->Scale3D).XY.m128d_f64[1] = (double)fVar7;
    (local_88->Scale3D).ZW.m128d_f64[0] = (double)fVar8;
    (local_88->Scale3D).ZW.m128d_f64[1] = (double)fVar9;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    local_68.DataPtr = local_88;
    IPCGAttributeAccessor::GetRange<UE::Math::TTransform<double>_>
              (pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar16 = local_90 & 0xffffffff;
    puVar17 = puVar17 + 1;
  }
  uVar21 = 0;
  iVar13 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar13;
  if (0 < iVar13) {
    lVar20 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar15 = (longlong *)*plVar2;
      uVar19 = 0;
      if ((int)uVar21 < (int)plVar15[1]) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      lVar18 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar19 = *(uint *)(*plVar15 + 0xc4 + lVar20);
      if (lVar18 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar15 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar13 = (**(code **)(*plVar15 + 0x10))(plVar15);
          uVar19 = iVar13 * 0x45c282b + 0x1b0cb1bbU ^ uVar19 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar19 = uVar19 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar19 = *(int *)(lVar18 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar19;
        }
        else {
          plVar15 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar13 = (**(code **)(*plVar15 + 0x10))(plVar15);
          uVar19 = *(int *)(lVar18 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar13 * 0x211f54f + 0x1b0cb1a7U ^ uVar19;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar13 = 0;
      }
      else {
        iVar13 = (int)(((float)(uVar19 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar15 = (longlong *)plVar2[3];
      uVar19 = 0;
      if (0 < (int)plVar15[1]) {
        lVar18 = 0;
        do {
          uVar14 = 0;
          if ((int)uVar19 < (int)plVar15[1]) {
            uVar14 = ~uVar19 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar6 = (code *)swi(3);
            uVar12 = (*pcVar6)();
            return (bool)uVar12;
          }
          if (iVar13 < *(int *)(lVar18 + *plVar15)) break;
          plVar15 = (longlong *)plVar2[3];
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 4;
        } while ((int)uVar19 < (int)plVar15[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar14 = 0;
      if ((int)uVar19 < (int)local_90) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        uVar12 = (*pcVar6)();
        return (bool)uVar12;
      }
      uStack_70 = 1;
      local_78 = (TTransform<double> *)(local_98.Data + (longlong)(int)uVar19 * 0x60);
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = local_78;
      IPCGAttributeAccessor::SetRange<UE::Math::TTransform<double>_>
                (pIVar3,local_58,uVar21,pIVar4,AllowBroadcast);
      uVar21 = uVar21 + 1;
      lVar20 = lVar20 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<UE::Math::TVector2<double>_> @ 149d01dc0

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TVector2<double>_>(void *this,TVector2<double> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<UE::Math::TVector2<double>,int> local_68;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_88 = local_98.Data + (longlong)iVar10 * 0x10;
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    *(undefined8 *)local_88 = 0;
    *(undefined8 *)(local_88 + 8) = 0;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    local_68.DataPtr = (TVector2<double> *)local_88;
    IPCGAttributeAccessor::GetRange<UE::Math::TVector2<double>_>
              (pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x211f54f + 0x1b0cb1a7U ^
                   *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_78 = local_98.Data + (longlong)(int)uVar16 * 0x10;
      uStack_70 = 1;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (TVector2<double> *)local_78;
      IPCGAttributeAccessor::SetRange<UE::Math::TVector2<double>_>
                (pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<UE::Math::TVector4<double>_> @ 149d05b80

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TVector4<double>_>(void *this,TVector4<double> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  uint local_90;
  uint local_8c;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<UE::Math::TVector4<double>,int> local_68;
  TArrayView<UE::Math::TVector4<double>_const_,int> local_58 [2];
  
  uVar17 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_8c = 0;
  uVar10 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  uVar14 = uVar17;
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar10,&local_98,0,(int *)&local_8c);
    uVar14 = (ulonglong)local_90;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar15 = (undefined8 *)*plVar2;
  lVar16 = plVar2[1];
  puVar1 = puVar15 + (int)lVar16;
  while( true ) {
    uVar10 = (uint)uVar14;
    if ((int)plVar2[1] != (int)lVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      uVar10 = local_90;
    }
    if (puVar15 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar15;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (uVar10 == local_8c) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1020,&local_98,(int *)&local_8c);
    }
    local_90 = uVar10 + 1;
    local_88 = local_98.Data + (longlong)(int)uVar10 * 0x20;
    uStack_80 = 1;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    *(undefined8 *)local_88 = 0;
    *(undefined8 *)(local_88 + 8) = 0;
    *(undefined8 *)(local_88 + 0x10) = 0;
    *(undefined8 *)(local_88 + 0x18) = 0x3ff0000000000000;
    local_68.DataPtr = (TVector4<double> *)local_88;
    IPCGAttributeAccessor::GetRange<UE::Math::TVector4<double>_>
              (pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar14 = (ulonglong)local_90;
    puVar15 = puVar15 + 1;
  }
  iVar11 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar11;
  uVar14 = uVar17;
  if (0 < iVar11) {
    do {
      plVar2 = *(longlong **)this;
      uVar18 = (uint)uVar14;
      plVar13 = (longlong *)*plVar2;
      uVar10 = 0;
      if ((int)uVar18 < (int)plVar13[1]) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar16 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar10 = *(uint *)(*plVar13 + 0xc4 + uVar17);
      if (lVar16 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar13 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar11 = (**(code **)(*plVar13 + 0x10))(plVar13);
          uVar10 = iVar11 * 0x45c282b + 0x1b0cb1bbU ^ uVar10 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar10 = uVar10 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar10 = *(int *)(lVar16 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar10;
        }
        else {
          plVar13 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar11 = (**(code **)(*plVar13 + 0x10))(plVar13);
          uVar10 = iVar11 * 0x211f54f + 0x1b0cb1a7U ^
                   *(int *)(lVar16 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar10;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar11 = 0;
      }
      else {
        iVar11 = (int)(((float)(uVar10 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar13 = (longlong *)plVar2[3];
      uVar10 = 0;
      if (0 < (int)plVar13[1]) {
        lVar16 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar10 < (int)plVar13[1]) {
            uVar12 = ~uVar10 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar11 < *(int *)(lVar16 + *plVar13)) break;
          plVar13 = (longlong *)plVar2[3];
          uVar10 = uVar10 + 1;
          lVar16 = lVar16 + 4;
        } while ((int)uVar10 < (int)plVar13[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar12 = 0;
      if ((int)uVar10 < (int)local_90) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_78 = local_98.Data + (longlong)(int)uVar10 * 0x20;
      uStack_70 = 1;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (TVector4<double> *)local_78;
      IPCGAttributeAccessor::SetRange<UE::Math::TVector4<double>_>
                (pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar17 = uVar17 + 0xd0;
      local_res18 = local_res18 + -1;
      uVar14 = (ulonglong)(uVar18 + 1);
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<UE::Math::TVector<double>_> @ 149d09ad0

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
operator()<UE::Math::TVector<double>_>(void *this,TVector<double> *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<UE::Math::TVector<double>,int> local_68;
  TArrayView<UE::Math::TVector<double>_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    *(undefined8 *)(local_98.Data + (longlong)iVar10 * 0x18) = 0;
    *(undefined8 *)(local_98.Data + (longlong)iVar10 * 0x18 + 8) = 0;
    local_88 = local_98.Data + (longlong)iVar10 * 0x18;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    *(undefined8 *)(local_88 + 0x10) = 0;
    local_68.DataPtr = (TVector<double> *)local_88;
    IPCGAttributeAccessor::GetRange<UE::Math::TVector<double>_>
              (pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x211f54f + 0x1b0cb1a7U ^
                   *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uStack_70 = 1;
      local_78 = local_98.Data + (longlong)(int)uVar16 * 0x18;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (TVector<double> *)local_78;
      IPCGAttributeAccessor::SetRange<UE::Math::TVector<double>_>
                (pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<FSoftClassPath> @ 149d0db80

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<FSoftClassPath>
          (void *this,FSoftClassPath *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FSoftClassPath *local_res10;
  longlong local_res18;
  longlong local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FSoftClassPath *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FSoftClassPath *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TArrayView<FSoftClassPath,int> local_78;
  TArrayView<FSoftClassPath_const_,int> local_68 [2];
  
  uVar17 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  local_res10 = param_1;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar18,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    uVar17 = local_a0 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar15 = plVar2[1];
  puVar1 = puVar14 + (int)lVar15;
  while( true ) {
    iVar11 = (int)uVar17;
    if ((int)plVar2[1] != (int)lVar15) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar11 = (int)local_a0;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar11 == local_a0._4_4_) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_a8,(int *)((longlong)&local_a0 + 4));
    }
    local_98 = (FSoftClassPath *)(local_a8.Data + (longlong)iVar11 * 0x20);
    local_a0 = CONCAT44(local_a0._4_4_,iVar11 + 1);
    uStack_90 = 1;
    local_78._12_4_ = uStack_8c;
    local_78.ArrayNum = 1;
    *(undefined8 *)local_98 = 0;
    *(undefined8 *)&local_98->field_0x8 = 0;
    *(undefined8 *)&local_98->field_0x10 = 0;
    *(undefined8 *)&local_98->field_0x18 = 0;
    local_78.DataPtr = local_98;
    IPCGAttributeAccessor::GetRange<FSoftClassPath>(pIVar3,&local_78,0,pIVar4,AllowBroadcast);
    uVar17 = local_a0 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar11 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar8 = __real_3f800000;
  local_res20 = (longlong)iVar11;
  if (0 < iVar11) {
    local_res18 = 0;
    do {
      lVar15 = local_res18;
      plVar2 = *(longlong **)this;
      plVar13 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar13[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      lVar5 = plVar2[1];
      plVar6 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar13 + 0xc4 + lVar15);
      if (lVar5 == 0) {
        if (plVar6 != (longlong *)0x0) {
          plVar13 = (longlong *)(**(code **)(*plVar6 + 0x10))();
          iVar11 = (**(code **)(*plVar13 + 0x10))(plVar13);
          uVar16 = iVar11 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar6 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar5 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar13 = (longlong *)(**(code **)(*plVar6 + 0x10))();
          iVar11 = (**(code **)(*plVar13 + 0x10))(plVar13);
          uVar16 = *(int *)(lVar5 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar11 * 0x211f54f + 0x1b0cb1a7U ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar11 = 0;
      }
      else {
        iVar11 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar8) *
                      (float)(int)plVar2[4]);
      }
      plVar13 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar13[1]) {
        lVar15 = 0;
        do {
          uVar12 = 0;
          if ((int)uVar16 < (int)plVar13[1]) {
            uVar12 = ~uVar16 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
          }
          if (iVar11 < *(int *)(lVar15 + *plVar13)) break;
          plVar13 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar13[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar12 = 0;
      if ((int)uVar16 < (int)local_a0) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
      }
      local_88 = (FSoftClassPath *)(local_a8.Data + (longlong)(int)uVar16 * 0x20);
      uStack_80 = 1;
      local_68[0]._12_4_ = uStack_7c;
      local_68[0].ArrayNum = 1;
      local_68[0].DataPtr = local_88;
      IPCGAttributeAccessor::SetRange<FSoftClassPath>(pIVar3,local_68,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      local_res18 = local_res18 + 0xd0;
      local_res20 = local_res20 + -1;
    } while (local_res20 != 0);
    local_res20 = 0;
  }
  DestructItems<FSoftClassPath,int>((FSoftClassPath *)local_a8.Data,(int)local_a0);
  if ((FSoftClassPath *)local_a8.Data != (FSoftClassPath *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  if (*(void **)&local_res10->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&local_res10->field_0x10);
  }
  return true;
}

// operator()<FSoftObjectPath> @ 149d11d50

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<FSoftObjectPath>
          (void *this,FSoftObjectPath *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FSoftObjectPath *local_res10;
  longlong local_res18;
  longlong local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FSoftObjectPath *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FSoftObjectPath *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TArrayView<FSoftObjectPath,int> local_78;
  TArrayView<FSoftObjectPath_const_,int> local_68 [2];
  
  uVar18 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  uVar19 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  local_res10 = param_1;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar19,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    uVar18 = local_a0 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar15 = (undefined8 *)*plVar2;
  lVar16 = plVar2[1];
  puVar1 = puVar15 + (int)lVar16;
  while( true ) {
    iVar12 = (int)uVar18;
    if ((int)plVar2[1] != (int)lVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar12 = (int)local_a0;
    }
    if (puVar15 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar15;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar12 == local_a0._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&local_a8,(int *)((longlong)&local_a0 + 4));
    }
    local_98 = (FSoftObjectPath *)(local_a8.Data + (longlong)iVar12 * 0x20);
    local_a0 = CONCAT44(local_a0._4_4_,iVar12 + 1);
    uStack_90 = 1;
    local_78._12_4_ = uStack_8c;
    local_78.ArrayNum = 1;
    (local_98->AssetPath).PackageName.ComparisonIndex = 0;
    (local_98->AssetPath).PackageName.Number = 0;
    (local_98->AssetPath).AssetName.ComparisonIndex = 0;
    (local_98->AssetPath).AssetName.Number = 0;
    (local_98->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_98->SubPathString).Data.ArrayNum = 0;
    (local_98->SubPathString).Data.ArrayMax = 0;
    local_78.DataPtr = local_98;
    IPCGAttributeAccessor::GetRange<FSoftObjectPath>(pIVar3,&local_78,0,pIVar4,AllowBroadcast);
    uVar18 = local_a0 & 0xffffffff;
    puVar15 = puVar15 + 1;
  }
  uVar19 = 0;
  iVar12 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar9 = __real_3f800000;
  local_res20 = (longlong)iVar12;
  if (0 < iVar12) {
    local_res18 = 0;
    do {
      lVar16 = local_res18;
      plVar2 = *(longlong **)this;
      plVar14 = (longlong *)*plVar2;
      uVar17 = 0;
      if ((int)uVar19 < (int)plVar14[1]) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      lVar5 = plVar2[1];
      plVar6 = (longlong *)plVar2[2];
      uVar17 = *(uint *)(*plVar14 + 0xc4 + lVar16);
      if (lVar5 == 0) {
        if (plVar6 != (longlong *)0x0) {
          plVar14 = (longlong *)(**(code **)(*plVar6 + 0x10))();
          iVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
          uVar17 = iVar12 * 0x45c282b + 0x1b0cb1bbU ^ uVar17 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
        if (plVar6 == (longlong *)0x0) {
          uVar17 = *(int *)(lVar5 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar17;
        }
        else {
          plVar14 = (longlong *)(**(code **)(*plVar6 + 0x10))();
          iVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
          uVar17 = *(int *)(lVar5 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar12 * 0x211f54f + 0x1b0cb1a7U ^ uVar17;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)(((float)(uVar17 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar9) *
                      (float)(int)plVar2[4]);
      }
      plVar14 = (longlong *)plVar2[3];
      uVar17 = 0;
      if (0 < (int)plVar14[1]) {
        lVar16 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar17 < (int)plVar14[1]) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
          }
          if (iVar12 < *(int *)(lVar16 + *plVar14)) break;
          plVar14 = (longlong *)plVar2[3];
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 4;
        } while ((int)uVar17 < (int)plVar14[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar13 = 0;
      if ((int)uVar17 < (int)local_a0) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      local_88 = (FSoftObjectPath *)(local_a8.Data + (longlong)(int)uVar17 * 0x20);
      uStack_80 = 1;
      local_68[0]._12_4_ = uStack_7c;
      local_68[0].ArrayNum = 1;
      local_68[0].DataPtr = local_88;
      IPCGAttributeAccessor::SetRange<FSoftObjectPath>(pIVar3,local_68,uVar19,pIVar4,AllowBroadcast)
      ;
      uVar19 = uVar19 + 1;
      local_res18 = local_res18 + 0xd0;
      local_res20 = local_res20 + -1;
    } while (local_res20 != 0);
    local_res20 = 0;
  }
  DestructItems<FSoftObjectPath,int>((FSoftObjectPath *)local_a8.Data,(int)local_a0);
  if ((FSoftObjectPath *)local_a8.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  pFVar7 = (local_res10->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return true;
}

// operator()<FName> @ 149d15970

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<FName>
          (void *this,FName param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FName *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FName *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<FName,int> local_68;
  TArrayView<FName_const_,int> local_58 [2];
  
  uVar17 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar15 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  uVar16 = uVar17;
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar15,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar16 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar13 = (undefined8 *)*plVar2;
  lVar14 = plVar2[1];
  puVar1 = puVar13 + (int)lVar14;
  while( true ) {
    iVar10 = (int)uVar16;
    if ((int)plVar2[1] != (int)lVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar13 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar13;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    *(undefined8 *)(local_98.Data + (longlong)iVar10 * 8) = 0;
    local_88 = (FName *)(local_98.Data + (longlong)iVar10 * 8);
    uStack_80 = 1;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    local_68.DataPtr = local_88;
    IPCGAttributeAccessor::GetRange<FName>(pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar16 = local_90 & 0xffffffff;
    puVar13 = puVar13 + 1;
  }
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  uVar16 = uVar17;
  if (0 < iVar10) {
    do {
      plVar2 = *(longlong **)this;
      uVar18 = (uint)uVar16;
      plVar12 = (longlong *)*plVar2;
      uVar15 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar14 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar15 = *(uint *)(*plVar12 + 0xc4 + uVar17);
      if (lVar14 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar15 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar15 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar15 = uVar15 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar15 = *(int *)(lVar14 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar15;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar15 = *(int *)(lVar14 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar10 * 0x211f54f + 0x1b0cb1a7U ^ uVar15;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar15 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar15 = 0;
      if (0 < (int)plVar12[1]) {
        lVar14 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar15 < (int)plVar12[1]) {
            uVar11 = ~uVar15 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar14 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 4;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar15 < (int)local_90) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uStack_70 = 1;
      local_78 = (FName *)(local_98.Data + (longlong)(int)uVar15 * 8);
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = local_78;
      IPCGAttributeAccessor::SetRange<FName>(pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar17 = uVar17 + 0xd0;
      local_res18 = local_res18 + -1;
      uVar16 = (ulonglong)(uVar18 + 1);
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<FString> @ 149d198f0

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<FString>
          (void *this,FString *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  FString *local_res10;
  longlong local_res18;
  longlong local_res20;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  FScriptContainerElement *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  TArrayView<FString,int> local_78;
  TArrayView<FString_const_,int> local_68 [2];
  
  uVar18 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  uVar19 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  local_res10 = param_1;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (0 < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar19,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    uVar18 = local_a0 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar15 = (undefined8 *)*plVar2;
  lVar16 = plVar2[1];
  puVar1 = puVar15 + (int)lVar16;
  while( true ) {
    iVar12 = (int)uVar18;
    if ((int)plVar2[1] != (int)lVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar12 = (int)local_a0;
    }
    if (puVar15 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar15;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar12 == local_a0._4_4_) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_a8,(int *)((longlong)&local_a0 + 4));
    }
    uStack_90 = 1;
    local_a0 = CONCAT44(local_a0._4_4_,iVar12 + 1);
    local_98 = local_a8.Data + (longlong)iVar12 * 0x10;
    local_78._12_4_ = uStack_8c;
    local_78.ArrayNum = 1;
    *(undefined8 *)local_98 = 0;
    *(undefined8 *)(local_98 + 8) = 0;
    local_78.DataPtr = (FString *)local_98;
    IPCGAttributeAccessor::GetRange<FString>(pIVar3,&local_78,0,pIVar4,AllowBroadcast);
    uVar18 = local_a0 & 0xffffffff;
    puVar15 = puVar15 + 1;
  }
  uVar19 = 0;
  iVar12 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar9 = __real_3f800000;
  local_res20 = (longlong)iVar12;
  if (0 < iVar12) {
    local_res18 = 0;
    do {
      lVar16 = local_res18;
      plVar2 = *(longlong **)this;
      plVar14 = (longlong *)*plVar2;
      uVar17 = 0;
      if ((int)uVar19 < (int)plVar14[1]) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if (uVar17 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      lVar5 = plVar2[1];
      plVar6 = (longlong *)plVar2[2];
      uVar17 = *(uint *)(*plVar14 + 0xc4 + lVar16);
      if (lVar5 == 0) {
        if (plVar6 != (longlong *)0x0) {
          plVar14 = (longlong *)(**(code **)(*plVar6 + 0x10))();
          iVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
          uVar17 = iVar12 * 0x45c282b + 0x1b0cb1bbU ^ uVar17 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar17 = uVar17 * 0xbb38435 + 0x3619636b;
        if (plVar6 == (longlong *)0x0) {
          uVar17 = *(int *)(lVar5 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar17;
        }
        else {
          plVar14 = (longlong *)(**(code **)(*plVar6 + 0x10))();
          iVar12 = (**(code **)(*plVar14 + 0x10))(plVar14);
          uVar17 = iVar12 * 0x211f54f + 0x1b0cb1a7U ^
                   *(int *)(lVar5 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar17;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar12 = 0;
      }
      else {
        iVar12 = (int)(((float)(uVar17 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar9) *
                      (float)(int)plVar2[4]);
      }
      plVar14 = (longlong *)plVar2[3];
      uVar17 = 0;
      if (0 < (int)plVar14[1]) {
        lVar16 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar17 < (int)plVar14[1]) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
          }
          if (iVar12 < *(int *)(lVar16 + *plVar14)) break;
          plVar14 = (longlong *)plVar2[3];
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 4;
        } while ((int)uVar17 < (int)plVar14[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar13 = 0;
      if ((int)uVar17 < (int)local_a0) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if (uVar13 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
      }
      local_88 = local_a8.Data + (longlong)(int)uVar17 * 0x10;
      uStack_80 = 1;
      local_68[0]._12_4_ = uStack_7c;
      local_68[0].ArrayNum = 1;
      local_68[0].DataPtr = (FString *)local_88;
      IPCGAttributeAccessor::SetRange<FString>(pIVar3,local_68,uVar19,pIVar4,AllowBroadcast);
      uVar19 = uVar19 + 1;
      local_res18 = local_res18 + 0xd0;
      local_res20 = local_res20 + -1;
    } while (local_res20 != 0);
    local_res20 = 0;
  }
  DestructItems<FString,int>((FString *)local_a8.Data,(int)local_a0);
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  pFVar7 = (local_res10->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return true;
}

// operator()<__int64> @ 149d1d480

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<__int64>
          (void *this,long64 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<__int64,int> local_68;
  TArrayView<__int64_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    local_88 = local_98.Data + (longlong)iVar10 * 8;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    *(undefined8 *)local_88 = 0;
    local_68.DataPtr = (long64 *)local_88;
    IPCGAttributeAccessor::GetRange<__int64>(pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar10 * 0x211f54f + 0x1b0cb1a7U ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uStack_70 = 1;
      local_78 = local_98.Data + (longlong)(int)uVar16 * 8;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (long64 *)local_78;
      IPCGAttributeAccessor::SetRange<__int64>(pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// operator()<bool> @ 149d20f70

bool __thiscall
`UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::operator()<bool>
          (void *this,bool param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  IPCGAttributeAccessor *pIVar3;
  IPCGAttributeAccessorKeys *pIVar4;
  longlong *plVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  longlong local_res18;
  ForAnyElementType local_98;
  undefined8 local_90;
  FScriptContainerElement *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  FScriptContainerElement *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TArrayView<bool,int> local_68;
  TArrayView<bool_const_,int> local_58 [2];
  
  uVar13 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar18,&local_98,0,(int *)((longlong)&local_90 + 4));
    uVar13 = local_90 & 0xffffffff;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  puVar14 = (undefined8 *)*plVar2;
  lVar17 = plVar2[1];
  puVar1 = puVar14 + (int)lVar17;
  while( true ) {
    iVar10 = (int)uVar13;
    if ((int)plVar2[1] != (int)lVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      iVar10 = (int)local_90;
    }
    if (puVar14 == puVar1) break;
    pIVar3 = (IPCGAttributeAccessor *)*puVar14;
    pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    if (iVar10 == local_90._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&local_98,(int *)((longlong)&local_90 + 4));
    }
    local_88 = local_98.Data + iVar10;
    local_90 = CONCAT44(local_90._4_4_,iVar10 + 1);
    uStack_80 = 1;
    local_68._12_4_ = uStack_7c;
    local_68.ArrayNum = 1;
    *local_88 = (FScriptContainerElement)0x0;
    local_68.DataPtr = (bool *)local_88;
    IPCGAttributeAccessor::GetRange<bool>(pIVar3,&local_68,0,pIVar4,AllowBroadcast);
    uVar13 = local_90 & 0xffffffff;
    puVar14 = puVar14 + 1;
  }
  uVar18 = 0;
  iVar10 = (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x20) + 0x10))();
  fVar7 = __real_3f800000;
  local_res18 = (longlong)iVar10;
  if (0 < iVar10) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)this;
      plVar12 = (longlong *)*plVar2;
      uVar16 = 0;
      if ((int)uVar18 < (int)plVar12[1]) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      lVar15 = plVar2[1];
      plVar5 = (longlong *)plVar2[2];
      uVar16 = *(uint *)(*plVar12 + 0xc4 + lVar17);
      if (lVar15 == 0) {
        if (plVar5 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = iVar10 * 0x45c282b + 0x1b0cb1bbU ^ uVar16 * 0xbb38435 + 0x3619636b;
        }
      }
      else {
        uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
        if (plVar5 == (longlong *)0x0) {
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^ uVar16;
        }
        else {
          plVar12 = (longlong *)(**(code **)(*plVar5 + 0x10))();
          iVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          uVar16 = *(int *)(lVar15 + 0x50) * 0x45c282b + 0x1b0cb1bbU ^
                   iVar10 * 0x211f54f + 0x1b0cb1a7U ^ uVar16;
        }
      }
      if ((int)plVar2[4] < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(((float)(uVar16 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar7) *
                      (float)(int)plVar2[4]);
      }
      plVar12 = (longlong *)plVar2[3];
      uVar16 = 0;
      if (0 < (int)plVar12[1]) {
        lVar15 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar16 < (int)plVar12[1]) {
            uVar11 = ~uVar16 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (iVar10 < *(int *)(lVar15 + *plVar12)) break;
          plVar12 = (longlong *)plVar2[3];
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 4;
        } while ((int)uVar16 < (int)plVar12[1]);
      }
      pIVar3 = (IPCGAttributeAccessor *)**(undefined8 **)((longlong)this + 0x18);
      pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 0x20);
      uVar11 = 0;
      if ((int)uVar16 < (int)local_90) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      local_78 = local_98.Data + (int)uVar16;
      uStack_70 = 1;
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = 1;
      local_58[0].DataPtr = (bool *)local_78;
      IPCGAttributeAccessor::SetRange<bool>(pIVar3,local_58,uVar18,pIVar4,AllowBroadcast);
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0xd0;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return true;
}

// UPCGMatchAndSetWeighted @ 149d34560

UPCGMatchAndSetWeighted * __thiscall
UPCGMatchAndSetWeighted::UPCGMatchAndSetWeighted
          (UPCGMatchAndSetWeighted *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetWeighted__6B_;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->bShouldMutateSeed = true;
  return this;
}

// UPCGMatchAndSetWeighted @ 149d345a0

UPCGMatchAndSetWeighted * __thiscall
UPCGMatchAndSetWeighted::UPCGMatchAndSetWeighted
          (UPCGMatchAndSetWeighted *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UPCGMatchAndSetWeighted__6B_;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  this->bShouldMutateSeed = true;
  return this;
}

// ~UPCGMatchAndSetWeighted @ 149d350e0

void __thiscall UPCGMatchAndSetWeighted::~UPCGMatchAndSetWeighted(UPCGMatchAndSetWeighted *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGMatchAndSetWeighted__6B_;
  DestructItems<FPCGMatchAndSetWeightedEntry,int>
            ((FPCGMatchAndSetWeightedEntry *)(this->Entries).AllocatorInstance.Data,
             (this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGMatchAndSetBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 149d54880

UClass * __cdecl UPCGMatchAndSetWeighted::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetWeighted",
               &Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetWeighted,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMatchAndSetWeighted>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetWeighted>,local_res8,
               UPCGMatchAndSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetWeighted.InnerSingleton;
}

// MatchAndSet_Implementation @ 149d59090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UPCGMatchAndSetWeighted::MatchAndSet_Implementation
          (UPCGMatchAndSetWeighted *this,FPCGContext *param_1,UPCGPointMatchAndSetSettings *param_2,
          UPCGPointData *param_3,UPCGPointData *param_4)

{
  FPCGAttributePropertyOutputSelector *pFVar1;
  int iVar2;
  code *pcVar3;
  FPCGAttributePropertySelector *this_00;
  bool bVar4;
  uint uVar5;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar6;
  IPCGGraphExecutionSource *pIVar7;
  FText *pFVar8;
  FText *pFVar9;
  FTextFormat *pFVar10;
  FPCGMetadataTypesConstantStruct *this_01;
  IPCGGraphExecutionSource *pIVar11;
  FPCGMetadataTypesConstantStruct *pFVar12;
  uint local_res8 [2];
  int local_318 [2];
  ForAnyElementType local_310;
  uint local_308;
  uint local_304;
  undefined1 local_300 [40];
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> **local_2d8;
  FPCGCrc local_2d0;
  TObjectPtr<UPCGMetadata>_u_0 local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  IPCGGraphExecutionSource *local_2a8;
  FPCGAttributePropertySelector *local_2a0;
  FString local_298;
  FSoftObjectPath local_288;
  FSoftClassPath local_268;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *local_248;
  UPCGPointMatchAndSetSettings *local_240;
  IPCGGraphExecutionSource *local_238;
  ForAnyElementType *local_230;
  int local_228;
  FString local_220;
  FString local_210;
  FText local_200;
  FText local_1f0;
  TVector2<double>_u_0 local_1d8;
  FString local_1c8;
  FString local_1b8;
  FText local_1a8;
  FString local_198;
  FString local_188;
  FText local_178;
  TVector<double>_u_0 local_168;
  TRotator<double> local_148;
  TVector4<double>_u_0 local_128;
  TQuat<double> local_108;
  undefined8 local_d8;
  undefined8 local_c0;
  TTransform<double> local_b8;
  FText local_58;
  FTextFormat local_48;
  
  pIVar11 = (IPCGGraphExecutionSource *)0x0;
  local_res8[0] = 0;
  if ((((param_2 == (UPCGPointMatchAndSetSettings *)0x0) || (param_3 == (UPCGPointData *)0x0)) ||
      (param_4 == (UPCGPointData *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSettings && InPointData && OutPointData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetWeighted.cpp"
                         ,0x4a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_4->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutPointData->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetWeighted.cpp"
                         ,0x4b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar6 = UPCGPointData::GetMutablePoints(param_4);
  if (((param_3->Points).ArrayNum != pTVar6->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPointData->GetPoints().Num() == OutPointData->GetMutablePoints().Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\MatchAndSet\\PCGMatchAndSetWeighted.cpp"
                         ,0x4c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = (this->Entries).ArrayNum;
  if (iVar2 == 0) {
    return;
  }
  pFVar1 = &param_2->SetTarget;
  local_2a0 = (FPCGAttributePropertySelector *)pFVar1;
  if ((iVar2 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = UPCGMatchAndSetBase::CreateAttributeIfNeeded
                    ((UPCGMatchAndSetBase *)this,param_1,(FPCGAttributePropertySelector *)pFVar1,
                     (FPCGMetadataTypesConstantStruct *)(this->Entries).AllocatorInstance.Data,
                     param_4,param_2);
  if (!bVar4) {
    return;
  }
  uVar5 = (this->Entries).ArrayNum;
  local_300._8_8_ =
       (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *)0x0
  ;
  local_300._16_8_ = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if (0 < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)(local_300 + 8),0,(int *)(local_300 + 0x14));
  }
  pIVar7 = ::operator_new(0x18);
  local_2a8 = pIVar11;
  if (pIVar7 != (IPCGGraphExecutionSource *)0x0) {
    *(undefined1 *)(pIVar7 + 1) = 1;
    *pIVar7 = (IPCGGraphExecutionSource)&___7__FPCGAttributeAccessorKeysSingleObjectPtr_XX__6B_;
    pIVar7[2] = (IPCGGraphExecutionSource)0x0;
    local_2a8 = pIVar7;
  }
  iVar2 = (this->Entries).ArrayNum;
  this_01 = (FPCGMetadataTypesConstantStruct *)(this->Entries).AllocatorInstance.Data;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308 = 0;
  pFVar12 = (FPCGMetadataTypesConstantStruct *)((longlong)this_01 + (longlong)iVar2 * 0x180);
  local_304 = 0;
  local_318[0] = 0;
  pIVar7 = pIVar11;
  while( true ) {
    uVar5 = (uint)pIVar7;
    if ((this->Entries).ArrayNum != iVar2) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FPCGMatchAndSetWeightedEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
      uVar5 = local_308;
    }
    if (this_01 == pFVar12) break;
    local_318[0] = local_318[0] + *(int *)(this_01 + 1);
    if (((local_310.Data <= (FScriptContainerElement *)local_318) &&
        ((FScriptContainerElement *)local_318 < local_310.Data + (longlong)(int)local_304 * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), uVar5 = local_308, bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar5 == local_304) {
      uVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&local_310,(int *)&local_304);
    }
    local_308 = uVar5 + 1;
    *(int *)(local_310.Data + (longlong)(int)uVar5 * 4) = local_318[0];
    FPCGMetadataTypesConstantStruct::
    Dispatcher<_UPCGMatchAndSetWeighted::MatchAndSet_Implementation_::__l2::<lambda_1>_>
              (this_01,(TArray<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,TSizedDefaultAllocator<32>_>
                        *)(local_300 + 8));
    pIVar7 = (IPCGGraphExecutionSource *)(ulonglong)local_308;
    this_01 = (FPCGMetadataTypesConstantStruct *)&this_01[1].DoubleValue;
  }
  if (local_318[0] < 1) goto LAB_149d59973;
  pIVar7 = pIVar11;
  if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
     (bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar4)) {
    pIVar7 = (param_1->ExecutionSource).InterfaceInstance;
  }
  this_00 = local_2a0;
  pTVar6 = &param_3->Points;
  PCGAttributeAccessorHelpers::CreateAccessor
            ((UPCGData *)local_300,(FPCGAttributePropertySelector *)param_4,SUB81(local_2a0,0));
  PCGAttributeAccessorHelpers::CreateKeys
            ((UPCGData *)(local_300 + 0x18),(FPCGAttributePropertySelector *)param_4);
  if (((undefined8 *)local_300._0_8_ == (undefined8 *)0x0) ||
     ((undefined8 *)local_300._24_8_ == (undefined8 *)0x0)) {
    if ((byte)LogPCG._0_1_ < 3) goto LAB_149d5994c;
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_178,L"PCGMatchAndSetWeightedEntry",L"FailedToCreateTargetAccessor",
                        L"Failed to create output accessor or iterator");
    FText::ToString(pFVar8);
    if (param_1 != (FPCGContext *)0x0) {
      FPCGContext::GetTaskName(param_1,&local_188);
      pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000003;
      FPCGContext::GetExecutionSourceName(param_1,&local_198);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((((ulonglong)pIVar11 & 2) != 0) &&
       (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffffd),
       local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pIVar11 & 1) != 0) &&
       (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
LAB_149d59941:
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
  }
  else if (*(char *)(local_300._0_8_ + 8) == '\0') {
    local_230 = &local_310;
    local_228 = local_318[0];
    local_2d8 = &local_248;
    local_2d0 = (FPCGCrc)&local_2a8;
    local_2c8.DebugPtr = (UPCGMetadata *)(local_300 + 8);
    local_2c0 = local_300;
    local_2b8 = local_300 + 0x18;
    local_248 = pTVar6;
    local_240 = param_2;
    local_238 = pIVar7;
    switch(*(undefined2 *)(local_300._0_8_ + 10)) {
    case 0:
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<float>(&local_2d8,0.0);
      break;
    case 1:
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<double>(&local_2d8,0.0);
      break;
    case 2:
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<int>(&local_2d8,0);
      break;
    case 3:
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<__int64>(&local_2d8,0);
      break;
    case 4:
      local_1d8._s_0.X = 0.0;
      local_1d8._s_0.Y = 0.0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<UE::Math::TVector2<double>_>
                        (&local_2d8,(TVector2<double> *)&local_1d8._s_0);
      break;
    case 5:
      local_168._s_0.X = 0.0;
      local_168._s_0.Y = 0.0;
      local_d8 = 0;
      local_168._s_0.Z = 0.0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<UE::Math::TVector<double>_>(&local_2d8,(TVector<double> *)&local_168._s_0);
      break;
    case 6:
      local_128._s_0.Z = ___xmm_3ff00000000000000000000000000000;
      local_128._s_0.W = _UNK_15061cbc8;
      local_128._s_0.X = 0.0;
      local_128._s_0.Y = 0.0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<UE::Math::TVector4<double>_>
                        (&local_2d8,(TVector4<double> *)&local_128._s_0);
      break;
    case 7:
      local_108.X = 0.0;
      local_108.Y = 0.0;
      local_108.Z = 0.0;
      local_108.W = 0.0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<UE::Math::TQuat<double>_>(&local_2d8,&local_108);
      break;
    case 8:
      local_b8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_b8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_b8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_b8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_b8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_b8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<UE::Math::TTransform<double>_>(&local_2d8,&local_b8);
      break;
    case 9:
      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298.Data.ArrayNum = 0;
      local_298.Data.ArrayMax = 0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<FString>(&local_2d8,&local_298);
      break;
    case 10:
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<bool>(&local_2d8,false);
      break;
    case 0xb:
      local_148.Pitch = 0.0;
      local_148.Yaw = 0.0;
      local_c0 = 0;
      local_148.Roll = 0.0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<UE::Math::TRotator<double>_>(&local_2d8,&local_148);
      break;
    case 0xc:
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<FName>(&local_2d8,(FName)0x0);
      break;
    case 0xd:
      local_288.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_288.AssetPath.PackageName.Number = 0;
      local_288.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_288.AssetPath.AssetName.Number = 0;
      local_288.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_288.SubPathString.Data.ArrayNum = 0;
      local_288.SubPathString.Data.ArrayMax = 0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<FSoftObjectPath>(&local_2d8,&local_288);
      break;
    case 0xe:
      local_268._0_8_ = 0;
      local_268._8_8_ = 0;
      local_268._16_8_ = 0;
      local_268._24_8_ = 0;
      bVar4 = `UPCGMatchAndSetWeighted::MatchAndSet_Implementation'::__l2::<lambda_3>::
              operator()<FSoftClassPath>(&local_2d8,&local_268);
      break;
    default:
      goto switchD_149d59562_default;
    }
    if (bVar4 == false) {
switchD_149d59562_default:
      if (2 < (byte)LogPCG._0_1_) {
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_1a8,L"PCGMatchAndSetWeightedEntry",L"ErrorGettingSettingValues",
                            L"Error while getting/setting values in the MatchAndSet");
        FText::ToString(pFVar8);
        if (param_1 != (FPCGContext *)0x0) {
          FPCGContext::GetTaskName(param_1,&local_1b8);
          pIVar11 = (IPCGGraphExecutionSource *)&DAT_00000030;
          FPCGContext::GetExecutionSourceName(param_1,&local_1c8);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
        if ((((ulonglong)pIVar11 & 0x20) != 0) &&
           (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xffffffdf),
           local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_178.TextData.Reference = local_1a8.TextData.Reference;
        if ((((ulonglong)pIVar11 & 0x10) != 0) &&
           (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
          local_178.TextData.Reference = local_1a8.TextData.Reference;
        }
        goto LAB_149d59941;
      }
    }
  }
  else if (2 < (byte)LogPCG._0_1_) {
    pFVar8 = FPCGAttributePropertySelector::GetDisplayText(this_00,&local_58,false);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_1f0,L"PCGMatchAndSetWeightedEntry",L"SetTargetAccessorIsReadOnly",
                        L"Attribute/Property \'{0}\' is read only.");
    pFVar10 = FTextFormat::FTextFormat(&local_48,pFVar9,Default);
    pFVar8 = FText::Format<FText>(&local_200,pFVar10,pFVar8);
    FText::ToString(pFVar8);
    if (param_1 != (FPCGContext *)0x0) {
      FPCGContext::GetTaskName(param_1,&local_210);
      pIVar11 = (IPCGGraphExecutionSource *)&DAT_0000000c;
      FPCGContext::GetExecutionSourceName(param_1,&local_220);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    if ((((ulonglong)pIVar11 & 8) != 0) &&
       (pIVar11 = (IPCGGraphExecutionSource *)(ulonglong)((uint)pIVar11 & 0xfffffff7),
       local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
    if ((((ulonglong)pIVar11 & 4) != 0) &&
       (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_210.Data.AllocatorInstance.Data);
    }
    local_178.TextData.Reference = local_1f0.TextData.Reference;
    if (local_200.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
      local_178.TextData.Reference = local_1f0.TextData.Reference;
    }
    goto LAB_149d59941;
  }
LAB_149d5994c:
  if ((undefined8 *)local_300._24_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_300._24_8_)(local_300._24_8_,1);
  }
  if ((undefined8 *)local_300._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_300._0_8_)(local_300._0_8_,1);
  }
LAB_149d59973:
  if (local_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data);
  }
  if (local_2a8 != (IPCGGraphExecutionSource *)0x0) {
    (**(code **)*local_2a8)(local_2a8,1);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
              *)local_300._8_8_,local_300._16_4_);
  if ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *)
      local_300._8_8_ !=
      (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> *)0x0)
  {
    FMemory::Free((void *)local_300._8_8_);
  }
  return;
}

// SetType @ 149d649a0

void __thiscall
UPCGMatchAndSetWeighted::SetType(UPCGMatchAndSetWeighted *this,EPCGMetadataTypes param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  iVar1 = (this->Entries).ArrayNum;
  pFVar2 = (this->Entries).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x180;
  while( true ) {
    if ((this->Entries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGMatchAndSetWeightedEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar2 == pFVar3) break;
    *pFVar2 = (FScriptContainerElement)param_1;
    pFVar2 = pFVar2 + 0x180;
  }
  *(EPCGMetadataTypes *)&this->_padding_ = param_1;
  return;
}

// ShouldMutateSeed @ 149d656b0

bool __thiscall UPCGMatchAndSetWeighted::ShouldMutateSeed(UPCGMatchAndSetWeighted *this)

{
  return this->bShouldMutateSeed;
}

// StaticRegisterNativesUPCGMatchAndSetWeighted @ 149d66340

void __cdecl UPCGMatchAndSetWeighted::StaticRegisterNativesUPCGMatchAndSetWeighted(void)

{
  return;
}

// UsesRandomProcess @ 149d674d0

bool __thiscall UPCGMatchAndSetWeighted::UsesRandomProcess(UPCGMatchAndSetWeighted *this)

{
  return true;
}

