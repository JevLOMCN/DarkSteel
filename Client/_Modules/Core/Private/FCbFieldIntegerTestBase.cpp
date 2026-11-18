// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// TestIntegerField @ 141a94440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EIntType": Some values do not have unique names */

void __thiscall
FCbFieldIntegerTestBase::TestIntegerField
          (FCbFieldIntegerTestBase *this,ECbFieldType param_1,EIntType param_2,ulong64 param_3)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  longlong lVar3;
  EIntType EVar4;
  FSharedBuffer FVar5;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  ForAnyElementType FVar11;
  uchar uVar12;
  short sVar13;
  ushort uVar14;
  FBufferOwner *pFVar15;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> TVar16;
  ECbFieldError EVar17;
  ECbFieldError EVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStackY_f8 [32];
  TCbIntegerAccessors<signed_char,&public:_signed_char___cdecl_FCbFieldView::AsInt8(signed_char)>
  local_b8 [8];
  FString local_b0;
  EIntType local_a0;
  TCbBuffer<FCbFieldView> local_98;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_80;
  FCbFieldView local_78;
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  uVar19 = param_3 - (param_1 & Null);
  lVar3 = 0x3f;
  if (uVar19 != 0) {
    for (; uVar19 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar8 = 0;
  if (uVar19 != 0) {
    iVar8 = (int)lVar3;
  }
  uVar9 = iVar8 / 7 + 1;
  uVar7 = 9;
  if ((int)uVar9 < 9) {
    uVar7 = (ulonglong)uVar9;
  }
  pbVar10 = local_60 + (uVar7 - 1);
  switch((int)uVar7) {
  case 9:
    *pbVar10 = (byte)uVar19;
    pbVar10 = local_60 + (uVar7 - 2);
    uVar19 = uVar19 >> 8;
  case 8:
    *pbVar10 = (byte)uVar19;
    pbVar10 = pbVar10 + -1;
    uVar19 = uVar19 >> 8;
  case 7:
    *pbVar10 = (byte)uVar19;
    pbVar10 = pbVar10 + -1;
    uVar19 = uVar19 >> 8;
  case 6:
    *pbVar10 = (byte)uVar19;
    pbVar10 = pbVar10 + -1;
    uVar19 = uVar19 >> 8;
  case 5:
    *pbVar10 = (byte)uVar19;
    pbVar10 = pbVar10 + -1;
    uVar19 = uVar19 >> 8;
  case 4:
    *pbVar10 = (byte)uVar19;
    pbVar10 = pbVar10 + -1;
    uVar19 = uVar19 >> 8;
  case 3:
    *pbVar10 = (byte)uVar19;
    pbVar10 = pbVar10 + -1;
    uVar19 = uVar19 >> 8;
  case 2:
    *pbVar10 = (byte)uVar19;
    pbVar10 = pbVar10 + -1;
    uVar19 = uVar19 >> 8;
  default:
    *pbVar10 = -1 << (9U - (char)uVar7 & 0x1f) | (byte)uVar19;
    pFVar15 = (FBufferOwner *)-param_3;
    if ((param_1 & Null) == None) {
      pFVar15 = (FBufferOwner *)param_3;
    }
    local_a0 = param_2;
    local_80.Owner = pFVar15;
    FCbFieldView::FCbFieldView(&local_78,local_60,param_1);
    bVar20 = (param_2 & Int8) != None;
    local_68.Owner._0_4_ = (int)((ulonglong)pFVar15 & 0xff);
    uVar19 = 8;
    if (bVar20) {
      uVar19 = (ulonglong)pFVar15 & 0xff;
    }
    EVar17 = RangeError;
    if (bVar20) {
      EVar17 = None;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,signed_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<signed_char,&FCbFieldView::AsInt8>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Int8",&local_78,(schar)uVar19,'\b',EVar17,local_b8);
    local_98.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_98._padding_._0_1_ = local_78.TypeWithFlags;
    local_98._padding_._1_1_ = local_78.Error;
    local_98._padding_._2_2_ = local_78._2_2_;
    local_98._padding_._4_4_ = local_78.NameLen;
    local_98._padding_ = (longlong)local_78.Value;
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,signed_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<signed_char,&FCbFieldView::AsInt8>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,(schar)uVar19,
               '\b',EVar17,local_b8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    FVar5.Owner.Owner = local_98.Buffer.Owner.Owner;
    if (local_98.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_98.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_98.Buffer.Owner.Owner + 0x10))(local_98.Buffer.Owner.Owner);
        *(void **)((longlong)FVar5.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar5.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar5.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar5.Owner.Owner)(FVar5.Owner.Owner,1);
        }
      }
    }
    EVar17 = RangeError;
    if ((local_a0 & Int16) != None) {
      EVar17 = None;
    }
    sVar13 = 8;
    if ((local_a0 & Int16) != None) {
      sVar13 = (short)local_80.Owner;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,short,FCbFieldIntegerTestBase::TCbIntegerAccessors<short,&FCbFieldView::AsInt16>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Int16",&local_78,sVar13,8,EVar17,
               (TCbIntegerAccessors<short,&public:_short___cdecl_FCbFieldView::AsInt16(short)> *)
               local_b8);
    local_98.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_98._padding_._0_1_ = local_78.TypeWithFlags;
    local_98._padding_._1_1_ = local_78.Error;
    local_98._padding_._2_2_ = local_78._2_2_;
    local_98._padding_._4_4_ = local_78.NameLen;
    local_98._padding_ = (longlong)local_78.Value;
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,short,FCbFieldIntegerTestBase::TCbIntegerAccessors<short,&FCbFieldView::AsInt16>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,sVar13,8,EVar17
               ,(TCbIntegerAccessors<short,&public:_short___cdecl_FCbFieldView::AsInt16(short)> *)
                local_b8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    FVar5.Owner.Owner = local_98.Buffer.Owner.Owner;
    if (local_98.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_98.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_98.Buffer.Owner.Owner + 0x10))(local_98.Buffer.Owner.Owner);
        *(void **)((longlong)FVar5.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar5.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar5.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar5.Owner.Owner)(FVar5.Owner.Owner,1);
        }
      }
    }
    EVar17 = RangeError;
    if ((local_a0 >> 2 & 1) != 0) {
      EVar17 = None;
    }
    iVar8 = 8;
    if ((local_a0 >> 2 & 1) != 0) {
      iVar8 = (int)local_80.Owner;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,int,FCbFieldIntegerTestBase::TCbIntegerAccessors<int,&FCbFieldView::AsInt32>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Int32",&local_78,iVar8,8,EVar17,
               (TCbIntegerAccessors<int,&public:_int___cdecl_FCbFieldView::AsInt32(int)> *)local_b8)
    ;
    local_98.Buffer.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    local_98._padding_._0_1_ = local_78.TypeWithFlags;
    local_98._padding_._1_1_ = local_78.Error;
    local_98._padding_._2_2_ = local_78._2_2_;
    local_98._padding_._4_4_ = local_78.NameLen;
    local_98._padding_ = (longlong)local_78.Value;
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,int,FCbFieldIntegerTestBase::TCbIntegerAccessors<int,&FCbFieldView::AsInt32>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,iVar8,8,EVar17,
               (TCbIntegerAccessors<int,&public:_int___cdecl_FCbFieldView::AsInt32(int)> *)local_b8)
    ;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    FVar5.Owner.Owner = local_98.Buffer.Owner.Owner;
    if (local_98.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_98.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
      UNLOCK();
      if ((aVar2._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_98.Buffer.Owner.Owner + 0x10))(local_98.Buffer.Owner.Owner);
        *(void **)((longlong)FVar5.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar5.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar1 = (atomic<unsigned___int64> *)((longlong)FVar5.Owner.Owner + 0x18);
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar5.Owner.Owner)(FVar5.Owner.Owner,1);
        }
      }
    }
    TVar6.Owner = local_80.Owner;
    EVar4 = local_a0;
    EVar17 = RangeError;
    if ((local_a0 >> 3 & 1) != 0) {
      EVar17 = None;
    }
    TVar16.Owner = (FBufferOwner *)&DAT_00000008;
    if ((local_a0 & Int64) != None) {
      TVar16.Owner = local_80.Owner;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,__int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<__int64,&FCbFieldView::AsInt64>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"Int64",&local_78,(long64)TVar16.Owner,8,EVar17,
               (TCbIntegerAccessors<__int64,&public:___int64___cdecl_FCbFieldView::AsInt64(__int64)>
                *)local_b8);
    local_80.Owner = (FBufferOwner *)0x0;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_98,&local_78,(FSharedBuffer)&local_80);
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<9,__int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<__int64,&FCbFieldView::AsInt64>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,
               (long64)TVar16.Owner,8,EVar17,
               (TCbIntegerAccessors<__int64,&public:___int64___cdecl_FCbFieldView::AsInt64(__int64)>
                *)local_b8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Buffer.Owner);
    bVar20 = (EVar4 >> 4 & 1) != 0;
    EVar17 = RangeError;
    EVar18 = RangeError;
    if (bVar20) {
      EVar18 = None;
    }
    uVar12 = '\b';
    if (bVar20) {
      uVar12 = (uchar)local_68.Owner;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_char,&FCbFieldView::AsUInt8>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"UInt8",&local_78,uVar12,'\b',EVar18,
               (TCbIntegerAccessors<unsigned_char,&public:_unsigned_char___cdecl_FCbFieldView::AsUInt8(unsigned_char)>
                *)local_b8);
    local_80.Owner = (FBufferOwner *)0x0;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_98,&local_78,(FSharedBuffer)&local_80);
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned_char,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_char,&FCbFieldView::AsUInt8>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,uVar12,'\b',
               EVar18,(TCbIntegerAccessors<unsigned_char,&public:_unsigned_char___cdecl_FCbFieldView::AsUInt8(unsigned_char)>
                       *)local_b8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Buffer.Owner);
    bVar20 = (EVar4 >> 5 & 1) != 0;
    EVar18 = RangeError;
    if (bVar20) {
      EVar18 = None;
    }
    uVar14 = 8;
    if (bVar20) {
      uVar14 = (ushort)TVar6.Owner;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned_short,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_short,&FCbFieldView::AsUInt16>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"UInt16",&local_78,uVar14,8,EVar18,
               (TCbIntegerAccessors<unsigned_short,&public:_unsigned_short___cdecl_FCbFieldView::AsUInt16(unsigned_short)>
                *)local_b8);
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Owner = (FBufferOwner *)0x0;
    local_80.Owner = (FBufferOwner *)0x0;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_98,&local_78,(FSharedBuffer)&local_80);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_68);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_b0);
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned_short,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_short,&FCbFieldView::AsUInt16>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,uVar14,8,EVar18
               ,(TCbIntegerAccessors<unsigned_short,&public:_unsigned_short___cdecl_FCbFieldView::AsUInt16(unsigned_short)>
                 *)local_b8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Buffer.Owner);
    bVar20 = (EVar4 >> 6 & 1) != 0;
    EVar18 = RangeError;
    if (bVar20) {
      EVar18 = None;
    }
    uVar9 = 8;
    if (bVar20) {
      uVar9 = (uint)TVar6.Owner;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned_int,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_int,&FCbFieldView::AsUInt32>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"UInt32",&local_78,uVar9,8,EVar18,
               (TCbIntegerAccessors<unsigned_int,&public:_unsigned_int___cdecl_FCbFieldView::AsUInt32(unsigned_int)>
                *)local_b8);
    local_68.Owner = (FBufferOwner *)0x0;
    local_80.Owner = (FBufferOwner *)0x0;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_98,&local_78,(FSharedBuffer)&local_b0);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_80);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_68);
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned_int,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned_int,&FCbFieldView::AsUInt32>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,uVar9,8,EVar18,
               (TCbIntegerAccessors<unsigned_int,&public:_unsigned_int___cdecl_FCbFieldView::AsUInt32(unsigned_int)>
                *)local_b8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Buffer.Owner);
    TVar16.Owner = (FBufferOwner *)&DAT_00000008;
    if ((char)EVar4 < '\0') {
      EVar17 = None;
      TVar16.Owner = TVar6.Owner;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned___int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned___int64,&FCbFieldView::AsUInt64>,FCbFieldView>
              ((FCbFieldTestBase *)this,L"UInt64",&local_78,(ulong64)TVar16.Owner,8,EVar17,
               (TCbIntegerAccessors<unsigned___int64,&public:_unsigned___int64___cdecl_FCbFieldView::AsUInt64(unsigned___int64)>
                *)local_b8);
    local_68.Owner = (FBufferOwner *)0x0;
    local_80.Owner = (FBufferOwner *)0x0;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>(&local_98,&local_78,(FSharedBuffer)&local_b0);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_80);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_68);
    TCbBuffer<FCbFieldView>::MakeOwned(&local_98);
    ::FString::PrintfImpl(&local_b0,L"%s, Clone");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FCbFieldTestBase::
    TestFieldNoClone<8,unsigned___int64,FCbFieldIntegerTestBase::TCbIntegerAccessors<unsigned___int64,&FCbFieldView::AsUInt64>,FCbField>
              ((FCbFieldTestBase *)this,(wchar_t *)FVar11.Data,(FCbField *)&local_98,
               (ulong64)TVar16.Owner,8,EVar17,
               (TCbIntegerAccessors<unsigned___int64,&public:_unsigned___int64___cdecl_FCbFieldView::AsUInt64(unsigned___int64)>
                *)local_b8);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    bVar20 = FCbFieldView::Equals(&local_78,(FCbFieldView *)&local_98);
    ::FString::PrintfImpl(&local_b0,L"FCbFieldView::Equals(%s)");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    FAutomationTestBase::TestTrue((FAutomationTestBase *)this,(wchar_t *)FVar11.Data,bVar20);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_98.Buffer.Owner);
    return;
  }
}

