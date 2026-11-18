// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 190

// GetAddress @ 142ccc510

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 142ccc520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142ccc540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142ccc545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// ~TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0> @ 142ce4c90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0> *this
          )

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_AV__TArrayView___CB_KH__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0> @ 142ce4cb0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6AIXZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0> @ 142ce4cd0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0>::
~TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0>
          (TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0> *this)

{
  this->_padding_ =
       (longlong)&___7__TFunction_OwnedObject_P6A_KXZ_0A__0A__Function_Private_Core_UE__6B_;
  return;
}

// ~TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0> @ 142ce4cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>::
~TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>
          (TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6A_NV__TArrayView_QEBVUScriptStruct__H___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// CloneToEmptyStorage @ 142cefcc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_AV__TArrayView___CB_KH__XZ_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_TArrayView<unsigned___int64_const_,int> **)(param_1->InlineAllocation + 8) =
       this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefce0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6AIXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_uint **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefd00

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0> *this,
                   FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &___7__TFunction_OwnedObject_P6A_KXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(_func___cdecl_ulong64 **)(param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefd20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>::
CloneToEmptyStorage(TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>
                    *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_P6A_NV__TArrayView_QEBVUScriptStruct__H___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  *(_func___cdecl_bool_TArrayView<UScriptStruct_const_ptr_const,int> **)
   (param_1->InlineAllocation + 8) = this->Obj;
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefd40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_18>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation = &_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefd60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_19>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation = &_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefd80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefda0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefdc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefde0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefe00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::`2'::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefe20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`154'::<lambda_25>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefe40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`105'::<lambda_10>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefe60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`109'::<lambda_11>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefe80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`117'::<lambda_13>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`121'::<lambda_14>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`125'::<lambda_15>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cefee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceff00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`3'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceff20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceff40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`158'::<lambda_27>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceff60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`33'::<lambda_4>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceff80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`43'::<lambda_5>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceffa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`53'::<lambda_6>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceffc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`69'::<lambda_7>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142ceffe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`85'::<lambda_8>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`101'::<lambda_9>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`113'::<lambda_12>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`146'::<lambda_23>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`150'::<lambda_24>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`13'::<lambda_2>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  param_1->InlineAllocation[8] = *(uchar *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf00a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::`23'::<lambda_3>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf00c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateDirectQueryCallbackBinding_V<lambda_1>__1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_DataStorage_Editor_UE__IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_567__Z__Queries_DataStorage_Editor_UE__YA_AV__TFunction___A6AXAEBUFQueryDescription_DataStorage_Editor_UE__AEAUIDirectQueryContext_234__Z____QEAV1_1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_345_IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_345__Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf00e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf01a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf01c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf01e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 142cf0240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 142cf0280

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_21>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation = &_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf02a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_22>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation = &_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf02c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf02e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0300

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0320

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0360

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>::operator()'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf03a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf03c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf03e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_3>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0440

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0460

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 142cf0480

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>::operator()'::`2'::<lambda_3>::operator()'::`2'::<lambda_4>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 142cf49d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0> *this
          )

{
                    /* WARNING: Could not recover jumptable at 0x000142cf49d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 142cf49e0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf49e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 142cf49f0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0>::Destroy
          (TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf49f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>::Destroy
          (TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>
           *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_18>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_19>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4a90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4a95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4ab0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4ac0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4ac5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4ad0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4ae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4af0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4b90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4b95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4ba0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4bb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4bc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4bd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4be0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4bf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4c35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4c70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 142cf4ca0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,1,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4cb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_21>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4cc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_22>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4cd0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4ce0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4cf0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d10

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d30

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d70

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4d90

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4da0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4da5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 142cf4db0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142cf4db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 142cf4e20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<TArrayView<unsigned___int64_const_,int>_(__cdecl*)(void),0,0> *this
          )

{
  return &this->Obj;
}

// GetAddress @ 142cf4e30

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0>::GetAddress
          (TFunction_OwnedObject<unsigned_int_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 142cf4e40

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0>::
GetAddress(TFunction_OwnedObject<unsigned___int64_(__cdecl*)(void),0,0> *this)

{
  return &this->Obj;
}

// GetAddress @ 142cf4e50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>::GetAddress
          (TFunction_OwnedObject<bool_(__cdecl*)(TArrayView<UScriptStruct_const_*_const,int>),0,0>
           *this)

{
  return &this->Obj;
}

// GetAddress @ 142cf4e60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_18>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4e70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_19>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4e80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4e90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4eb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4ec0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<int,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l154::<lambda_25>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4ee0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l105::<lambda_10>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4ef0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l109::<lambda_11>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l117::<lambda_13>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l121::<lambda_14>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l125::<lambda_15>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::E]::<lambda_17>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l3::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_20>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l158::<lambda_27>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l33::<lambda_4>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f80

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l43::<lambda_5>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4f90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l53::<lambda_6>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4fa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l69::<lambda_7>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4fb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l85::<lambda_8>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4fc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<void,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l101::<lambda_9>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4fd0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l113::<lambda_12>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4fe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l146::<lambda_23>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf4ff0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l150::<lambda_24>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5000

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l13::<lambda_2>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5010

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::BuildQueryFunction<bool,`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'::__l23::<lambda_3>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5020

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5030

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5040

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5050

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5060

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5070

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5080

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5090

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf50a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf50b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf50c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 142cf50d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FAutomationSpecBase::FAsyncLatentCommand::Update'::__l5::<lambda_1>,1,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf50e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_21>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf50f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::Tests::TQueryFunction_Tests::TestBody'[::L]::<lambda_22>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5100

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5110

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5120

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5130

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5150

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5160

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>::operator()'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5170

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5180

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf5190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf51a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf51b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf51c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf51d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<```UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>::operator()'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 142cf51e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<````UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_3>::operator()'::__l2::<lambda_4>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

