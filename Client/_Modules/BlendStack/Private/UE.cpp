// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 25

// Construct<FBlendStackInputAnimNodeReference> @ 14a85abc0

void __cdecl UE::CoreUObject::Private::Construct<FBlendStackInputAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FBlendStackInputAnimNodeReference> @ 14a85abd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlendStackInputAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FBlendStackInputAnimNodeReference> @ 14a85abe0

void __cdecl UE::CoreUObject::Private::Destruct<FBlendStackInputAnimNodeReference>(void *param_1)

{
  return;
}

// Copy<FBlendStackInputAnimNodeReference> @ 14a85abf0

bool __cdecl
UE::CoreUObject::Private::Copy<FBlendStackInputAnimNodeReference>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FBlendStackAnimNodeReference> @ 14a85ae70

void __cdecl UE::CoreUObject::Private::Construct<FBlendStackAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FBlendStackAnimNodeReference> @ 14a85ae80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FBlendStackAnimNodeReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FBlendStackAnimNodeReference> @ 14a85ae90

void __cdecl UE::CoreUObject::Private::Destruct<FBlendStackAnimNodeReference>(void *param_1)

{
  return;
}

// Copy<FBlendStackAnimNodeReference> @ 14a85aee0

bool __cdecl
UE::CoreUObject::Private::Copy<FBlendStackAnimNodeReference>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAnimNode_BlendStackInput> @ 14a85af90

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_BlendStackInput>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_BlendStackInput__6B_;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// ConstructForTests<FAnimNode_BlendStackInput> @ 14a85afc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_BlendStackInput>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_BlendStackInput__6B_;
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  return;
}

// Destruct<FAnimNode_BlendStackInput> @ 14a85aff0

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_BlendStackInput>(void *param_1)

{
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_BlendStackInput> @ 14a85b010

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_BlendStackInput>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)pvVar1 + 8) =
         *(undefined8 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined4 *)((longlong)pvVar1 + 0x10) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x14) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar1 + 0x18) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar1 + 0x1c) =
         *(undefined4 *)((longlong)pvVar1 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar1 + 0x20) =
         *(undefined8 *)((longlong)pvVar1 + (longlong)param_2 + (0x20 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x28);
  }
  return true;
}

// Construct<FAnimNode_BlendStack> @ 14a85b070

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_BlendStack>(void *param_1)

{
  memset(param_1,0,0x140);
  FAnimNode_BlendStack::FAnimNode_BlendStack(param_1);
  return;
}

// ConstructForTests<FAnimNode_BlendStack> @ 14a85b0a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAnimNode_BlendStack>(void *param_1)

{
  undefined8 uVar1;
  
  FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone(param_1);
  *(undefined4 *)((longlong)param_1 + 200) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_BlendStack__6B_;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd0) = 1;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd8) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0xe8) = 2;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)((longlong)param_1 + 0xf0) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)((longlong)param_1 + 0xf8) = uVar1;
  *(double *)((longlong)param_1 + 0x100) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x120) = 1;
  *(undefined4 *)((longlong)param_1 + 0x130) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 0x138) = 0;
  return;
}

// Destruct<FAnimNode_BlendStack> @ 14a85b0b0

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_BlendStack>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98));
  DestructItems<FBlendStackAnimPlayer,int>
            (*(FBlendStackAnimPlayer **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_BlendStack> @ 14a85b0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_BlendStack>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined7 uVar6;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FAnimNode_BlendStack_Standalone::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_
                         );
    }
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(int *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (int)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(undefined4 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 4) =
         *(undefined4 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 4
          );
    *(char *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (char)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(undefined1 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 1) =
         *(undefined1 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 1
          );
    *(undefined4 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 4) =
         *(undefined4 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 4
          );
    *(int *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (int)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(undefined4 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 4) =
         *(undefined4 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 4
          );
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ !=
        (UObject *)0x0)) {
      GC::MarkAsReachable((UObject *)
                          ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_
                         );
    }
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(char *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         (char)((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    *(undefined1 *)
     ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ + 1) =
         *(undefined1 *)
          ((longlong)&((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_ + 1
          );
    pFVar2 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
             SampleGraphExecutionHelpers).AllocatorInstance.Data;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->_padding_ =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->_padding_;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->SampleGraphExecutionHelpers).
    AllocatorInstance.Data = pFVar2;
    iVar3 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
            SampleGraphExecutionHelpers).ArrayMax;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->SampleGraphExecutionHelpers).
    ArrayNum = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
               SampleGraphExecutionHelpers).ArrayNum;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->SampleGraphExecutionHelpers).
    ArrayMax = iVar3;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)
                 (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
                 PerSampleGraphPoseLinks).AllocatorInstance.Data, pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->PerSampleGraphPoseLinks).
    AllocatorInstance.Data =
         (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->PerSampleGraphPoseLinks).
         AllocatorInstance.Data;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->PerSampleGraphPoseLinks).
    ArrayNum = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
               PerSampleGraphPoseLinks).ArrayNum;
    *(char *)&(((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->
              PerSampleGraphPoseLinks).ArrayMax =
         (char)(((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->
               PerSampleGraphPoseLinks).ArrayMax;
    uVar4 = *(undefined4 *)
             &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->field_0x5c;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->CurrentSamplePoseLink =
         ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->CurrentSamplePoseLink;
    *(undefined4 *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->field_0x5c =
         uVar4;
    *(undefined1 *)
     &(((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->AnimPlayers).
      AllocatorInstance.Data =
         *(undefined1 *)
          &(((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->AnimPlayers).
           AllocatorInstance.Data;
    iVar3 = (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->AnimPlayers).ArrayMax;
    bVar5 = ((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->bShouldFilterNotifies;
    uVar6 = *(undefined7 *)
             &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->field_0x71;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->AnimPlayers).ArrayNum =
         (((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->AnimPlayers).ArrayNum;
    (((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->AnimPlayers).ArrayMax = iVar3;
    ((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->bShouldFilterNotifies = bVar5;
    *(undefined7 *)&((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->field_0x71 =
         uVar6;
    *(undefined1 *)
     &(((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->StitchDatabase).field0_0x0 =
         *(undefined1 *)
          &(((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->StitchDatabase).
           field0_0x0;
    param_1 = &((FAnimNode_BlendStack_Standalone *)((longlong)param_1 + 0xc0))->StitchBlendTime;
    param_2 = &((FAnimNode_BlendStack_Standalone *)((longlong)param_2 + 0xc0))->StitchBlendTime;
  }
  return true;
}

// Construct<FAnimNode_BlendStack_Standalone> @ 14a85b280

void __cdecl UE::CoreUObject::Private::Construct<FAnimNode_BlendStack_Standalone>(void *param_1)

{
  memset(param_1,0,0xc0);
  FAnimNode_BlendStack_Standalone::FAnimNode_BlendStack_Standalone(param_1);
  return;
}

// ConstructForTests<FAnimNode_BlendStack_Standalone> @ 14a85b2b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAnimNode_BlendStack_Standalone>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FAnimNode_BlendStack_Standalone__6B_;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 4;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0x3f800000;
  return;
}

// Destruct<FAnimNode_BlendStack_Standalone> @ 14a85b2c0

void __cdecl UE::CoreUObject::Private::Destruct<FAnimNode_BlendStack_Standalone>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa8));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98));
  DestructItems<FBlendStackAnimPlayer,int>
            (*(FBlendStackAnimPlayer **)((longlong)param_1 + 0x60),
             *(int *)((longlong)param_1 + 0x68));
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  *(undefined ***)param_1 = &___7FAnimNode_Base__6B_;
  return;
}

// Copy<FAnimNode_BlendStack_Standalone> @ 14a85b2d0

bool __cdecl
UE::CoreUObject::Private::Copy<FAnimNode_BlendStack_Standalone>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FBlendStackAnimPlayer *pFVar5;
  longlong lVar6;
  undefined8 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x38);
    uVar7 = *(undefined8 *)((longlong)param_2 + 0x18);
    *(undefined8 *)((longlong)param_1 + 0x10) = *(undefined8 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x18) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined8 *)((longlong)param_1 + 0x28) = *(undefined8 *)((longlong)param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x30) = *(undefined4 *)((longlong)param_2 + 0x30);
    *(undefined1 *)((longlong)param_1 + 0x34) = *(undefined1 *)((longlong)param_2 + 0x34);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x38)) {
      iVar3 = *(int *)((longlong)param_2 + 0x40);
      piVar2 = (int *)((longlong)param_1 + 0x44);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x38))->Data;
      *(int *)((longlong)param_1 + 0x40) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 * 0x18);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x48);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x48)) {
      iVar3 = *(int *)((longlong)param_2 + 0x50);
      piVar2 = (int *)((longlong)param_1 + 0x54);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x48))->Data;
      *(int *)((longlong)param_1 + 0x50) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        if (iVar3 != 0) {
          memcpy(pFVar1->Data,pFVar4,(longlong)iVar3 << 4);
        }
      }
    }
    pFVar1 = (ForAnyElementType *)((longlong)param_1 + 0x60);
    *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
    if (pFVar1 != (ForAnyElementType *)((longlong)param_2 + 0x60)) {
      DestructItems<FBlendStackAnimPlayer,int>
                ((FBlendStackAnimPlayer *)pFVar1->Data,*(int *)((longlong)param_1 + 0x68));
      iVar3 = *(int *)((longlong)param_2 + 0x68);
      piVar2 = (int *)((longlong)param_1 + 0x6c);
      pFVar5 = (FBlendStackAnimPlayer *)((ForAnyElementType *)((longlong)param_2 + 0x60))->Data;
      *(int *)((longlong)param_1 + 0x68) = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x3a0,8,iVar3,*piVar2,pFVar1,iVar3,piVar2);
        ConstructItems<FBlendStackAnimPlayer,FBlendStackAnimPlayer,int>(pFVar1->Data,pFVar5,iVar3);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x70) = *(undefined1 *)((longlong)param_2 + 0x70);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)((longlong)param_2 + 0x78) != (UObject *)0x0)) {
      GC::MarkAsReachable(*(UObject **)((longlong)param_2 + 0x78));
    }
    *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x80) = *(undefined4 *)((longlong)param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    *(undefined4 *)((longlong)param_1 + 0x88) = *(undefined4 *)((longlong)param_2 + 0x88);
    *(undefined1 *)((longlong)param_1 + 0x8c) = *(undefined1 *)((longlong)param_2 + 0x8c);
    lVar6 = *(longlong *)((longlong)param_2 + 0x98);
    uVar7 = *(undefined8 *)((longlong)param_2 + 0x90);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x98);
    *(undefined8 *)((longlong)param_1 + 0x90) = uVar7;
    *(longlong *)((longlong)param_1 + 0x98) = lVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    lVar6 = *(longlong *)((longlong)param_2 + 0xa8);
    uVar7 = *(undefined8 *)((longlong)param_2 + 0xa0);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0xa8);
    *(undefined8 *)((longlong)param_1 + 0xa0) = uVar7;
    *(longlong *)((longlong)param_1 + 0xa8) = lVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)((longlong)param_2 + 0xb0);
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
    *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)((longlong)param_2 + 0xb8);
    param_1 = (void *)((longlong)param_1 + 0xc0);
    param_2 = (void *)((longlong)param_2 + 0xc0);
  }
  return true;
}

// Construct<FBlendStackAnimPlayer> @ 14a85b5c0

void __cdecl UE::CoreUObject::Private::Construct<FBlendStackAnimPlayer>(void *param_1)

{
  memset(param_1,0,0x3a0);
  FBlendStackAnimPlayer::FBlendStackAnimPlayer(param_1);
  return;
}

// ConstructForTests<FBlendStackAnimPlayer> @ 14a85b5f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FBlendStackAnimPlayer>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined1 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FAnimNode_SequencePlayer_Standalone__6B_;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x80) = 0;
  *(undefined1 *)((longlong)param_1 + 0x82) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0x41200000;
  *(undefined2 *)((longlong)param_1 + 0xb0) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 200) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0xd0) = 0xfffffffe;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x110) = 0xffffffff;
  *(undefined ***)((longlong)param_1 + 0xb8) = &___7FAnimNode_BlendSpacePlayer_Standalone__6B_;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x138) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x140) = 0;
  FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone
            ((FAnimNode_Mirror_Standalone *)((longlong)param_1 + 0x148));
  *(undefined8 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x200) = 0;
  *(undefined8 *)((longlong)param_1 + 0x208) = 0;
  *(undefined8 *)((longlong)param_1 + 0x210) = 0;
  FBoneContainer::FBoneContainer((FBoneContainer *)((longlong)param_1 + 0x218));
  *(undefined1 *)((longlong)param_1 + 0x370) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x378) = 0;
  *(undefined8 *)((longlong)param_1 + 0x380) = 0;
  *(undefined8 *)((longlong)param_1 + 0x388) = 0;
  *(undefined4 *)((longlong)param_1 + 0x390) = 0;
  *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  ((FColor_u_0 *)((longlong)param_1 + 0x398))->_s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  return;
}

// Destruct<FBlendStackAnimPlayer> @ 14a85b600

void __cdecl UE::CoreUObject::Private::Destruct<FBlendStackAnimPlayer>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x378) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x378));
  }
  FBoneContainer::~FBoneContainer((FBoneContainer *)((longlong)param_1 + 0x218));
  Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             ((longlong)param_1 + 0x1d8));
  if (*(void **)((longlong)param_1 + 0x1b8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1b8));
  }
  if (*(void **)((longlong)param_1 + 0x1a8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1a8));
  }
  FAnimNode_Mirror_Standalone::~FAnimNode_Mirror_Standalone
            ((FAnimNode_Mirror_Standalone *)((longlong)param_1 + 0x148));
  DestructItems<FBlendSampleData,int>
            (*(FBlendSampleData **)((longlong)param_1 + 0x100),*(int *)((longlong)param_1 + 0x108));
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
  }
  DestructItems<FFIRFilterTimeBased,int>
            (*(FFIRFilterTimeBased **)((longlong)param_1 + 0xf0),*(int *)((longlong)param_1 + 0xf8))
  ;
  if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
  }
  *(undefined ***)((longlong)param_1 + 0xb8) = &___7FAnimNode_Base__6B_;
  *(undefined ***)((longlong)param_1 + 0x20) = &___7FAnimNode_Base__6B_;
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FBlendStackAnimPlayer> @ 14a85b610

bool __cdecl
UE::CoreUObject::Private::Copy<FBlendStackAnimPlayer>(void *param_1,void *param_2,int param_3)

{
  FBlendStackAnimPlayer *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FBlendStackAnimPlayer::operator=
                (this,(FBlendStackAnimPlayer *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Decay<TObjectPtr<UAnimationAsset>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UAnimationAsset>_>,UAnimationAsset_*> @ 14a85f720

UAnimationAsset ** __cdecl
UE::Core::Private::Unsafe::
Decay<TObjectPtr<UAnimationAsset>,UE::Core::Private::TObjectPtrDecayTypeOf<TObjectPtr<UAnimationAsset>_>,UAnimationAsset_*>
          (TObjectPtr<UAnimationAsset> *param_1)

{
  return (UAnimationAsset **)param_1;
}

