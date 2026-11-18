// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// FSchemaBuilder @ 1420116e0

FSchemaBuilder * __thiscall
UE::GC::FSchemaBuilder::FSchemaBuilder
          (FSchemaBuilder *this,uint param_1,initializer_list<UE::GC::FMemberDeclaration> *param_2)

{
  int *piVar1;
  FMemberDeclaration *pFVar2;
  ForElementType<UE::GC::FMemberDeclaration> FVar3;
  ulonglong uVar4;
  code *pcVar5;
  FMemberDeclaration *_Src;
  bool bVar6;
  FSchemaBuilder *pFVar7;
  ForElementType<UE::GC::FMemberDeclaration> FVar8;
  int iVar9;
  uchar *puVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  
  _Src = param_2->_First;
  pFVar2 = param_2->_Last;
  (this->Members).AllocatorInstance.SecondaryData = (ForElementType<UE::GC::FMemberDeclaration>)0x0;
  lVar11 = (longlong)pFVar2 - (longlong)_Src;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  iVar9 = (int)(lVar11 >> 2) - (int)(lVar11 >> 0x3f);
  piVar1 = &(this->Members).ArrayMax;
  (this->Members).ArrayNum = iVar9;
  if (iVar9 == 0) {
    *piVar1 = 0x10;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::FMemberDeclaration>_>
              (0x18,8,iVar9,0,(ForElementType<UE::GC::FMemberDeclaration> *)this,iVar9,piVar1);
    FVar3 = (this->Members).AllocatorInstance.SecondaryData;
    FVar8 = (ForElementType<UE::GC::FMemberDeclaration>)this;
    if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
      FVar8 = FVar3;
    }
    memcpy((void *)FVar8,_Src,(longlong)iVar9 * 0x18);
  }
  this->StructStride = param_1;
  (this->BuiltSchema).bIsSet = false;
  if (((param_1 & 7) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructStride % 8 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x121,
                         L"Structs containing TObjectPtr/UObject* references must be 8-byte aligned"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FSchemaBuilder *)(*pcVar5)();
    return pFVar7;
  }
  FVar3 = (this->Members).AllocatorInstance.SecondaryData;
  iVar9 = (this->Members).ArrayNum;
  FVar8 = (ForElementType<UE::GC::FMemberDeclaration>)this;
  if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
    FVar8 = FVar3;
  }
  puVar10 = (uchar *)((longlong)FVar8 + 0x10);
  while( true ) {
    if ((this->Members).ArrayNum != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::GC::FMemberDeclaration,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if ((ForElementType<UE::GC::FMemberDeclaration> *)(puVar10 + -0x10) ==
        (ForElementType<UE::GC::FMemberDeclaration> *)((longlong)FVar8 + (longlong)iVar9 * 0x18))
    break;
    if ((1 << (puVar10[-4] & 0x1f) & 0xc50U) != 0) {
      uVar4 = *(ulonglong *)puVar10;
      if (((uVar4 & 0xfffffffffffffffe) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetWords()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,0x5f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FSchemaBuilder *)(*pcVar5)();
        return pFVar7;
      }
      LOCK();
      piVar1 = (int *)((uVar4 & 0xfffffffffffffffe) - 4);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar10 = puVar10 + 0x18;
  }
  return this;
}

// ~FSchemaBuilder @ 142013410

void __thiscall UE::GC::FSchemaBuilder::~FSchemaBuilder(FSchemaBuilder *this)

{
  int iVar1;
  ForElementType<UE::GC::FMemberDeclaration> FVar2;
  FSchemaView FVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  ForElementType<UE::GC::FMemberDeclaration> FVar7;
  uchar *puVar8;
  undefined1 local_res8 [8];
  
  if (((this->StructStride & 7) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructStride % 8 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,299,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->BuiltSchema).bIsSet != false) {
    if (((this->BuiltSchema).TypedValue.SchemaView & 0xfffffffffffffffe) != 0) {
      if (((this->BuiltSchema).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = (this->BuiltSchema).TypedValue.SchemaView & 0xfffffffffffffffe;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetWords()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,0x5f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(uVar6 - 4) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!BuiltSchema || BuiltSchema->Get().IsEmpty() || FSchemaView(BuiltSchema->Get()).GetHeader().RefCount.load() > 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,300,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (((this->BuiltSchema).bIsSet != false) &&
       (((this->BuiltSchema).TypedValue.SchemaView & 0xfffffffffffffffe) != 0)) {
      if (((this->BuiltSchema).bIsSet == false) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = (this->BuiltSchema).TypedValue.SchemaView & 0xfffffffffffffffe;
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetWords()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,0x5f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(uint *)(uVar6 - 8) != this->StructStride) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!BuiltSchema || BuiltSchema->Get().IsEmpty() || FSchemaView(BuiltSchema->Get()).GetHeader().StructStride == StructStride"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,0x12d,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  FVar2 = (this->Members).AllocatorInstance.SecondaryData;
  iVar1 = (this->Members).ArrayNum;
  FVar7 = (ForElementType<UE::GC::FMemberDeclaration>)this;
  if (FVar2 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
    FVar7 = FVar2;
  }
  puVar8 = (uchar *)((longlong)FVar7 + 0x10);
  while( true ) {
    if ((this->Members).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::GC::FMemberDeclaration,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<UE::GC::FMemberDeclaration> *)(puVar8 + -0x10) ==
        (ForElementType<UE::GC::FMemberDeclaration> *)((longlong)FVar7 + (longlong)iVar1 * 0x18))
    break;
    if ((1 << (puVar8[-4] & 0x1f) & 0xc50U) != 0) {
      DropSchemaReference((FSchemaView)*(ulong64 *)puVar8);
    }
    puVar8 = puVar8 + 0x18;
  }
  if ((this->BuiltSchema).bIsSet != false) {
    FVar3.Handle = (this->BuiltSchema).TypedValue.SchemaView;
    if ((FVar3.Handle & 0xfffffffffffffffe) != 0) {
      DropSchemaReference(FVar3);
    }
    (this->BuiltSchema).TypedValue.SchemaView = 0;
  }
  FVar2 = (this->Members).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return;
}

// Add @ 142017b30

void __thiscall UE::GC::FSchemaBuilder::Add(FSchemaBuilder *this,FMemberDeclaration *param_1)

{
  int *piVar1;
  FName *pFVar2;
  ForElementType<UE::GC::FMemberDeclaration> FVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  ForElementType<UE::GC::FMemberDeclaration> FVar9;
  ulonglong uVar10;
  
  if ((((1 << (param_1->Type & (Count|MemberARO)) & 0xac70U) != 0) !=
       ((param_1->ExtraWord).ObjectARO !=
       (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsIn<ExtraWordTypes>(Member.Type) == IsSet(Member.ExtraWord)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x137,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((1 << (param_1->Type & (Count|MemberARO)) & 0xffff9fdcU) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsIn<~GeneratedTypes>(Member.Type)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x138,L"Member type %d is generated by Build() and shouldn\'t be declared"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->BuiltSchema).bIsSet != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!BuiltSchema.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x139,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar3 = (this->Members).AllocatorInstance.SecondaryData;
  FVar9 = (ForElementType<UE::GC::FMemberDeclaration>)this;
  if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
    FVar9 = FVar3;
  }
  if ((ulonglong)FVar9 <= param_1) {
    FVar9 = (ForElementType<UE::GC::FMemberDeclaration>)this;
    if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
      FVar9 = FVar3;
    }
    if ((param_1 < (FMemberDeclaration *)
                   ((longlong)FVar9 + (longlong)(this->Members).ArrayMax * 0x18)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->Members).ArrayNum;
  piVar1 = &(this->Members).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::FMemberDeclaration>_>
                      (0x818,(ForElementType<UE::GC::FMemberDeclaration> *)this,piVar1);
  }
  FVar5 = param_1->DebugName;
  FVar6 = *(FName *)&param_1->Offset;
  (this->Members).ArrayNum = iVar8 + 1;
  FVar3 = (this->Members).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
    this = (FSchemaBuilder *)FVar3;
  }
  pFVar2 = (FName *)((longlong)this + (longlong)iVar8 * 0x18);
  *pFVar2 = FVar5;
  pFVar2[1] = FVar6;
  *(FMemberWord *)((uchar *)((longlong)this + 0x10) + (longlong)iVar8 * 0x18) = param_1->ExtraWord;
  if ((1 << (param_1->Type & (Count|MemberARO)) & 0xc50U) != 0) {
    uVar10 = (ulonglong)(param_1->ExtraWord).ObjectARO & 0xfffffffffffffffe;
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetWords()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                           ,0x5f,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    piVar1 = (int *)(uVar10 - 4);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

// Append @ 142022440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UE::GC::FSchemaBuilder::Append(FSchemaBuilder *this,FSchemaView param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ForElementType<UE::GC::FMemberDeclaration> FVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  ForElementType<UE::GC::FMemberDeclaration> FVar10;
  uint uVar11;
  undefined8 *puVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ushort *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  ForElementType<UE::GC::FMemberDeclaration> local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int iStack_48;
  uint uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  puVar20 = (undefined8 *)(param_1.Handle & 0xfffffffffffffffe);
  if (puVar20 == (undefined8 *)0x0) {
    return;
  }
  piVar2 = &(this->Members).ArrayNum;
  local_64 = *piVar2;
  local_68 = 0;
  do {
    puVar19 = (ushort *)&local_60;
    local_60 = *puVar20;
    puVar20 = puVar20 + 1;
    do {
      bVar14 = (byte)*puVar19;
      uVar15 = (uint)(*puVar19 >> 5);
      bVar13 = bVar14 & 0x1f;
      if ((0xf < bVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type < EMemberType::Count",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                             ,0x1c7,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar4 = local_58;
      if ((1 << bVar13 & 0xac70U) != 0) {
        uVar4 = *puVar20;
        puVar20 = puVar20 + 1;
      }
      if ((1 << bVar13 & 0x6001U) != 0) {
        FVar5 = (this->Members).AllocatorInstance.SecondaryData;
        iVar9 = *piVar2;
        if (FVar5 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
          this = (FSchemaBuilder *)FVar5;
        }
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar7 = iVar9;
        if (iVar9 - local_64 < iVar9) {
          iVar7 = iVar9 - local_64;
        }
        iVar18 = 0;
        if (0 < iVar7) {
          iVar18 = iVar7;
        }
        puVar12 = (undefined8 *)((longlong)this + ((longlong)iVar9 - (longlong)iVar18) * 0x18);
        if ((iVar18 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar3 = puVar12 + (longlong)iVar18 * 3;
        for (; puVar12 != puVar3; puVar12 = puVar12 + 3) {
          uVar4 = *puVar20;
          puVar20 = puVar20 + 1;
          *puVar12 = uVar4;
        }
        return;
      }
      if (bVar13 == 1) {
        local_68 = local_68 + 0x800 + uVar15 * 0x800;
      }
      else {
        FVar5 = (this->Members).AllocatorInstance.SecondaryData;
        iStack_48 = (uVar15 + local_68) * 8;
        FVar10 = (ForElementType<UE::GC::FMemberDeclaration>)this;
        if (FVar5 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
          FVar10 = FVar5;
        }
        local_50 = 0;
        uStack_44 = CONCAT31(uStack_44._1_3_,bVar14) & 0xffffff1f;
        local_40 = uVar4;
        if ((ulonglong)FVar10 <= &local_50) {
          lVar17 = (longlong)(this->Members).ArrayMax;
          FVar10 = (ForElementType<UE::GC::FMemberDeclaration>)this;
          if (FVar5 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
            FVar10 = FVar5;
          }
          if (&local_50 < (undefined8 *)((longlong)FVar10 + lVar17 * 0x18)) {
            local_80 = (longlong)*piVar2;
            local_78 = 0x18;
            local_90 = (ForElementType<UE::GC::FMemberDeclaration>)this;
            if (FVar5 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
              local_90 = FVar5;
            }
            local_98 = &local_50;
            local_88 = lVar17;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
        }
        iVar9 = *piVar2;
        piVar1 = &(this->Members).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::FMemberDeclaration>_>
                            (0x818,(ForElementType<UE::GC::FMemberDeclaration> *)this,piVar1);
        }
        *piVar2 = iVar9 + 1;
        FVar5 = (this->Members).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<UE::GC::FMemberDeclaration>)this;
        if (FVar5 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
          FVar10 = FVar5;
        }
        puVar12 = (undefined8 *)((longlong)FVar10 + (longlong)iVar9 * 0x18);
        *puVar12 = local_50;
        puVar12[1] = CONCAT44(uStack_44,iStack_48);
        *(undefined8 *)((uchar *)((longlong)FVar10 + 0x10) + (longlong)iVar9 * 0x18) = local_40;
        iVar9 = *piVar2;
        uVar11 = iVar9 - 1;
        uVar15 = 0;
        if ((int)uVar11 < iVar9) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if (uVar15 == 0) {
          local_98 = (undefined8 *)(longlong)(int)uVar11;
          local_90 = (ForElementType<UE::GC::FMemberDeclaration>)(longlong)iVar9;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar5 = (this->Members).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<UE::GC::FMemberDeclaration>)this;
        if (FVar5 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
          FVar10 = FVar5;
        }
        if ((1 << (((undefined1 *)((longlong)FVar10 + -0xc))[(longlong)*piVar2 * 0x18] & 0x1f) &
            0xc50U) != 0) {
          uVar16 = *(ulonglong *)((longlong)FVar10 + (longlong)*piVar2 * 0x18 + -8) &
                   0xfffffffffffffffe;
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("GetWords()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                                 ,0x5f,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          LOCK();
          piVar1 = (int *)(uVar16 - 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != (ushort *)&local_58);
  } while( true );
}

// Build @ 142023170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSchemaView __thiscall
UE::GC::FSchemaBuilder::Build
          (FSchemaBuilder *this,_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *param_1)

{
  uint *_Dst;
  int *piVar1;
  undefined8 *puVar2;
  ForElementType<UE::GC::FMemberDeclaration> FVar3;
  ulonglong uVar4;
  code *pcVar5;
  uchar *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FSchemaView FVar10;
  ForElementType<UE::GC::FMemberDeclaration> FVar11;
  TArrayView<UE::GC::FMemberDeclaration,int> *pTVar12;
  uint *puVar13;
  ForElementType<UE::GC::FMemberWord> _Src;
  ForElementType<FName> _Src_00;
  byte bVar14;
  uchar *puVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  longlong in_R8;
  longlong lVar18;
  ulonglong *puVar19;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  ForElementType<UE::GC::FMemberDeclaration> local_380;
  longlong local_378;
  longlong local_370;
  undefined8 local_368;
  TLess<void> local_358;
  undefined8 local_350;
  int iStack_348;
  uint uStack_344;
  longlong local_340;
  ulonglong local_338;
  ulonglong local_330;
  TArrayView<UE::GC::FMemberDeclaration,int> local_328;
  TArrayView<UE::GC::FMemberDeclaration,int> local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  FSchemaPacker local_2f0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_3a8;
  if (((this->StructStride & 7) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructStride % 8 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                         ,0x1f0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    FVar10.Handle = (*pcVar5)();
    return (FSchemaView)FVar10.Handle;
  }
  if ((this->BuiltSchema).bIsSet == false) {
    iVar8 = (this->Members).ArrayNum;
    if ((iVar8 != 0) || (in_R8 != 0)) {
      FVar3 = (this->Members).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::GC::FMemberDeclaration>)this;
      if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
        FVar11 = FVar3;
      }
      AlgoImpl::
      IntroSortInternal<UE::GC::FMemberDeclaration,int,UE::Core::Private::TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*>,TLess<void>_>
                ((FMemberDeclaration *)FVar11,iVar8,
                 (TProjectionMemberData<unsigned_int_UE::GC::FMemberDeclaration::*>)0x8,local_358);
      if (in_R8 == 0) {
        ToName((EMemberType)&local_350);
        uStack_344 = uStack_344 & 0xffffff00;
        local_340 = 0;
      }
      else {
        if ((GSlowARO.bValid == false) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("bValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                               ,0xb1d,L"Must call Get() at least once first"), bVar7)) {
          pcVar5 = (code *)swi(3);
          FVar10.Handle = (*pcVar5)();
          return (FSchemaView)FVar10.Handle;
        }
        puVar15 = GSlowARO.Data + 0x28;
        puVar6 = GSlowARO.Data + 0x28;
        while (GSlowARO.Data + (longlong)(int)GSlowARO.Data._104_4_ * 8 + 0x28 != puVar6) {
          if (*(longlong *)puVar15 == in_R8) {
            iVar8 = (int)((longlong)(puVar15 + -0x15501b5d8) >> 3);
            if (iVar8 != -1) {
              ToName((EMemberType)&local_350);
              local_340 = 0;
              uStack_344 = CONCAT31(uStack_344._1_3_,0xe);
              iStack_348 = iVar8;
              goto LAB_1420232f0;
            }
            break;
          }
          puVar15 = puVar15 + 8;
          puVar6 = puVar15;
        }
        ToName((EMemberType)&local_350);
        uStack_344 = CONCAT31(uStack_344._1_3_,0xd);
        local_340 = in_R8;
      }
      iStack_348 = 0;
LAB_1420232f0:
      FVar3 = (this->Members).AllocatorInstance.SecondaryData;
      uStack_300 = CONCAT44(uStack_344,iStack_348);
      FVar11 = (ForElementType<UE::GC::FMemberDeclaration>)this;
      if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
        FVar11 = FVar3;
      }
      local_2f8 = local_340;
      local_308 = local_350;
      if ((ulonglong)FVar11 <= &local_308) {
        lVar18 = (longlong)(this->Members).ArrayMax;
        FVar11 = (ForElementType<UE::GC::FMemberDeclaration>)this;
        if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
          FVar11 = FVar3;
        }
        if (&local_308 < (undefined8 *)((longlong)FVar11 + lVar18 * 0x18)) {
          local_370 = (longlong)(this->Members).ArrayNum;
          local_368 = 0x18;
          local_380 = (ForElementType<UE::GC::FMemberDeclaration>)this;
          if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
            local_380 = FVar3;
          }
          local_388 = &local_308;
          local_378 = lVar18;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            FVar10.Handle = (*pcVar5)();
            return (FSchemaView)FVar10.Handle;
          }
        }
      }
      iVar8 = (this->Members).ArrayNum;
      piVar1 = &(this->Members).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::GC::FMemberDeclaration>_>
                          (0x818,(ForElementType<UE::GC::FMemberDeclaration> *)this,piVar1);
      }
      (this->Members).ArrayNum = iVar8 + 1;
      FVar3 = (this->Members).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<UE::GC::FMemberDeclaration>)this;
      if (FVar3 != (ForElementType<UE::GC::FMemberDeclaration>)0x0) {
        FVar11 = FVar3;
      }
      puVar2 = (undefined8 *)((longlong)FVar11 + (longlong)iVar8 * 0x18);
      *puVar2 = local_308;
      puVar2[1] = uStack_300;
      *(longlong *)((uchar *)((longlong)FVar11 + 0x10) + (longlong)iVar8 * 0x18) = local_2f8;
      pTVar12 = TArrayView<UE::GC::FMemberDeclaration,int>::
                TArrayView<UE::GC::FMemberDeclaration,int><TArray<UE::GC::FMemberDeclaration,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,TArray<UE::GC::FMemberDeclaration,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
                          (&local_318,&this->Members);
      local_328.DataPtr = pTVar12->DataPtr;
      local_328.ArrayNum = pTVar12->ArrayNum;
      local_328._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
      FSchemaPacker::FSchemaPacker(&local_2f0,&local_328);
      if ((local_2f0.DebugNames.ArrayNum == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Packed.DebugNames.IsEmpty() == !(!0)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,0x200,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        FVar10.Handle = (*pcVar5)();
        return (FSchemaView)FVar10.Handle;
      }
      puVar13 = FMemory::Malloc(((longlong)local_2f0.Words.ArrayNum +
                                (longlong)local_2f0.DebugNames.ArrayNum) * 8 + 8,0);
      *puVar13 = this->StructStride;
      _Dst = puVar13 + 2;
      puVar13[1] = 0;
      _Src = (ForElementType<UE::GC::FMemberWord>)&local_2f0;
      if (local_2f0.Words.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::GC::FMemberWord>)0x0) {
        _Src = local_2f0.Words.AllocatorInstance.SecondaryData;
      }
      memcpy(_Dst,(void *)_Src,(longlong)local_2f0.Words.ArrayNum << 3);
      _Src_00 = (ForElementType<FName>)&local_2f0.DebugNames;
      if (local_2f0.DebugNames.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        _Src_00 = local_2f0.DebugNames.AllocatorInstance.SecondaryData;
      }
      memcpy(_Dst + (longlong)local_2f0.Words.ArrayNum * 2,(void *)_Src_00,
             (longlong)local_2f0.DebugNames.ArrayNum << 3);
      puVar19 = (ulonglong *)((ulonglong)_Dst & 0xfffffffffffffffe);
      puVar16 = puVar19;
      if ((puVar19 == (ulonglong *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!Schema.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                             ,0x6d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        FVar10.Handle = (*pcVar5)();
        return (FSchemaView)FVar10.Handle;
      }
      do {
        puVar17 = &local_338;
        local_338 = *puVar16;
        puVar16 = puVar16 + 1;
        do {
          bVar14 = (byte)*puVar17 & 0x1f;
          if ((0xf < bVar14) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type < EMemberType::Count",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\FastReferenceCollector.h"
                                 ,0x1c7,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            FVar10.Handle = (*pcVar5)();
            return (FSchemaView)FVar10.Handle;
          }
          uVar9 = 1 << bVar14;
          if ((uVar9 & 0x6001) != 0) {
            if (((this->BuiltSchema).bIsSet != false) &&
               (FVar10.Handle = (this->BuiltSchema).TypedValue.SchemaView,
               (FVar10.Handle & 0xfffffffffffffffe) != 0)) {
              DropSchemaReference(FVar10);
            }
            (this->BuiltSchema).TypedValue.SchemaView = (ulong64)_Dst;
            if (puVar19 != (ulonglong *)0x0) {
              LOCK();
              *(int *)((longlong)puVar19 + -4) = *(int *)((longlong)puVar19 + -4) + 1;
              UNLOCK();
            }
            (this->BuiltSchema).bIsSet = true;
            *(ulong64 *)param_1 = (this->BuiltSchema).TypedValue.SchemaView;
            if (local_2f0.DebugNames.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0)
            {
              FMemory::Free((void *)local_2f0.DebugNames.AllocatorInstance.SecondaryData);
            }
            if (local_2f0.Words.AllocatorInstance.SecondaryData ==
                (ForElementType<UE::GC::FMemberWord>)0x0) {
              return (FSchemaView)(ulong64)param_1;
            }
            FMemory::Free((void *)local_2f0.Words.AllocatorInstance.SecondaryData);
            return (FSchemaView)(ulong64)param_1;
          }
          if ((uVar9 & 0xac70) != 0) {
            uVar4 = *puVar16;
            puVar16 = puVar16 + 1;
            if ((uVar9 & 0xc50) != 0) {
              if (((uVar4 & 0xfffffffffffffffe) == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("GetWords()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollectionSchema.cpp"
                                     ,0x5f,L""), bVar7)) {
                pcVar5 = (code *)swi(3);
                FVar10.Handle = (*pcVar5)();
                return (FSchemaView)FVar10.Handle;
              }
              LOCK();
              piVar1 = (int *)((uVar4 & 0xfffffffffffffffe) - 4);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
          }
          puVar17 = (ulonglong *)((longlong)puVar17 + 2);
        } while (puVar17 != &local_330);
      } while( true );
    }
    (this->BuiltSchema).TypedValue.SchemaView = 0;
    (this->BuiltSchema).bIsSet = true;
    *(ulong64 *)param_1 = (this->BuiltSchema).TypedValue.SchemaView;
  }
  else {
    *(ulong64 *)param_1 = (this->BuiltSchema).TypedValue.SchemaView;
  }
  return (FSchemaView)(ulong64)param_1;
}

