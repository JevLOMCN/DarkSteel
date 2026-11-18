// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 14

// FFreeTypeFace @ 142472b70

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FFreeTypeFace * __thiscall
FFreeTypeFace::FFreeTypeFace
          (FFreeTypeFace *this,FFreeTypeLibrary *param_1,FString *param_2,int param_3,
          EFontLayoutMethod param_4)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FFreeTypeFace *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SlateStreamingFontCount> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int local_res8 [2];
  FName local_res10;
  FName local_58;
  FStatMessage local_50;
  int *local_40;
  FString *local_38;
  
  this->FTFace = (FT_FaceRec_ *)0x0;
  (this->Memory).Object = (FFontFaceData *)0x0;
  (this->Memory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bPendingAsyncLoad = false;
  FFTStreamHandler::FFTStreamHandler(&this->FTStreamHandler,param_2);
  *(undefined8 *)&(this->Attributes).Elements = 0;
  *(undefined8 *)&(this->Attributes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Attributes).Elements.field_0x20 = 0;
  this->IsAscentOverridden = false;
  this->IsDescentOverridden = false;
  this->AscentOverrideValue = 0;
  this->DescentOverrideValue = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Attributes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Attributes).Elements.field_0x34 = 0;
  (this->Attributes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Attributes).HashSize = 0;
  this->LayoutMethod = param_4;
  if (0xffffffff < (ulonglong)(this->FTStreamHandler).FontSizeBytes) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8768772752418013675>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x1eb,
                       "FTStreamHandler.FontSizeBytes >= 0 && FTStreamHandler.FontSizeBytes <= std::numeric_limits<uint32>::max()"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FFreeTypeFace *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->FTStream).base = (uchar *)0x0;
  (this->FTStream).pos = 0;
  (this->FTStream).pathname.pointer = (void *)0x0;
  (this->FTStream).memory = (FT_MemoryRec_ *)0x0;
  (this->FTStream).cursor = (uchar *)0x0;
  (this->FTStream).limit = (uchar *)0x0;
  (this->FTStream).size = (ulong)(this->FTStreamHandler).FontSizeBytes;
  (this->FTStream).close = FFTStreamHandler::CloseFile;
  (this->FTStream).read = FFTStreamHandler::ReadData;
  (this->FTStream).descriptor.pointer = &this->FTStreamHandler;
  *(undefined8 *)&(this->FTFaceOpenArgs).field_0x4 = 0;
  *(undefined8 *)((longlong)&(this->FTFaceOpenArgs).memory_base + 4) = 0;
  *(undefined8 *)&(this->FTFaceOpenArgs).field_0x14 = 0;
  *(undefined4 *)((longlong)&(this->FTFaceOpenArgs).pathname + 4) = 0;
  (this->FTFaceOpenArgs).driver = (FT_ModuleRec_ *)0x0;
  *(undefined8 *)&(this->FTFaceOpenArgs).num_params = 0;
  (this->FTFaceOpenArgs).params = (FT_Parameter_ *)0x0;
  (this->FTFaceOpenArgs).flags = 2;
  (this->FTFaceOpenArgs).stream = &this->FTStream;
  local_res8[0] = FT_Open_Face(param_1->FTLibrary,&this->FTFaceOpenArgs,param_3,this);
  if (local_res8[0] != 0) {
    local_40 = local_res8;
    local_38 = param_2;
    `FFreeTypeFace::FFreeTypeFace'::__l5::<lambda_1>::operator()(&local_40);
    if (this->FTFace != (FT_FaceRec_ *)0x0) {
      `FFreeTypeFace::FFreeTypeFace'::__l5::<lambda_2>::operator()(&param_4);
    }
    this->FTFace = (FT_FaceRec_ *)0x0;
  }
  ParseAttributes(this);
  FVar6 = StatPtr_STAT_SlateStreamingFontCount;
  if (StatPtr_STAT_SlateStreamingFontCount ==
      (FThreadSafeStaticStat<FStat_STAT_SlateStreamingFontCount>)0x0) {
    pFVar5 = ::FName::FName(&local_58,"STAT_SlateStreamingFontCount");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SlateStreamingFontCount>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateStreamingFontCount,*pFVar5,
                       L"Num Streaming Fonts","STATGROUP_SlateMemory","STATCAT_Advanced",
                       L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar6;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res10 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_50.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_50.StatData.Pad[0] = '\x01';
    local_50.StatData.Pad[1] = '\0';
    local_50.StatData.Pad[2] = '\0';
    local_50.StatData.Pad[3] = '\0';
    local_50.StatData.Pad[4] = '\0';
    local_50.StatData.Pad[5] = '\0';
    local_50.StatData.Pad[6] = '\0';
    local_50.StatData.Pad[7] = '\0';
    local_res10 = FVar1;
    local_50.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_50);
    FStatsTrace::Add(&local_res10,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// FFreeTypeFace @ 142472e90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeFace * __thiscall
FFreeTypeFace::FFreeTypeFace
          (FFreeTypeFace *this,FFreeTypeLibrary *param_1,TSharedRef<FFontFaceData_const_,1> *param_2
          ,int param_3,EFontLayoutMethod param_4)

{
  TSharedRef<FFontFaceData_const_,1> local_18;
  
  this->bPendingAsyncLoad = true;
  (this->Memory).Object = (FFontFaceData *)0x0;
  (this->Memory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->FTStreamHandler).FileHandle = (IFileHandle *)0x0;
  (this->FTStreamHandler).FontSizeBytes = 0;
  *(undefined8 *)&(this->Attributes).Elements = 0;
  *(undefined8 *)&(this->Attributes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Attributes).Elements.field_0x20 = 0;
  this->FTFace = (FT_FaceRec_ *)0x0;
  this->IsAscentOverridden = false;
  this->IsDescentOverridden = false;
  this->AscentOverrideValue = 0;
  this->DescentOverrideValue = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Attributes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x30 = 0xffffffff;
  (this->Attributes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Attributes).HashSize = 0;
  this->LayoutMethod = param_4;
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  CompleteAsyncLoad(this,param_1,&local_18,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// FFreeTypeFace @ 142472f60

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FFreeTypeFace * __thiscall
FFreeTypeFace::FFreeTypeFace(FFreeTypeFace *this,EFontLayoutMethod param_1)

{
  this->bPendingAsyncLoad = true;
  (this->Memory).Object = (FFontFaceData *)0x0;
  (this->Memory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->FTStreamHandler).FileHandle = (IFileHandle *)0x0;
  (this->FTStreamHandler).FontSizeBytes = 0;
  *(undefined8 *)&(this->Attributes).Elements = 0;
  *(undefined8 *)&(this->Attributes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Attributes).Elements.field_0x20 = 0;
  this->FTFace = (FT_FaceRec_ *)0x0;
  this->IsAscentOverridden = false;
  this->IsDescentOverridden = false;
  this->AscentOverrideValue = 0;
  this->DescentOverrideValue = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Attributes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Attributes).Elements.field_0x30 = 0xffffffff;
  (this->Attributes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Attributes).HashSize = 0;
  this->LayoutMethod = param_1;
  return this;
}

// ~FFreeTypeFace @ 142478f00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FFreeTypeFace::~FFreeTypeFace(FFreeTypeFace *this)

{
  FFontFaceData *pFVar1;
  FName FVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_SlateResidentFontCount> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_SlateStreamingFontCount> FVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_48;
  FStatMessage local_38;
  
  if (this->FTFace == (FT_FaceRec_ *)0x0) goto LAB_1424791c5;
  pFVar1 = (this->Memory).Object;
  if ((pFVar1 == (FFontFaceData *)0x0) || ((pFVar1->Data).ArrayNum < 1)) {
    FVar9 = StatPtr_STAT_SlateStreamingFontCount;
    if (StatPtr_STAT_SlateStreamingFontCount ==
        (FThreadSafeStaticStat<FStat_STAT_SlateStreamingFontCount>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_SlateStreamingFontCount");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_SlateStreamingFontCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateStreamingFontCount,*pFVar6,
                         L"Num Streaming Fonts","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar9;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_38.StatData.Pad[0] = '\x01';
      local_38.StatData.Pad[1] = '\0';
      local_38.StatData.Pad[2] = '\0';
      local_38.StatData.Pad[3] = '\0';
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_res10 = FVar2;
      local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_38);
      pFVar6 = &local_res10;
      goto LAB_14247916e;
    }
  }
  else {
    FVar7 = StatPtr_STAT_SlateResidentFontCount;
    if (StatPtr_STAT_SlateResidentFontCount ==
        (FThreadSafeStaticStat<FStat_STAT_SlateResidentFontCount>)0x0) {
      pFVar6 = ::FName::FName(&local_res18,"STAT_SlateResidentFontCount");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_SlateResidentFontCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateResidentFontCount,*pFVar6,
                         L"Num Resident Fonts","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar7;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        pFVar8 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(pFVar8);
      }
      local_48.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_48.StatData.Pad[0] = '\x01';
      local_48.StatData.Pad[1] = '\0';
      local_48.StatData.Pad[2] = '\0';
      local_48.StatData.Pad[3] = '\0';
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_res8 = FVar2;
      local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_48);
      pFVar6 = &local_res8;
LAB_14247916e:
      FStatsTrace::Add(pFVar6,-1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  FT_Done_Face(this->FTFace);
  (this->FTStreamHandler).FileHandle = (IFileHandle *)0x0;
  (this->FTStreamHandler).FontSizeBytes = 0;
LAB_1424791c5:
  (this->Attributes).HashSize = 0;
  FVar3 = (this->Attributes).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Attributes).Elements);
  if ((this->FTStreamHandler).FileHandle != (IFileHandle *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FileHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x286,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Memory).SharedReferenceCount.ReferenceController);
  return;
}

// CompleteAsyncLoad @ 1424821f0

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FFreeTypeFace::CompleteAsyncLoad
          (FFreeTypeFace *this,FFreeTypeLibrary *param_1,TSharedRef<FFontFaceData_const_,1> *param_2
          ,int param_3)

{
  TSharedPtr<FFontFaceData_const_,1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_SlateResidentFontCount> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar9;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  FName local_68;
  FFontFaceData *local_60;
  FSharedReferencer<1> local_58;
  FStatMessage local_50;
  
  if (this->bPendingAsyncLoad == false) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8768772752418013634>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                       ,0x1c2,"bPendingAsyncLoad");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->bPendingAsyncLoad = false;
  this->FTFace = (FT_FaceRec_ *)0x0;
  local_58.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_60 = param_2->Object;
  if (local_58.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_58.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->Memory;
  if (pTVar1 != (TSharedPtr<FFontFaceData_const_,1> *)&local_60) {
    pTVar1->Object = local_60;
    local_60 = (FFontFaceData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Memory).SharedReferenceCount,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.ReferenceController);
  if (pTVar1->Object == (FFontFaceData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pTVar1->Object->Data).ArrayNum;
  if (pTVar1->Object == (FFontFaceData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = FT_New_Memory_Face(param_1->FTLibrary,(pTVar1->Object->Data).AllocatorInstance.Data,iVar5,
                             param_3,this);
  if (iVar5 != 0) {
    if (this->FTFace != (FT_FaceRec_ *)0x0) {
      local_res8 = local_res8 & 0xffffff00;
      `FFreeTypeFace::CompleteAsyncLoad'::__l5::<lambda_1>::operator()(&local_res8);
    }
    this->FTFace = (FT_FaceRec_ *)0x0;
  }
  if ((this->FTFace != (FT_FaceRec_ *)0x0) && ((this->FTFace->face_index & 0x7fffU) != param_3)) {
    local_res10[0] = 0;
    `FFreeTypeFace::CompleteAsyncLoad'::__l2::<lambda_2>::operator()(local_res10);
  }
  ParseAttributes(this);
  if (pTVar1->Object == (FFontFaceData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0 < (pTVar1->Object->Data).ArrayNum) {
    FVar8 = StatPtr_STAT_SlateResidentFontCount;
    if (StatPtr_STAT_SlateResidentFontCount ==
        (FThreadSafeStaticStat<FStat_STAT_SlateResidentFontCount>)0x0) {
      pFVar7 = ::FName::FName(&local_68,"STAT_SlateResidentFontCount");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_SlateResidentFontCount>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateResidentFontCount,*pFVar7,
                         L"Num Resident Fonts","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar8;
    FVar9 = FVar2.ComparisonIndex.Value;
    uVar6 = FVar2.Number;
    local_res8 = FVar9.Value;
    uStackX_c = uVar6;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_50.NameAndInfo.Number = uVar6 & 0xffffafff | 0xa000;
      local_50.StatData.Pad[0] = '\x01';
      local_50.StatData.Pad[1] = '\0';
      local_50.StatData.Pad[2] = '\0';
      local_50.StatData.Pad[3] = '\0';
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_res18[0] = FVar2;
      local_50.NameAndInfo.Index.Value = FVar9.Value;
      FThreadStats::AddStatMessage(this_00,&local_50);
      FStatsTrace::Add(local_res18,1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// FailAsyncLoad @ 142486b80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FFreeTypeFace::FailAsyncLoad(FFreeTypeFace *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bPendingAsyncLoad != false) {
    this->bPendingAsyncLoad = false;
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8768772752418013626>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                     ,0x1ba,"bPendingAsyncLoad");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bPendingAsyncLoad = false;
  return;
}

// GetAllocatedMemorySize @ 14248ab10

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

ulong64 __thiscall FFreeTypeFace::GetAllocatedMemorySize(FFreeTypeFace *this)

{
  int iVar1;
  FFontFaceData *pFVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  ulong64 uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 auStackX_8 [8];
  
  pFVar2 = (this->Memory).Object;
  if (pFVar2 == (FFontFaceData *)0x0) {
    return 0;
  }
  iVar1 = (pFVar2->PreprocessedFontGeometries).ArrayNum;
  pFVar4 = (pFVar2->PreprocessedFontGeometries).AllocatorInstance.Data;
  uVar5 = (longlong)(pFVar2->PreprocessedFontGeometries).ArrayMax * 0x78 +
          (longlong)(pFVar2->Data).ArrayMax;
  pFVar6 = pFVar4 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((pFVar2->PreprocessedFontGeometries).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Slate::FPreprocessedFontGeometry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(auStackX_8);
    }
    if (pFVar4 == pFVar6) break;
    if (*(uint *)(pFVar4 + 0x50) < 2) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)(int)*(uint *)(pFVar4 + 0x50) << 2;
    }
    uVar5 = uVar5 + (longlong)*(int *)(pFVar4 + 100) +
                    (ulonglong)((*(int *)(pFVar4 + 0x34) + 0x1fU >> 5) << 2) + lVar3 +
                    ((longlong)*(int *)(pFVar4 + 0x74) + (longlong)*(int *)(pFVar4 + 0x14) * 0x12) *
                    2;
    pFVar4 = pFVar4 + 0x78;
  }
  return uVar5;
}

// GetAvailableSubFaces @ 14248aeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014248b2d0) */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FFreeTypeFace::GetAvailableSubFaces
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FFreeTypeLibrary *param_1,FString *param_2)

{
  int *piVar1;
  uint uVar2;
  uchar *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPlatformFileManager *this;
  IPlatformFile *pIVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  size_t sVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStackY_3a8 [32];
  uint *local_358;
  FString local_350;
  uint local_340;
  longlong *local_338;
  longlong local_330;
  FFreeTypeLibrary *local_328;
  undefined4 local_318;
  undefined8 local_314;
  undefined8 local_30c;
  undefined8 local_304;
  undefined4 local_2fc;
  undefined8 *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  longlong **local_2c8;
  undefined8 local_2c0;
  code *local_2b8;
  code *local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  FScriptContainerElement local_288 [256];
  ForAnyElementType local_188;
  FScriptContainerElement *local_180;
  int local_178;
  FScriptContainerElement local_168 [256];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  iVar13 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_328 = param_1;
  this = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  local_338 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xe8))(pIVar7,pwVar10,0);
  if (local_338 == (longlong *)0x0) {
    local_330 = 0;
  }
  else {
    local_330 = (**(code **)(*local_338 + 0x50))(local_338);
    if (((local_330 < 0) || (0xffffffff < local_330)) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8768772752418013762>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                           ,0x242,
                           "FTStreamHandler.FontSizeBytes >= 0 && FTStreamHandler.FontSizeBytes <= std::numeric_limits<uint32>::max()"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar8;
    }
  }
  local_2d0 = (undefined4)local_330;
  local_2c8 = &local_338;
  local_2d8 = 0;
  local_2b0 = FFTStreamHandler::CloseFile;
  local_2b8 = FFTStreamHandler::ReadData;
  local_2f8 = &local_2d8;
  local_2cc = 0;
  local_2c0 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  local_314 = 0;
  local_30c = 0;
  local_304 = 0;
  local_2fc = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_318 = 2;
  local_358 = (uint *)0x0;
  FT_Open_Face(param_1->FTLibrary,&local_318,0xffffffff,&local_358);
  if (local_358 != (uint *)0x0) {
    uVar2 = *local_358;
    uVar14 = (ulonglong)uVar2;
    local_340 = uVar2;
    FT_Done_Face();
    local_358 = (uint *)0x0;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar14);
    }
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,
                 __return_storage_ptr__->ArrayNum,piVar1);
    }
    if (0 < (int)uVar2) {
      do {
        FT_Open_Face(param_1->FTLibrary,&local_318,iVar13,&local_358);
        if (local_358 != (uint *)0x0) {
          puVar3 = *(uchar **)(local_358 + 8);
          local_68.Data = (FScriptContainerElement *)0x0;
          if (puVar3 == (uchar *)0x0) {
            local_60 = (FScriptContainerElement *)0x0;
            local_58 = 0;
          }
          else {
            sVar9 = strlen((char *)puVar3);
            local_58 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,(int)sVar9);
            uVar2 = local_58 + 1;
            uVar12 = uVar2;
            if (uVar2 < 0x81) {
              if (local_68.Data != (FScriptContainerElement *)0x0) {
                uVar12 = 0;
                goto LAB_14248b0e3;
              }
            }
            else {
LAB_14248b0e3:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_68,0,uVar12,2);
            }
            local_60 = local_168;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              local_60 = local_68.Data;
            }
            UE::Core::Private::Convert((wchar_t *)local_60,uVar2,puVar3,(int)sVar9 + 1);
          }
          puVar3 = *(uchar **)(local_358 + 6);
          local_188.Data = (FScriptContainerElement *)0x0;
          if (puVar3 == (uchar *)0x0) {
            local_180 = (FScriptContainerElement *)0x0;
            local_178 = 0;
          }
          else {
            sVar9 = strlen((char *)puVar3);
            local_178 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar3,(int)sVar9);
            uVar2 = local_178 + 1;
            uVar12 = uVar2;
            if (uVar2 < 0x81) {
              if (local_188.Data != (FScriptContainerElement *)0x0) {
                uVar12 = 0;
                goto LAB_14248b192;
              }
            }
            else {
LAB_14248b192:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_188,0,uVar12,2);
            }
            local_180 = local_288;
            if (local_188.Data != (FScriptContainerElement *)0x0) {
              local_180 = local_188.Data;
            }
            UE::Core::Private::Convert((wchar_t *)local_180,uVar2,puVar3,(int)sVar9 + 1);
            uVar14 = (ulonglong)local_340;
          }
          ::FString::PrintfImpl(&local_350,L"%s (%s)");
          pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_350) &&
              ((FScriptContainerElement *)&local_350 < pFVar11 + (longlong)*piVar1 * 0x10)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar8;
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          pFVar11 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
          *(undefined8 *)pFVar11 = 0;
          *(FScriptContainerElement **)pFVar11 = local_350.Data.AllocatorInstance.Data;
          *(int *)(pFVar11 + 8) = local_350.Data.ArrayNum;
          *(int *)(pFVar11 + 0xc) = local_350.Data.ArrayMax;
          local_350.Data.ArrayNum = 0;
          local_350.Data.ArrayMax = 0;
          local_350.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_188.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data);
          }
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data);
          }
          FT_Done_Face(local_358);
          local_358 = (uint *)0x0;
          param_1 = local_328;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)uVar14);
    }
  }
  if ((local_338 != (longlong *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!FileHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheFreeType.cpp"
                         ,0x286,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  return __return_storage_ptr__;
}

// GetPreprocessedFontGeometry @ 142492940

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

FPreprocessedFontGeometry * __thiscall
FFreeTypeFace::GetPreprocessedFontGeometry(FFreeTypeFace *this)

{
  int iVar1;
  FFontFaceData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FPreprocessedFontGeometry *pFVar6;
  uint uVar7;
  
  pFVar2 = (this->Memory).Object;
  if (pFVar2 != (FFontFaceData *)0x0) {
    iVar1 = (pFVar2->PreprocessedFontGeometries).ArrayNum;
    uVar7 = this->FTFace->face_index & 0x7fff;
    if (iVar1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar6 = (FPreprocessedFontGeometry *)(*pcVar4)();
        return pFVar6;
      }
    }
    if ((int)uVar7 < iVar1) {
      if ((this->Memory).Object == (FFontFaceData *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FPreprocessedFontGeometry *)(*pcVar4)();
          return pFVar6;
        }
      }
      pFVar2 = (this->Memory).Object;
      iVar1 = (pFVar2->PreprocessedFontGeometries).ArrayNum;
      pFVar3 = (pFVar2->PreprocessedFontGeometries).AllocatorInstance.Data;
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FPreprocessedFontGeometry *)(*pcVar4)();
          return pFVar6;
        }
      }
      if (iVar1 <= (int)uVar7) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pFVar6 = (FPreprocessedFontGeometry *)(*pcVar4)();
          return pFVar6;
        }
      }
      return (FPreprocessedFontGeometry *)(pFVar3 + (ulonglong)uVar7 * 0x78);
    }
  }
  return (FPreprocessedFontGeometry *)0x0;
}

// ParseAttributes @ 14249dcb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FFreeTypeFace::ParseAttributes(FFreeTypeFace *this)

{
  uint uVar1;
  uchar *_Str;
  int iVar2;
  size_t sVar3;
  FString *this_00;
  wchar_t *pwVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_170;
  FName local_160;
  FString local_158;
  FScriptContainerElement local_148 [256];
  ForAnyElementType local_48;
  FScriptContainerElement *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (this->FTFace == (FT_FaceRec_ *)0x0) {
    return;
  }
  local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170.ArrayNum = 0;
  local_170.ArrayMax = 0;
  _Str = (uchar *)this->FTFace->style_name;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (_Str == (uchar *)0x0) {
    local_40 = (FScriptContainerElement *)0x0;
    local_38 = 0;
    goto LAB_14249dd81;
  }
  sVar3 = strlen((char *)_Str);
  local_38 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,_Str,(int)sVar3);
  uVar1 = local_38 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_14249dd41;
    }
  }
  else {
LAB_14249dd41:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar7,2);
  }
  local_40 = local_148;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    local_40 = local_48.Data;
  }
  UE::Core::Private::Convert((wchar_t *)local_40,uVar1,_Str,(int)sVar3 + 1);
LAB_14249dd81:
  this_00 = ::FString::FString(&local_158,(wchar_t *)local_40);
  ::FString::ParseIntoArray(this_00,&local_170,L" ",true);
  if ((FName)local_158.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  iVar2 = local_170.ArrayNum;
  pFVar6 = local_170.AllocatorInstance.Data + (longlong)local_170.ArrayNum * 0x10;
  FVar5.Data = local_170.AllocatorInstance.Data;
  while( true ) {
    if (local_170.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    if (FVar5.Data == pFVar6) break;
    if (*(int *)(FVar5.Data + 8) == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = *(wchar_t **)FVar5.Data;
    }
    ::FName::FName((FName *)&local_158,pwVar4);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&this->Attributes,&local_160,(bool *)&local_158);
    FVar5.Data = FVar5.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_170.AllocatorInstance.Data,local_170.ArrayNum);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 15048e9f0

bool __thiscall `FFreeTypeFace::FFreeTypeFace'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8768772752418013691>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<8768772752418013691>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15048eae0

bool __thiscall `FFreeTypeFace::CompleteAsyncLoad'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8768772752418013648>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8768772752418013648>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ebe0

bool __thiscall `FFreeTypeFace::CompleteAsyncLoad'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8768772752418013652>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8768772752418013652>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15048ec20

bool __thiscall `FFreeTypeFace::FFreeTypeFace'::__l5::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<8768772752418013694>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8768772752418013694>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

