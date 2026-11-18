// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// GetTestFlags @ 141a435d0

EAutomationTestFlags __thiscall FCbFieldObjectTest::GetTestFlags(FCbFieldObjectTest *this)

{
  return SmokeFilter|ProgramContext|CommandletContext|ServerContext|ClientContext|EditorContext;
}

// IsStressTest @ 141a435e0

bool __thiscall FCbFieldObjectTest::IsStressTest(FCbFieldObjectTest *this)

{
  return false;
}

// GetRequiredDeviceNum @ 141a435f0

uint __thiscall FCbFieldObjectTest::GetRequiredDeviceNum(FCbFieldObjectTest *this)

{
  return 1;
}

// GetTestSourceFileName @ 141a43600

FString * __thiscall
FCbFieldObjectTest::GetTestSourceFileName(FCbFieldObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Tests\\Serialization\\CompactBinaryTest.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 141a43630

int __thiscall FCbFieldObjectTest::GetTestSourceFileLine(FCbFieldObjectTest *this)

{
  return 0x13d;
}

// GetTests @ 141a43640

/* WARNING: Removing unreachable block (ram,0x000141a4372d) */
/* WARNING: Removing unreachable block (ram,0x000141a437f8) */

void __thiscall
FCbFieldObjectTest::GetTests
          (FCbFieldObjectTest *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 local_28;
  undefined8 local_20;
  FString local_18;
  
  ::FString::FString(&local_18,"System.Core.Serialization.CbField.Object");
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_1->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_1->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar3 + 1;
  pFVar4 = (param_1->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar4 = (param_2->AllocatorInstance).Data;
  local_28 = 0;
  local_20 = 0;
  if (((pFVar4 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(undefined8 *)pFVar4 = local_28;
  *(undefined4 *)(pFVar4 + 8) = (undefined4)local_20;
  *(undefined4 *)(pFVar4 + 0xc) = local_20._4_4_;
  return;
}

// RunTest @ 141a43820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FCbFieldObjectTest::RunTest(FCbFieldObjectTest *this,FString *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong *plVar5;
  code *pcVar6;
  void *pvVar7;
  longlong lVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  FCbObjectView *pFVar13;
  FCbFieldView *pFVar14;
  ulong64 uVar15;
  FCbField *pFVar16;
  FCbObject *pFVar17;
  FCbObjectView *pFVar18;
  TMemoryView<void_const_> *pTVar19;
  FCompositeBuffer *pFVar20;
  FSharedBuffer FVar21;
  TMemoryView<void_const_> *pTVar22;
  FCbObject *pFVar23;
  FIoHash *pFVar24;
  FIoHash *pFVar25;
  void *pvVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  undefined1 auStackY_248 [32];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_208;
  ForElementType<FSharedBuffer> FStack_200;
  undefined2 local_1f8 [4];
  TCbBuffer<FCbObjectView> local_1f0;
  FScriptContainerElement local_1d8 [16];
  TCbBuffer<FCbFieldView> local_1c8;
  TCbBuffer<FCbObjectView> local_1a8;
  FCbFieldObjectTest *local_188;
  TCbFieldIterator<FCbField> local_180;
  TCbBuffer<FCbObjectView> local_158;
  TCbFieldIterator<FCbFieldView> local_138;
  TCbFieldIterator<FCbField> local_120;
  FCompositeBuffer local_f8;
  undefined1 local_d8 [16];
  TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> local_c8 [2];
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  short local_a0;
  FBufferOwner local_98;
  int local_78;
  short local_74;
  TCbBuffer<FCbObjectView> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_188 = this;
  pFVar13 = FCbObjectView::FCbObjectView((FCbObjectView *)&local_98);
  lVar27 = *(longlong *)pFVar13;
  lVar8 = *(longlong *)&pFVar13->field_0x8;
  pFVar13 = FCbObjectView::FCbObjectView((FCbObjectView *)&local_68);
  local_1c8._padding_ = CONCAT44(local_1c8._padding_._4_4_,1);
  local_b8 = *(undefined **)pFVar13;
  uStack_b0 = *(void **)&pFVar13->field_0x8;
  local_1c8._padding_ = (longlong)local_1d8;
  local_1d8[0] = (FScriptContainerElement)0x0;
  local_158._padding_ = lVar27;
  local_158._padding_ = lVar8;
  FCbFieldTestBase::TestFieldBytes<2,FCbObjectView,TCbFieldTypeAccessors<2>_>
            ((FCbFieldTestBase *)this,L"Object, Empty",
             (TArrayView<unsigned_char_const_,int> *)&local_1c8,(FCbObjectView *)&local_b8,
             (FCbObjectView *)&local_158,None,(TCbFieldTypeAccessors<2> *)local_1f8);
  FCbObjectView::FCbObjectView((FCbObjectView *)&local_1c8);
  `FCbFieldObjectTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_188,(FCbObjectView *)&local_1c8,0,1);
  local_158._padding_._0_4_ = 5;
  local_158._padding_ = 0x150688d2c;
  pFVar14 = FCbObjectView::FindView
                      ((FCbObjectView *)&local_1c8,(FCbFieldView *)&local_b8,
                       (TStringView<char8_t> *)&local_158);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObjectView()::Find(Missing)",
             (pFVar14->TypeWithFlags & CustomByName) != None);
  local_158._padding_._0_4_ = 5;
  local_158._padding_ = 0x150688d2c;
  pFVar14 = FCbObjectView::FindViewIgnoreCase
                      ((FCbObjectView *)&local_1c8,(FCbFieldView *)&local_b8,
                       (TStringView<char8_t> *)&local_158);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObjectView()::FindViewIgnoreCase(Missing)",
             (pFVar14->TypeWithFlags & CustomByName) != None);
  local_158._padding_ = CONCAT44(local_158._padding_._4_4_,5);
  local_158._padding_ = 0x150688d2c;
  FCbObjectView::FindView
            ((FCbObjectView *)&local_1c8,(FCbFieldView *)&local_b8,
             (TStringView<char8_t> *)&local_158);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObjectView()::operator[](Missing)",
             ((ulonglong)local_b8 & 0x1f) != 0);
  FCbFieldView::CreateViewIterator((FCbFieldView *)&local_1c8,(FCbFieldViewIterator *)&local_1f0);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObjectView()::CreateViewIterator() At End",
             (local_1f0._padding_ & 0x1fU) != 0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView()::CreateViewIterator() At End",
             (local_1f0._padding_ & 0x1fU) == 0);
  iVar28 = 0x10;
  do {
    TCbFieldIterator<FCbFieldView>::operator++((TCbFieldIterator<FCbFieldView> *)&local_1f0);
    FCbFieldView::AsInteger((FCbFieldView *)&local_1f0,0,(FIntegerParams)0x3f);
    iVar28 = iVar28 + -1;
  } while (0 < iVar28);
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObjectView()::CreateViewIterator() At End",
             (local_1f0._padding_ & 0x1fU) != 0);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView()::CreateViewIterator() At End",
             (local_1f0._padding_ & 0x1fU) == 0);
  local_98._padding_._0_1_ = 0xc;
  local_98._padding_._1_1_ = 0x88;
  local_98._padding_._2_2_ = 0x4101;
  local_98._padding_._4_4_ = 0x42018801;
  local_98.Data._0_1_ = 2;
  local_98.Data._1_2_ = 0x188;
  local_98.Data._3_1_ = 0x43;
  local_98.Data._4_4_ = CONCAT31(local_98.Data._5_3_,3);
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_1c8,&local_98,Object);
  pFVar13 = FCbObjectView::FCbObjectView((FCbObjectView *)&local_208);
  puVar9 = *(undefined **)pFVar13;
  pvVar7 = *(void **)&pFVar13->field_0x8;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_158,&local_98,Object);
  local_68._padding_ = local_158._padding_;
  local_68._padding_ = local_158._padding_;
  local_b8 = puVar9;
  uStack_b0 = pvVar7;
  FCbFieldTestBase::TestField<2,FCbObjectView,TCbFieldTypeAccessors<2>_>
            ((FCbFieldTestBase *)this,L"Object, NotEmpty",(FCbFieldView *)&local_1c8,
             (FCbObjectView *)&local_68,(FCbObjectView *)&local_b8,None,
             (TCbFieldTypeAccessors<2> *)local_1f8);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_1c8,(FCbObjectView *)&local_158);
  iVar28 = 0;
  local_208.Owner = (FBufferOwner *)0x0;
  local_1a8._padding_ = 0;
  local_f8.Segments.AllocatorInstance.InlineData[0] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[1] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[2] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[3] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[4] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[5] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[6] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[7] = '\0';
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>(&local_1f0,pFVar13,(FSharedBuffer)&local_f8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1a8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_208);
  TCbBuffer<FCbObjectView>::MakeOwned(&local_1f0);
  `FCbFieldObjectTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_188,(FCbObjectView *)&local_1f0,3,0xd);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_1c8,(FCbObjectView *)&local_158);
  `FCbFieldObjectTest::RunTest'::__l2::<lambda_1>::operator()(&local_188,pFVar13,3,0xd);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_1c8,(FCbObjectView *)&local_158);
  bVar10 = FCbObjectView::Equals((FCbObjectView *)&local_1f0,pFVar13);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView::Equals()",bVar10);
  local_158._padding_._0_4_ = 1;
  local_158._padding_ = 0x1506dcc58;
  pFVar14 = FCbObjectView::FindView
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_b8,
                       (TStringView<char8_t> *)&local_158);
  uVar15 = FCbFieldView::AsInteger(pFVar14,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"FCbObjectView::Find()",(int)uVar15,2)
  ;
  local_158._padding_._0_4_ = 1;
  local_158._padding_ = (longlong)&s_b;
  pFVar14 = FCbObjectView::FindView
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_b8,
                       (TStringView<char8_t> *)&local_158);
  uVar15 = FCbFieldView::AsInteger(pFVar14,4,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual((FAutomationTestBase *)this,L"FCbObjectView::Find()",(int)uVar15,4)
  ;
  local_158._padding_._0_4_ = 1;
  local_158._padding_ = 0x1506dcc58;
  pFVar14 = FCbObjectView::FindViewIgnoreCase
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_b8,
                       (TStringView<char8_t> *)&local_158);
  uVar15 = FCbFieldView::AsInteger(pFVar14,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView::FindViewIgnoreCase()",(int)uVar15,2);
  local_158._padding_._0_4_ = 1;
  local_158._padding_ = (longlong)&s_b;
  pFVar14 = FCbObjectView::FindViewIgnoreCase
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_b8,
                       (TStringView<char8_t> *)&local_158);
  uVar15 = FCbFieldView::AsInteger(pFVar14,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView::FindViewIgnoreCase()",(int)uVar15,2);
  local_158._padding_._0_4_ = 1;
  local_158._padding_ = 0x1506dcc58;
  pFVar16 = FCbObject::operator[]
                      ((FCbObject *)&local_1f0,(FCbField *)&local_138,
                       (TStringView<char8_t> *)&local_158);
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)pFVar16,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView::operator[]",(int)uVar15,2);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
  local_158._padding_ = CONCAT44(local_158._padding_._4_4_,1);
  local_158._padding_ = (longlong)&s_b;
  pFVar16 = FCbObject::operator[]
                      ((FCbObject *)&local_1f0,(FCbField *)&local_138,
                       (TStringView<char8_t> *)&local_158);
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)pFVar16,4,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView::operator[]",(int)uVar15,4);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1f0.Buffer.Owner);
  local_68._padding_ = 0x24201014101880a;
  local_68._padding_ = CONCAT53(local_68._padding_._3_5_,0x34301);
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_158,&local_68,UniformObject);
  pFVar13 = FCbObjectView::FCbObjectView((FCbObjectView *)&local_138);
  lVar27 = *(longlong *)pFVar13;
  lVar8 = *(longlong *)&pFVar13->field_0x8;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_208,&local_68,UniformObject);
  local_f8.Segments.AllocatorInstance.InlineData = (uchar  [8])local_208.Owner;
  local_f8.Segments.AllocatorInstance.SecondaryData = FStack_200;
  local_1a8._padding_ = lVar27;
  local_1a8._padding_ = lVar8;
  FCbFieldTestBase::TestField<3,FCbObjectView,TCbFieldTypeAccessors<3>_>
            ((FCbFieldTestBase *)this,L"UniformObject, NotEmpty",(FCbFieldView *)&local_158,
             (FCbObjectView *)&local_f8,(FCbObjectView *)&local_1a8,None,
             (TCbFieldTypeAccessors<3> *)local_1f8);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_158,(FCbObjectView *)&local_138);
  local_f8.Segments.AllocatorInstance.InlineData[0] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[1] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[2] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[3] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[4] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[5] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[6] = '\0';
  local_f8.Segments.AllocatorInstance.InlineData[7] = '\0';
  local_1a8._padding_ = 0;
  local_208.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>(&local_1f0,pFVar13,(FSharedBuffer)&local_208);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1a8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_f8);
  TCbBuffer<FCbObjectView>::MakeOwned(&local_1f0);
  `FCbFieldObjectTest::RunTest'::__l2::<lambda_1>::operator()
            (&local_188,(FCbObjectView *)&local_1f0,3,0xb);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_158,(FCbObjectView *)&local_138);
  `FCbFieldObjectTest::RunTest'::__l2::<lambda_1>::operator()(&local_188,pFVar13,3,0xb);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_158,(FCbObjectView *)&local_138);
  bVar10 = FCbObjectView::Equals((FCbObjectView *)&local_1f0,pFVar13);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::Equals()",bVar10);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)0x1506dcc58;
  pFVar14 = FCbObjectView::FindView
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_138,
                       (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger(pFVar14,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::Find()",(int)uVar15,2);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)0x1506dcc58;
  pFVar16 = FCbObject::Find((FCbObject *)&local_1f0,(FCbField *)&local_138,
                            (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)pFVar16,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::Find()",(int)uVar15,2);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)&s_b;
  pFVar14 = FCbObjectView::FindView
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_138,
                       (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger(pFVar14,4,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::Find()",(int)uVar15,4);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)&s_b;
  pFVar16 = FCbObject::Find((FCbObject *)&local_1f0,(FCbField *)&local_138,
                            (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)pFVar16,4,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::Find()",(int)uVar15,4);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)0x1506dcc58;
  pFVar14 = FCbObjectView::FindViewIgnoreCase
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_138,
                       (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger(pFVar14,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::FindViewIgnoreCase()",(int)uVar15
             ,2);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)0x1506dcc58;
  pFVar16 = FCbObject::FindIgnoreCase
                      ((FCbObject *)&local_1f0,(FCbField *)&local_138,
                       (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)pFVar16,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::FindViewIgnoreCase()",(int)uVar15
             ,2);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)&s_b;
  pFVar14 = FCbObjectView::FindViewIgnoreCase
                      ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_138,
                       (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger(pFVar14,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::FindViewIgnoreCase()",(int)uVar15
             ,2);
  FStack_200._0_4_ = 1;
  local_208.Owner = (FBufferOwner *)&s_b;
  pFVar16 = FCbObject::FindIgnoreCase
                      ((FCbObject *)&local_1f0,(FCbField *)&local_138,
                       (TStringView<char8_t> *)&local_208);
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)pFVar16,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::FindViewIgnoreCase()",(int)uVar15
             ,2);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
  local_208.Owner = (FBufferOwner *)0x1506dcc58;
  FStack_200._0_4_ = 1;
  local_1a8._padding_ = 0x1506dcc58;
  local_1a8._padding_ = (longlong)FStack_200;
  FCbObjectView::FindView
            ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_208,
             (TStringView<char8_t> *)&local_1a8);
  if (((ulonglong)local_208.Owner & 0x1f) == 0) {
    local_138._padding_ = 0;
    local_138._padding_ = 0;
    local_138.FieldsEnd = (longlong *)0x0;
  }
  else {
    local_1a8._padding_ = local_1f0._padding_;
    local_1a8._padding_ = local_1f0._padding_;
    if (local_1f0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18) =
             (atomic<unsigned___int64>)
             ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18)
             + 0x40000000);
        UNLOCK();
      }
    }
    local_1a8.Buffer.Owner.Owner = local_1f0.Buffer.Owner.Owner;
    FCbField::FCbField<FCbObjectView>((FCbField *)&local_138,(FCbFieldView *)&local_208,&local_1a8);
  }
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)&local_138,0,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::operator[]",(int)uVar15,2);
  pvVar7 = local_138.FieldsEnd;
  if (local_138.FieldsEnd != (longlong *)0x0) {
    LOCK();
    plVar5 = (longlong *)((longlong)local_138.FieldsEnd + 0x18);
    lVar27 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (((uint)lVar27 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_138.FieldsEnd + 0x10))(local_138.FieldsEnd);
      *(longlong *)((longlong)pvVar7 + 8) = 0;
      *(longlong *)((longlong)pvVar7 + 0x10) = 0;
      LOCK();
      plVar5 = (longlong *)((longlong)pvVar7 + 0x18);
      uVar3 = *plVar5;
      *plVar5 = *plVar5 + -0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)pvVar7)(pvVar7,1);
      }
    }
  }
  local_208.Owner = (FBufferOwner *)&s_b;
  FStack_200._0_4_ = 1;
  local_1a8._padding_ = (longlong)&s_b;
  local_1a8._padding_ = (longlong)FStack_200;
  FCbObjectView::FindView
            ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_208,
             (TStringView<char8_t> *)&local_1a8);
  if (((ulonglong)local_208.Owner & 0x1f) == 0) {
    local_138._padding_ = 0;
    local_138._padding_ = 0;
    local_138.FieldsEnd = (longlong *)0x0;
  }
  else {
    local_1a8._padding_ = local_1f0._padding_;
    local_1a8._padding_ = local_1f0._padding_;
    if (local_1f0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18) =
             (atomic<unsigned___int64>)
             ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18)
             + 0x40000000);
        UNLOCK();
      }
    }
    local_1a8.Buffer.Owner.Owner = local_1f0.Buffer.Owner.Owner;
    FCbField::FCbField<FCbObjectView>((FCbField *)&local_138,(FCbFieldView *)&local_208,&local_1a8);
  }
  uVar15 = FCbFieldView::AsInteger((FCbFieldView *)&local_138,4,(FIntegerParams)0x3f);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(Uniform)::operator[]",(int)uVar15,4);
  pvVar7 = local_138.FieldsEnd;
  if (local_138.FieldsEnd != (longlong *)0x0) {
    LOCK();
    plVar5 = (longlong *)((longlong)local_138.FieldsEnd + 0x18);
    lVar27 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (((uint)lVar27 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_138.FieldsEnd + 0x10))(local_138.FieldsEnd);
      *(longlong *)((longlong)pvVar7 + 8) = 0;
      *(longlong *)((longlong)pvVar7 + 0x10) = 0;
      LOCK();
      plVar5 = (longlong *)((longlong)pvVar7 + 0x18);
      uVar3 = *plVar5;
      *plVar5 = *plVar5 + -0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)pvVar7)(pvVar7,1);
      }
    }
  }
  pFVar16 = FCbObject::AsField((FCbObject *)&local_1f0,(FCbField *)&local_1a8);
  pFVar17 = FCbField::AsObject(pFVar16,(FCbObject *)&local_138);
  local_208.Owner = *(FBufferOwner **)&pFVar17->field_0x10;
  *(undefined8 *)&pFVar17->field_0x10 = 0;
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObject::AsField()",
             local_1f0.Buffer.Owner.Owner ==
             (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)local_208.Owner);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_208);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1a8.Buffer.Owner);
  local_b8 = (undefined *)0x1014101880a4f01;
  uStack_b0 = (void *)CONCAT35(uStack_b0._5_3_,0x343010242);
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_1c8,&local_b8,HasFieldName|UniformObject);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_158,(FCbObjectView *)&local_138);
  pFVar18 = FCbFieldView::AsObjectView((FCbFieldView *)&local_1c8,(FCbObjectView *)&local_208);
  bVar10 = FCbObjectView::Equals(pFVar13,pFVar18);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView::Equals()",bVar10);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_158,(FCbObjectView *)&local_138);
  iVar29 = 0;
  local_208.Owner =
       (FBufferOwner *)
       (CONCAT71((int7)((ulonglong)local_208.Owner >> 8),*(undefined1 *)pFVar13) & 0xffff003f);
  FStack_200 = *(ForElementType<FSharedBuffer> *)&pFVar13->field_0x8;
  bVar10 = FCbFieldView::Equals((FCbFieldView *)&local_158,(FCbFieldView *)&local_208);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView::AsFieldView().Equals()",bVar10);
  uVar3 = (ulonglong)local_1a8._padding_ >> 8;
  local_1a8._padding_ = local_1c8._padding_;
  local_1a8._padding_ =
       (longlong)((uint)CONCAT71((int7)uVar3,(undefined1)local_1c8._padding_) & 0xffff003f);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_1c8,(FCbObjectView *)&local_138);
  local_208.Owner =
       (FBufferOwner *)
       (CONCAT71((int7)((ulonglong)local_208.Owner >> 8),*(undefined1 *)pFVar13) & 0xffff003f);
  FStack_200 = *(ForElementType<FSharedBuffer> *)&pFVar13->field_0x8;
  bVar10 = FCbFieldView::Equals((FCbFieldView *)&local_1a8,(FCbFieldView *)&local_208);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView::AsFieldView().Equals()",bVar10);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_158,(FCbObjectView *)&local_138);
  local_208.Owner = &local_98;
  FStack_200 = (ForElementType<FSharedBuffer>)&DAT_0000000c;
  FCbObjectView::CopyTo(pFVar13,(TMemoryView<void> *)&local_208);
  lVar27 = local_68._padding_ -
           CONCAT17(local_98.Data._0_1_,
                    CONCAT43(local_98._padding_._4_4_,
                             CONCAT21(local_98._padding_._2_2_,local_98._padding_._1_1_)));
  if ((lVar27 == 0) &&
     (lVar27 = (local_68._padding_ & 0xffffU) - (ulonglong)local_98.Data._1_2_, lVar27 == 0)) {
    lVar27 = ((ulonglong)local_68._padding_ >> 0x10 & 0xff) - (ulonglong)local_98.Data._3_1_;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView(NoType)::CopyTo()",lVar27 == 0);
  pFVar13 = FCbFieldView::AsObjectView((FCbFieldView *)&local_1c8,(FCbObjectView *)&local_138);
  local_208.Owner = &local_98;
  FStack_200 = (ForElementType<FSharedBuffer>)&DAT_0000000c;
  FCbObjectView::CopyTo(pFVar13,(TMemoryView<void> *)&local_208);
  lVar27 = local_68._padding_ -
           CONCAT17(local_98.Data._0_1_,
                    CONCAT43(local_98._padding_._4_4_,
                             CONCAT21(local_98._padding_._2_2_,local_98._padding_._1_1_)));
  if ((lVar27 == 0) &&
     (lVar27 = (local_68._padding_ & 0xffffU) - (ulonglong)local_98.Data._1_2_, lVar27 == 0)) {
    lVar27 = ((ulonglong)local_68._padding_ >> 0x10 & 0xff) - (ulonglong)local_98.Data._3_1_;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView(NoType, Name)::CopyTo()",lVar27 == 0);
  if (((char)(byte)local_1f0._padding_ < '\0') || (((byte)local_1f0._padding_ & 0x40) == 0)) {
LAB_141a44646:
    bVar10 = false;
  }
  else {
    pTVar19 = FCbFieldView::GetView
                        ((FCbFieldView *)&local_1f0,(TMemoryView<void_const_> *)&local_138);
    pvVar7 = pTVar19->Data;
    uVar15 = pTVar19->Size;
    pTVar19 = FSharedBuffer::GetView(&local_1f0.Buffer,(TMemoryView<void_const_> *)&local_208);
    if ((uVar15 != pTVar19->Size) || ((uVar15 != 0 && (pvVar7 != pTVar19->Data))))
    goto LAB_141a44646;
    bVar10 = true;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView(Clone)::TryGetView()",bVar10);
  pFVar14 = (FCbFieldView *)
            FCbFieldView::AsObjectView((FCbFieldView *)&local_158,(FCbObjectView *)&local_138);
  if (((char)pFVar14->TypeWithFlags < '\0') || ((pFVar14->TypeWithFlags & HasFieldType) == None)) {
    bVar10 = false;
  }
  else {
    FCbFieldView::GetView(pFVar14,(TMemoryView<void_const_> *)&local_208);
    bVar10 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObjectView(NoType)::TryGetView()",bVar10);
  pFVar14 = (FCbFieldView *)
            FCbFieldView::AsObjectView((FCbFieldView *)&local_1c8,(FCbObjectView *)&local_138);
  if (((char)pFVar14->TypeWithFlags < '\0') || ((pFVar14->TypeWithFlags & HasFieldType) == None)) {
    bVar10 = false;
  }
  else {
    FCbFieldView::GetView(pFVar14,(TMemoryView<void_const_> *)&local_208);
    bVar10 = true;
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObjectView(Name)::TryGetView()",bVar10);
  pFVar20 = FCbObject::GetBuffer((FCbObject *)&local_1f0,&local_f8);
  FVar21 = FCompositeBuffer::ToShared(pFVar20);
  pTVar19 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar21.Owner.Owner,(TMemoryView<void_const_> *)&local_138);
  pTVar22 = FSharedBuffer::GetView(&local_1f0.Buffer,(TMemoryView<void_const_> *)&local_1a8);
  if ((pTVar19->Size == pTVar22->Size) && ((pTVar19->Size == 0 || (pTVar19->Data == pTVar22->Data)))
     ) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView(Clone)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_208);
  FCompositeBuffer::~FCompositeBuffer(&local_f8);
  local_208.Owner = (FBufferOwner *)0x0;
  pFVar16 = TCbBufferFactory<FCbField,FCbFieldView>::MakeView
                      ((FCbField *)&local_120,(FCbFieldView *)&local_158,(FSharedBuffer)&local_208);
  pFVar17 = FCbField::AsObject(pFVar16,(FCbObject *)&local_180);
  pFVar20 = FCbObject::GetBuffer(pFVar17,(FCompositeBuffer *)local_d8);
  FVar21 = FCompositeBuffer::ToShared(pFVar20);
  pTVar19 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar21.Owner.Owner,(TMemoryView<void_const_> *)&local_138);
  pTVar22 = FSharedBuffer::GetView(&local_1f0.Buffer,(TMemoryView<void_const_> *)&local_f8);
  if (pTVar19->Size == pTVar22->Size) {
    if ((pTVar19->Data != pTVar22->Data) &&
       (iVar12 = memcmp(pTVar19->Data,pTVar22->Data,pTVar19->Size), iVar12 != 0))
    goto LAB_141a447ca;
    bVar10 = true;
  }
  else {
LAB_141a447ca:
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView(NoType)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1a8);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)local_d8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_180._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_120._padding_);
  local_208.Owner = (FBufferOwner *)0x0;
  pFVar16 = TCbBufferFactory<FCbField,FCbFieldView>::MakeView
                      ((FCbField *)local_d8,(FCbFieldView *)&local_1c8,(FSharedBuffer)&local_208);
  pFVar17 = FCbField::AsObject(pFVar16,(FCbObject *)&local_180);
  pFVar20 = FCbObject::GetBuffer(pFVar17,(FCompositeBuffer *)&local_120);
  FVar21 = FCompositeBuffer::ToShared(pFVar20);
  pTVar19 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar21.Owner.Owner,(TMemoryView<void_const_> *)&local_138);
  pTVar22 = FSharedBuffer::GetView(&local_1f0.Buffer,(TMemoryView<void_const_> *)&local_f8);
  if (pTVar19->Size == pTVar22->Size) {
    if ((pTVar19->Data != pTVar22->Data) &&
       (iVar12 = memcmp(pTVar19->Data,pTVar22->Data,pTVar19->Size), iVar12 != 0))
    goto LAB_141a4487c;
    bVar10 = true;
  }
  else {
LAB_141a4487c:
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbObjectView(Name)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1a8);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_120);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_180._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_c8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1f0.Buffer.Owner);
  local_1c8._padding_ = ((ulonglong)local_1c8._padding_ >> 0x10 & 0xffff) << 0x10;
  local_1c8._padding_ = 0;
  pFVar13 = FCbObjectView::FCbObjectView((FCbObjectView *)&local_138);
  local_158._padding_ = *(longlong *)pFVar13;
  local_158._padding_ = *(longlong *)&pFVar13->field_0x8;
  local_b8 = (undefined *)local_158._padding_;
  uStack_b0 = (void *)local_158._padding_;
  FCbFieldTestBase::TestFieldNoClone<2,FCbObjectView,TCbFieldTypeAccessors<2>,FCbFieldView>
            ((FCbFieldTestBase *)this,L"Object, None, View",(FCbFieldView *)&local_1c8,
             (FCbObjectView *)&local_b8,(FCbObjectView *)&local_158,TypeError,
             (TCbFieldTypeAccessors<2> *)local_1f8);
  local_98._padding_._0_1_ = 0;
  local_98._padding_._1_1_ = 0;
  local_98._padding_._4_4_ = 0;
  local_98.Data._0_1_ = 0;
  local_98.Data._1_2_ = 0;
  local_98.Data._3_1_ = 0;
  local_98.Data._4_4_ = 0;
  local_98.Size = 0;
  local_1f0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_1f0._padding_ = 0;
  local_1f0._padding_ = 0;
  FCbObjectView::FCbObjectView((FCbObjectView *)&local_1f0);
  local_1f0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  pFVar17 = FCbObject::FCbObject((FCbObject *)&local_120,(FCbObject *)&local_1f0);
  pFVar23 = FCbObject::FCbObject((FCbObject *)&local_180,(FCbObject *)&local_1f0);
  FCbFieldTestBase::TestFieldNoClone<2,FCbObject,FCbFieldObjectAccessors,FCbField>
            ((FCbFieldTestBase *)this,L"Object, None",(FCbField *)&local_98,pFVar23,pFVar17,
             TypeError,(FCbFieldObjectAccessors *)local_1f8);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1f0.Buffer.Owner);
  uVar15 = local_98.Size;
  if ((FBufferOwner *)local_98.Size != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)(local_98.Size + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_98.Size + 0x10))(local_98.Size);
      *(void **)(uVar15 + 8) = (void *)0x0;
      *(ulong64 *)(uVar15 + 0x10) = 0;
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)(uVar15 + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)*(longlong *)uVar15)(uVar15,1);
      }
    }
  }
  local_a8 = 0x654b0382;
  uStack_a4 = 0x1880479;
  local_a0 = 0x846;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_1c8,&local_a8,HasFieldType);
  uVar15 = FCbObjectView::GetSize((FCbObjectView *)&local_1c8);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObjectView(ObjectWithName)::GetSize()",uVar15,6);
  local_1a8._padding_ = 0;
  local_208.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
            (&local_1f0,(FCbObjectView *)&local_1c8,(FSharedBuffer)&local_208);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_1a8);
  TCbBuffer<FCbObjectView>::MakeOwned(&local_1f0);
  uVar15 = FCbObjectView::GetSize((FCbObjectView *)&local_1f0);
  FAutomationTestBase::TestEqual
            ((FAutomationTestBase *)this,L"FCbObject(ObjectWithName)::GetSize()",uVar15,6);
  bVar10 = FCbObjectView::Equals((FCbObjectView *)&local_1c8,(FCbObjectView *)&local_1f0);
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView::Equals()",bVar10);
  pFVar24 = FCbObjectView::GetHash((FCbObjectView *)&local_1c8,(FIoHash *)&local_138);
  pFVar25 = FCbObjectView::GetHash((FCbObjectView *)&local_1f0,(FIoHash *)&local_158);
  FAutomationTestBase::TestEqual<FIoHash>
            ((FAutomationTestBase *)this,L"FCbObjectView::GetHash()",pFVar25,pFVar24);
  TCbBuffer<FCbObjectView>::CreateIterator(&local_1f0,(FCbFieldIterator *)&local_120);
  uVar3 = local_138._padding_;
  lVar27 = local_138._padding_;
  plVar5 = local_138.FieldsEnd;
  local_138._padding_ = local_120._padding_;
  local_138._padding_ = local_120._padding_;
  local_138.FieldsEnd = (void *)local_120._padding_;
  while (local_120._padding_ = local_138._padding_, (local_138._padding_ & 0x1fU) != 0) {
    if (local_138.FieldsEnd != (longlong *)0x0) {
      LOCK();
      plVar5 = (longlong *)((longlong)local_138.FieldsEnd + 0x18);
      uVar3 = *plVar5;
      *plVar5 = *plVar5 + 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)((longlong)local_138.FieldsEnd + 0x18) =
             *(longlong *)((longlong)local_138.FieldsEnd + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    local_b8 = (undefined *)(local_138._padding_ - ((ulonglong)local_138._padding_ >> 0x20));
    uVar3 = (ulonglong)uStack_b0 >> 0x20;
    uStack_b0 = (void *)CONCAT44((int)uVar3,(int)((ulonglong)local_138._padding_ >> 0x20));
    local_158._padding_ = (longlong)&s_F;
    local_158._padding_._4_4_ = (undefined4)((ulonglong)local_158._padding_ >> 0x20);
    local_158._padding_ = CONCAT44(local_158._padding_._4_4_,1);
    local_68._padding_ = (longlong)uStack_b0;
    local_98._padding_._0_1_ = 0x94;
    local_98._padding_._1_1_ = 0xd2;
    local_98._padding_._2_2_ = 0x506d;
    local_98._padding_._4_4_ = 1;
    local_98.Data._0_1_ = 1;
    local_98.Data._1_2_ = 0;
    local_98.Data._3_1_ = 0;
    local_98.Data._4_4_ = local_158._padding_._4_4_;
    local_120._padding_ = local_138._padding_;
    local_120._padding_ = (longlong)local_138.FieldsEnd;
    local_68._padding_ = (longlong)local_b8;
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"FCbObject::CreateIterator().GetName()",
               (TStringView<char8_t> *)&local_68,(TStringView<char8_t> *)&local_98);
    uVar15 = FCbFieldView::AsInteger((FCbFieldView *)&local_138,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual
              ((FAutomationTestBase *)this,L"FCbObject::CreateIterator().AsInt32()",(int)uVar15,8);
    if ((local_138.FieldsEnd == (longlong *)0x0) ||
       (((byte)((ulonglong)*(longlong *)((longlong)local_138.FieldsEnd + 0x18) >> 0x3c) & 1) == 0))
    {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"FCbObject::CreateIterator().IsOwned()",bVar10);
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
    TCbFieldIterator<FCbField>::operator++(&local_120);
    uVar3 = local_138._padding_;
    lVar27 = local_138._padding_;
    plVar5 = local_138.FieldsEnd;
    local_138._padding_ = local_120._padding_;
    local_138._padding_ = local_120._padding_;
    local_138.FieldsEnd = (void *)local_120._padding_;
  }
  local_138._padding_ = uVar3;
  local_138._padding_ = lVar27;
  local_138.FieldsEnd = plVar5;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_120._padding_);
  TCbBuffer<FCbObjectView>::CreateIterator(&local_1f0,(FCbFieldIterator *)&local_180);
  local_120._padding_ = 0;
  local_120._padding_ = 0;
  local_120._padding_ = ((ulonglong)local_120._padding_ >> 0x10 & 0xffff) << 0x10;
  local_120.FieldsEnd = (void *)0x0;
  while ((local_180._padding_ != 0 || (local_180.FieldsEnd != (void *)0x0))) {
    TCbFieldIterator<FCbField>::operator++(&local_180);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_120._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_180._padding_);
  TCbBuffer<FCbObjectView>::CreateIterator(&local_1f0,(FCbFieldIterator *)&local_120);
  uVar3 = local_138._padding_;
  lVar27 = local_138._padding_;
  plVar5 = local_138.FieldsEnd;
  local_138._padding_ = local_120._padding_;
  local_138._padding_ = local_120._padding_;
  local_138.FieldsEnd = (void *)local_120._padding_;
  while (local_120._padding_ = local_138._padding_, local_120._padding_ = local_138._padding_,
        local_120._padding_ = (longlong)local_138.FieldsEnd, (local_138._padding_ & 0x1fU) != 0) {
    if (local_138.FieldsEnd != (longlong *)0x0) {
      LOCK();
      plVar5 = (longlong *)((longlong)local_138.FieldsEnd + 0x18);
      uVar3 = *plVar5;
      *plVar5 = *plVar5 + 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 0) {
        LOCK();
        *(longlong *)((longlong)local_138.FieldsEnd + 0x18) =
             *(longlong *)((longlong)local_138.FieldsEnd + 0x18) + 0x40000000;
        UNLOCK();
      }
    }
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
    TCbFieldIterator<FCbField>::operator++(&local_120);
    uVar3 = local_138._padding_;
    lVar27 = local_138._padding_;
    plVar5 = local_138.FieldsEnd;
    local_138._padding_ = local_120._padding_;
    local_138._padding_ = local_120._padding_;
    local_138.FieldsEnd = (void *)local_120._padding_;
  }
  local_138._padding_ = uVar3;
  local_138._padding_ = lVar27;
  local_138.FieldsEnd = plVar5;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_120._padding_);
  local_158._padding_ = (longlong)&local_78;
  local_158._padding_ = (longlong)&DAT_00000006;
  FCbObjectView::CopyTo((FCbObjectView *)&local_1c8,(TMemoryView<void> *)&local_158);
  pTVar19 = FSharedBuffer::GetView(&local_1f0.Buffer,(TMemoryView<void_const_> *)&local_138);
  if ((pTVar19->Size == 6) &&
     ((piVar4 = pTVar19->Data, piVar4 == &local_78 ||
      ((*piVar4 == local_78 && ((short)piVar4[1] == local_74)))))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView(Name)::CopyTo()",bVar10)
  ;
  local_158._padding_ = (longlong)&local_78;
  local_158._padding_ = (longlong)&DAT_00000006;
  FCbObjectView::CopyTo((FCbObjectView *)&local_1f0,(TMemoryView<void> *)&local_158);
  pTVar19 = FSharedBuffer::GetView(&local_1f0.Buffer,(TMemoryView<void_const_> *)&local_138);
  if ((pTVar19->Size == 6) &&
     ((piVar4 = pTVar19->Data, piVar4 == &local_78 ||
      ((*piVar4 == local_78 && ((short)piVar4[1] == local_74)))))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue((FAutomationTestBase *)this,L"FCbObjectView()::CopyTo()",bVar10);
  local_158._padding_ = (longlong)&local_a8;
  local_158._padding_ = (longlong)&DAT_0000000a;
  FVar21 = FSharedBuffer::MakeView((TMemoryView<void_const_> *)&local_1a8);
  pFVar16 = FCbField::FCbField((FCbField *)&local_180,FVar21,HasFieldType);
  pFVar20 = FCbField::GetBuffer(pFVar16,(FCompositeBuffer *)&local_120);
  FVar21 = FCompositeBuffer::ToShared(pFVar20);
  pTVar19 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar21.Owner.Owner,(TMemoryView<void_const_> *)&local_138);
  if ((pTVar19->Size == 10) &&
     ((plVar5 = pTVar19->Data, plVar5 == (longlong *)&local_a8 ||
      ((*plVar5 == CONCAT44(uStack_a4,local_a8) && ((short)plVar5[1] == local_a0)))))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(ObjectWithName)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_208);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_120);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_180._padding_);
  local_158._padding_ = (longlong)&local_a8;
  local_158._padding_ = (longlong)&DAT_0000000a;
  FVar21 = FSharedBuffer::MakeView((TMemoryView<void_const_> *)&local_1a8);
  pFVar14 = FCbFieldView::FCbFieldView
                      ((FCbFieldView *)&local_138,(void *)((longlong)&local_a8 + 1),
                       HasFieldName|Object);
  pFVar16 = FCbField::FCbField((FCbField *)&local_180,pFVar14,FVar21);
  pFVar20 = FCbField::GetBuffer(pFVar16,(FCompositeBuffer *)&local_120);
  FVar21 = FCompositeBuffer::ToShared(pFVar20);
  pTVar19 = FSharedBuffer::GetView
                      ((FSharedBuffer *)FVar21.Owner.Owner,(TMemoryView<void_const_> *)&local_98);
  if ((pTVar19->Size == 10) &&
     ((plVar5 = pTVar19->Data, plVar5 == (longlong *)&local_a8 ||
      ((*plVar5 == CONCAT44(uStack_a4,local_a8) && ((short)plVar5[1] == local_a0)))))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"FCbField(ObjectWithNameNoType)::GetBuffer()",bVar10);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_208);
  FCompositeBuffer::~FCompositeBuffer((FCompositeBuffer *)&local_120);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_180._padding_);
  local_158._padding_ = CONCAT44(local_158._padding_._4_4_,1);
  local_158._padding_ = 0x1506dd4b8;
  FCbObjectView::FindView
            ((FCbObjectView *)&local_1f0,(FCbFieldView *)&local_b8,
             (TStringView<char8_t> *)&local_158);
  if (((ulonglong)local_b8 & 0x1f) == 0) {
    local_138._padding_ = 0;
    local_138._padding_ = 0;
    local_138.FieldsEnd = (longlong *)0x0;
    local_138._padding_._0_1_ = 0;
  }
  else {
    local_158._padding_ = local_1f0._padding_;
    local_158._padding_ = local_1f0._padding_;
    if (local_1f0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18) =
             (atomic<unsigned___int64>)
             ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18)
             + 0x40000000);
        UNLOCK();
      }
    }
    local_158.Buffer.Owner.Owner = local_1f0.Buffer.Owner.Owner;
    FCbField::FCbField<FCbObjectView>((FCbField *)&local_138,(FCbFieldView *)&local_b8,&local_158);
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbObject()[Missing]",
             ((byte)local_138._padding_ & 0x1f) != 0);
  pvVar7 = local_138.FieldsEnd;
  if (local_138.FieldsEnd != (longlong *)0x0) {
    LOCK();
    plVar5 = (longlong *)((longlong)local_138.FieldsEnd + 0x18);
    lVar27 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (((uint)lVar27 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_138.FieldsEnd + 0x10))(local_138.FieldsEnd);
      *(longlong *)((longlong)pvVar7 + 8) = 0;
      *(longlong *)((longlong)pvVar7 + 0x10) = 0;
      LOCK();
      plVar5 = (longlong *)((longlong)pvVar7 + 0x18);
      uVar3 = *plVar5;
      *plVar5 = *plVar5 + -0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)pvVar7)(pvVar7,1);
      }
    }
  }
  local_68._padding_ = local_1f0._padding_;
  local_68._padding_ = local_1f0._padding_;
  if (local_1f0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18) +
           0x40000000);
      UNLOCK();
    }
  }
  local_68.Buffer.Owner.Owner = local_1f0.Buffer.Owner.Owner;
  local_158._padding_ =
       CONCAT71(local_158._padding_._1_7_,(byte)local_1f0._padding_) & 0xffffffffffffff3f;
  local_158._padding_ = local_1f0._padding_;
  local_158._padding_._0_2_ = (ushort)(byte)local_158._padding_;
  local_158._padding_ = local_158._padding_ & 0xffffffff;
  FCbField::FCbField<FCbObjectView>((FCbField *)&local_98,(FCbFieldView *)&local_158,&local_68);
  local_158._padding_ = CONCAT44(local_158._padding_._4_4_,1);
  local_158._padding_ = 0x1506dd4b8;
  FCbFieldView::operator[]
            ((FCbFieldView *)&local_98,(FCbFieldView *)&local_b8,(TStringView<char8_t> *)&local_158)
  ;
  if (((ulonglong)local_b8 & 0x1f) == 0) {
    local_138._padding_ = 0;
    local_138._padding_ = 0;
    local_138.FieldsEnd = (longlong *)0x0;
    local_138._padding_._0_1_ = 0;
  }
  else {
    if ((FBufferOwner *)local_98.Size != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)(local_98.Size + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(atomic<unsigned___int64> *)(local_98.Size + 0x18) =
             (atomic<unsigned___int64>)
             ((longlong)*(atomic<unsigned___int64> *)(local_98.Size + 0x18) + 0x40000000);
        UNLOCK();
      }
    }
    local_208.Owner = (FBufferOwner *)local_98.Size;
    TCbBufferFactory<FCbField,FCbFieldView>::MakeView
              ((FCbField *)&local_138,(FCbFieldView *)&local_b8,(FSharedBuffer)&local_208);
  }
  FAutomationTestBase::TestFalse
            ((FAutomationTestBase *)this,L"FCbField(Object)[Missing]",
             ((byte)local_138._padding_ & 0x1f) != 0);
  pvVar7 = local_138.FieldsEnd;
  if (local_138.FieldsEnd != (longlong *)0x0) {
    LOCK();
    plVar5 = (longlong *)((longlong)local_138.FieldsEnd + 0x18);
    lVar27 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (((uint)lVar27 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_138.FieldsEnd + 0x10))(local_138.FieldsEnd);
      *(longlong *)((longlong)pvVar7 + 8) = 0;
      *(longlong *)((longlong)pvVar7 + 0x10) = 0;
      LOCK();
      plVar5 = (longlong *)((longlong)pvVar7 + 0x18);
      uVar3 = *plVar5;
      *plVar5 = *plVar5 + -0x40000000;
      UNLOCK();
      if (((uint)(uVar3 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)pvVar7)(pvVar7,1);
      }
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_98.Size);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1f0.Buffer.Owner);
  FCbObjectView::FCbObjectView((FCbObjectView *)&local_158);
  local_1f0._padding_ = local_158._padding_;
  local_1f0._padding_ =
       (longlong)(CONCAT22(local_138._padding_._2_2_,(short)local_158._padding_) & 0xffff003f);
  uVar15 = FCbFieldView::GetValueSize((FCbFieldView *)&local_1f0);
  local_1f0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(uVar15 + local_1f0._padding_);
  bVar11 = (byte)local_1f0._padding_;
  local_138._padding_._0_1_ = (byte)local_1f0._padding_;
  local_138._padding_._1_1_ = local_1f0._padding_._1_1_;
  local_138._padding_._2_1_ = local_1f0._padding_._2_1_;
  local_138._padding_._3_1_ = local_1f0._padding_._3_1_;
  local_138._padding_._4_1_ = local_1f0._padding_._4_1_;
  local_138._padding_._5_1_ = local_1f0._padding_._5_1_;
  local_138._padding_._6_1_ = local_1f0._padding_._6_1_;
  local_138._padding_._7_1_ = local_1f0._padding_._7_1_;
  local_138._padding_ = local_1f0._padding_;
  local_138.FieldsEnd = (void *)local_1f0.Buffer.Owner.Owner;
  if ((local_1f0._padding_ & 0x1fU) != 0) {
    do {
      FAutomationTestBase::TestTrue
                ((FAutomationTestBase *)this,L"FCbObjectView::AsFieldView() as Iterator",
                 (bVar11 & 0x1e) == 2);
      iVar28 = iVar28 + 1;
      TCbFieldIterator<FCbFieldView>::operator++(&local_138);
      bVar11 = (byte)local_138._padding_;
    } while ((local_138._padding_ & 0x1fU) != 0);
    if (iVar28 == 1) goto LAB_141a45266;
  }
  pcVar6 = *(code **)(*(longlong *)this + 0x28);
  ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are not equal.");
  (*pcVar6)(this,&local_1c8,0);
  if ((void *)local_1c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1c8._padding_);
  }
LAB_141a45266:
  FCbObjectView::FCbObjectView((FCbObjectView *)&local_1f0);
  local_1f0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  TCbBuffer<FCbObjectView>::MakeOwned(&local_1f0);
  pFVar16 = FCbObject::AsField((FCbObject *)&local_1f0,(FCbField *)&local_120);
  FCbFieldIterator::MakeSingle((FCbFieldIterator *)local_d8,pFVar16);
  local_180._padding_ = local_d8._0_8_;
  local_180._padding_ = local_d8._8_8_;
  local_180._padding_ = (longlong)local_c8[0].Owner;
  if (local_c8[0].Owner != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &(local_c8[0].Owner)->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
    UNLOCK();
    if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
      LOCK();
      (local_c8[0].Owner)->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((longlong)(local_c8[0].Owner)->ReferenceCountsAndFlags + 0x40000000);
      UNLOCK();
    }
  }
  while ((local_180._padding_ & 0x1fU) != 0) {
    if ((FBufferOwner *)local_180._padding_ != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = &((FBufferOwner *)local_180._padding_)->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        ((FBufferOwner *)local_180._padding_)->ReferenceCountsAndFlags =
             (atomic<unsigned___int64>)
             ((longlong)((FBufferOwner *)local_180._padding_)->ReferenceCountsAndFlags + 0x40000000)
        ;
        UNLOCK();
      }
    }
    local_138._padding_._0_1_ = (byte)local_180._padding_;
    bVar11 = (byte)local_138._padding_ & 0x1e;
    local_138._padding_ = local_180._padding_;
    local_138._padding_ = local_180._padding_;
    local_138.FieldsEnd = (void *)local_180._padding_;
    FAutomationTestBase::TestTrue
              ((FAutomationTestBase *)this,L"FCbObject::AsFieldView() as Iterator",bVar11 == 2);
    iVar29 = iVar29 + 1;
    UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
    ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
              ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_138.FieldsEnd);
    TCbFieldIterator<FCbField>::operator++(&local_180);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_180._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(local_c8);
  if (iVar29 != 1) {
    pcVar6 = *(code **)(*(longlong *)this + 0x28);
    ::FString::PrintfImpl((FString *)&local_1c8,L"%s: The two values are not equal.");
    (*pcVar6)(this,&local_1c8,0);
    if ((void *)local_1c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1c8._padding_);
    }
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1f0.Buffer.Owner);
  local_1f8[0] = 2;
  FCbFieldView::FCbFieldView((FCbFieldView *)&local_1c8,local_1f8,HasFieldType);
  local_1f0.Buffer.Owner.Owner =
       (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
  local_1f0._padding_ = local_1c8._padding_;
  local_1f0._padding_ = local_1c8._padding_;
  TCbBuffer<FCbObjectView>::MakeOwned(&local_1f0);
  FCbFieldView::CreateViewIterator((FCbFieldView *)&local_1f0,(FCbFieldViewIterator *)&local_138);
  pvVar7 = local_138.FieldsEnd;
  if ((local_138._padding_ & 0x1fU) == 0) {
    local_120._padding_ = 0;
    local_120._padding_ = 0;
    local_120._padding_ = 0;
    pvVar26 = (void *)0x0;
    local_120.FieldsEnd = (FBufferOwner *)0x0;
  }
  else {
    if (local_1f0.Buffer.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar1 = (atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18);
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
      UNLOCK();
      if (((ulonglong)aVar2 & 0x3fffffff) == 0) {
        LOCK();
        *(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18U) =
             (atomic<unsigned___int64>)
             ((longlong)
              *(atomic<unsigned___int64> *)((longlong)local_1f0.Buffer.Owner.Owner + 0x18U) +
             0x40000000);
        UNLOCK();
      }
    }
    local_208 = local_1f0.Buffer.Owner.Owner;
    TCbBuffer<FCbFieldView>::TCbBuffer<FCbFieldView>
              (&local_1c8,(FCbFieldView *)&local_138,(FSharedBuffer)&local_208);
    pvVar26 = (void *)(local_1c8._padding_ & 0xffffffff);
    local_120._padding_ = local_1c8._padding_;
    local_120._padding_ = local_1c8._padding_;
    local_120._padding_ = (longlong)local_1c8.Buffer.Owner.Owner;
    local_120.FieldsEnd = pvVar7;
  }
  while (((ulonglong)pvVar26 & 0x1f) != 0) {
    TCbFieldIterator<FCbField>::operator++(&local_120);
    pvVar26 = (void *)local_120._padding_;
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&local_120._padding_);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>(&local_1f0.Buffer.Owner);
  return true;
}

// GetBeautifiedTestName @ 141a454b0

FString * __thiscall
FCbFieldObjectTest::GetBeautifiedTestName(FCbFieldObjectTest *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"System.Core.Serialization.CbField.Object");
  return __return_storage_ptr__;
}

// operator() @ 141a73a70

void __thiscall
`FCbFieldObjectTest::RunTest'::__l2::<lambda_1>::operator()
          (void *this,FCbObjectView *param_1,int param_2,ulong64 param_3)

{
  FAutomationTestBase *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  void *pvVar4;
  ulong64 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  FCbFieldView local_78;
  FCbFieldView local_68;
  TCbFieldIterator<FCbFieldView> local_58;
  TCbFieldIterator<FCbFieldView> local_40;
  
  pFVar1 = *(FAutomationTestBase **)this;
  uVar5 = FCbObjectView::GetSize(param_1);
  FAutomationTestBase::TestEqual
            (pFVar1,L"FCbFieldView(Object)::AsObjectView().GetSize()",uVar5,param_3 + 1);
  iVar7 = 0;
  iVar6 = 0;
  FCbFieldView::CreateViewIterator((FCbFieldView *)param_1,(FCbFieldViewIterator *)&local_58);
  while ((local_58._padding_ & 0x1fU) != 0) {
    plVar2 = *(longlong **)this;
    iVar6 = iVar6 + 1;
    local_58._padding_._4_4_ = (int)((ulonglong)local_58._padding_ >> 0x20);
    bVar8 = local_58._padding_._4_4_ == 0;
    if (bVar8) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      ::FString::PrintfImpl((FString *)&local_78,L"%s: The two values are equal.");
      (*pcVar3)(plVar2,&local_78,0);
      pvVar4 = (void *)CONCAT44(local_78.NameLen,
                                CONCAT22(local_78._2_2_,
                                         CONCAT11(local_78.Error,local_78.TypeWithFlags)));
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
    }
    pFVar1 = *(FAutomationTestBase **)this;
    uVar5 = FCbFieldView::AsInteger((FCbFieldView *)&local_58,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbFieldView(Object) Iterator",(int)uVar5,iVar6);
    TCbFieldIterator<FCbFieldView>::operator++(&local_58);
  }
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,
             L"FCbFieldView(Object)::AsObjectView().CreateViewIterator() -> Count",iVar6,param_2);
  iVar6 = 0;
  FCbFieldView::CreateViewIterator((FCbFieldView *)param_1,(FCbFieldViewIterator *)&local_58);
  pvVar4 = (void *)local_68._0_8_;
  local_68._0_8_ = local_58._padding_;
  while ((local_68._0_8_ & 0x1f) != 0) {
    plVar2 = *(longlong **)this;
    iVar6 = iVar6 + 1;
    local_58._padding_ = local_68._0_8_;
    if ((int)((ulonglong)local_68._0_8_ >> 0x20) == 0) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      ::FString::PrintfImpl((FString *)&local_78,L"%s: The two values are equal.");
      (*pcVar3)(plVar2,&local_78,0);
      pvVar4 = (void *)CONCAT44(local_78.NameLen,
                                CONCAT22(local_78._2_2_,
                                         CONCAT11(local_78.Error,local_78.TypeWithFlags)));
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
    }
    pFVar1 = *(FAutomationTestBase **)this;
    uVar5 = FCbFieldView::AsInteger(&local_68,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbFieldView(Object) Range",(int)uVar5,iVar6);
    TCbFieldIterator<FCbFieldView>::operator++(&local_58);
    pvVar4 = (void *)local_68._0_8_;
    local_68._0_8_ = local_58._padding_;
  }
  local_68._0_8_ = pvVar4;
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,L"FCbFieldView(Object)::AsObjectView() Range -> Count",
             iVar6,param_2);
  local_78.TypeWithFlags = *(ECbFieldType *)param_1 & (Reserved|CustomByName);
  local_78.Error = None;
  local_78.Value = *(void **)&param_1->field_0x8;
  local_78.NameLen = 0;
  FCbFieldView::CreateViewIterator(&local_78,(FCbFieldViewIterator *)&local_40);
  while ((local_40._padding_ & 0x1fU) != 0) {
    plVar2 = *(longlong **)this;
    iVar7 = iVar7 + 1;
    if ((int)((ulonglong)local_40._padding_ >> 0x20) == 0) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      ::FString::PrintfImpl((FString *)&local_68,L"%s: The two values are equal.");
      (*pcVar3)(plVar2,&local_68,0);
      if ((void *)local_68._0_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
    }
    pFVar1 = *(FAutomationTestBase **)this;
    uVar5 = FCbFieldView::AsInteger((FCbFieldView *)&local_58,0,(FIntegerParams)0x3f);
    FAutomationTestBase::TestEqual(pFVar1,L"FCbFieldView(ObjectField) Range",(int)uVar5,iVar7);
    TCbFieldIterator<FCbFieldView>::operator++(&local_40);
  }
  FAutomationTestBase::TestEqual
            (*(FAutomationTestBase **)this,
             L"FCbFieldView(ObjectField)::AsObjectView() Range -> Count",iVar7,param_2);
  return;
}

