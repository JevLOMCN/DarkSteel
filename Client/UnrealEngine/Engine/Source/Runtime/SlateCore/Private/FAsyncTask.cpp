// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// FAsyncTask<SdfUtils::FSdfGeneratorTask> @ 142470100

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FAsyncTask<SdfUtils::FSdfGeneratorTask> * __thiscall
FAsyncTask<SdfUtils::FSdfGeneratorTask>::FAsyncTask<SdfUtils::FSdfGeneratorTask>
          (FAsyncTask<SdfUtils::FSdfGeneratorTask> *this)

{
  void *pvVar1;
  FName *pFVar2;
  TStatIdData *pTVar3;
  FName local_res8;
  
  *(undefined2 *)&this->_padding_ = 3;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7__FAsyncTask_VFSdfGeneratorTask_SdfUtils____6B_;
  this->_padding_ = 0;
  (this->Task).GlyphSdfMapping.MsdfgenTransformation._padding_ = 0x3ff0000000000000;
  (this->Task).GlyphSdfMapping.MsdfgenTransformation._padding_ = 0x3ff0000000000000;
  (this->Task).GlyphSdfMapping.MsdfgenTransformation.distanceMapping.scale = 1.0;
  pvVar1 = ThreadLocalStoragePointer;
  this->_padding_ = -1;
  this->_padding_ = 0;
  (this->Task).Descriptor.FontFace.Object = (FFreeTypeFace *)0x0;
  (this->Task).Descriptor.FontFace.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Task).OutputPixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).OutputPixels.ArrayNum = 0;
  (this->Task).OutputPixels.ArrayMax = 0;
  (this->Task).MsdfgenShape.contours._Mypair._Myval2._Myfirst = (Contour *)0x0;
  (this->Task).MsdfgenShape.contours._Mypair._Myval2._Mylast = (Contour *)0x0;
  (this->Task).MsdfgenShape.contours._Mypair._Myval2._Myend = (Contour *)0x0;
  (this->Task).MsdfgenShape.inverseYAxis = false;
  (this->Task).GlyphSdfMapping.MsdfgenTransformation._padding_ = 0;
  (this->Task).GlyphSdfMapping.MsdfgenTransformation._padding_ = 0;
  (this->Task).GlyphSdfMapping.MsdfgenTransformation.distanceMapping.translate = 0.0;
  (this->Task).GlyphSdfMapping.SdfBounds.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Task).GlyphSdfMapping.SdfBounds.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Task).DebugName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Task).DebugName.Data.ArrayNum = 0;
  (this->Task).DebugName.Data.ArrayMax = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x9d4c) <
       `public:_struct_TStatId___cdecl_SdfUtils::FSdfGeneratorTask::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_TStatId___cdecl_SdfUtils::FSdfGeneratorTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_TStatId___cdecl_SdfUtils::FSdfGeneratorTask::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FSdfGeneratorTask = (TStatIdData *)0x0;
    pFVar2 = ::FName::FName(&local_res8,"FSdfGeneratorTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_struct_TStatId___cdecl_SdfUtils::FSdfGeneratorTask::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FSdfGeneratorTask,*pFVar2,L"FSdfGeneratorTask",
               "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",L"ThreadPool Async Tasks",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_struct_TStatId___cdecl_SdfUtils::FSdfGeneratorTask::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar3 = _StatPtr_FSdfGeneratorTask;
  if (_StatPtr_FSdfGeneratorTask == (TStatIdData *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"FSdfGeneratorTask");
    pTVar3 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_struct_TStatId___cdecl_SdfUtils::FSdfGeneratorTask::GetStatId(void)const___ptr64'
                         ::__l2::StatPtr_FSdfGeneratorTask,*pFVar2,L"FSdfGeneratorTask",
                        "STATGROUP_ThreadPoolAsyncTasks","STATCAT_Advanced",
                        L"ThreadPool Async Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  this->_padding_ = (longlong)pTVar3;
  return this;
}

// DoTaskWork @ 142485bb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncTask<FAsyncLoadFontFaceData>::DoTaskWork(FAsyncTask<FAsyncLoadFontFaceData> *this)

{
  bool bVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  
  pFVar2 = FFontData::GetFontFilename(&(this->Task).FontData);
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  bVar1 = FFileHelper::LoadFileToArray(&(this->Task).FontFaceData,pwVar3,0);
  if ((!bVar1) && (2 < (byte)LogSlate._0_1_)) {
    FFontData::GetFontFilename(&(this->Task).FontData);
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FAsyncLoadFontFaceData::DoWork(void)___ptr64'::__l6::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  return;
}

// DoTaskWork @ 142485c40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FAsyncTask<SdfUtils::FSdfGeneratorTask>::DoTaskWork(FAsyncTask<SdfUtils::FSdfGeneratorTask> *this)

{
  SdfUtils::FSdfGeneratorTask::DoOutlineDecomposition(&this->Task);
  return;
}

// MarkAsCanceled @ 14249ca30

void __thiscall
FAsyncTask<FAsyncLoadFontFaceData>::MarkAsCanceled(FAsyncTask<FAsyncLoadFontFaceData> *this)

{
  return;
}

// MarkAsCanceled @ 14249ca40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall
FAsyncTask<SdfUtils::FSdfGeneratorTask>::MarkAsCanceled
          (FAsyncTask<SdfUtils::FSdfGeneratorTask> *this)

{
  return;
}

// TryAbandonTask @ 1424a8980

bool __thiscall
FAsyncTask<FAsyncLoadFontFaceData>::TryAbandonTask(FAsyncTask<FAsyncLoadFontFaceData> *this)

{
  return false;
}

// TryAbandonTask @ 1424a8990

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

bool __thiscall
FAsyncTask<SdfUtils::FSdfGeneratorTask>::TryAbandonTask
          (FAsyncTask<SdfUtils::FSdfGeneratorTask> *this)

{
  return true;
}

