// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 19

// StaticClass @ 147336c50

UClass * __cdecl UVectorFieldStatic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldStatic",
               &Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton,
               StaticRegisterNativesUVectorFieldStatic,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVectorFieldStatic>,
               InternalVTableHelperCtorCaller<UVectorFieldStatic>,local_res8,
               UVectorField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton;
}

// UVectorFieldStatic @ 147340e60

UVectorFieldStatic * __thiscall
UVectorFieldStatic::UVectorFieldStatic(UVectorFieldStatic *this,FVTableHelper *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  UVectorField::UVectorField((UVectorField *)this,param_1);
  this->_padding_ = (longlong)&___7UVectorFieldStatic__6B_;
  *(undefined8 *)&this->SourceData = 0;
  *(undefined8 *)&(this->SourceData).field_0x8 = 0;
  *(undefined8 *)&(this->SourceData).field_0x10 = 0;
  *(undefined4 *)&(this->SourceData).field_0xd = 0xffffffff;
  (this->SourceData).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->SourceData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->SourceData).field_0x19 = uVar1;
  (this->SourceData).field_0x1a = uVar2;
  (this->SourceData).field_0x1b = uVar3;
  (this->SourceData).field_0x1c = uVar4;
  (this->SourceData).field_0x1d = uVar5;
  (this->SourceData).field_0x1e = uVar6;
  (this->SourceData).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->SourceData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->SourceData).field_0x21 = uVar1;
  (this->SourceData).field_0x22 = uVar2;
  (this->SourceData).field_0x23 = uVar3;
  (this->CPUData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPUData).ArrayNum = 0;
  (this->CPUData).ArrayMax = 0;
  return this;
}

// ~UVectorFieldStatic @ 147342360

void __thiscall UVectorFieldStatic::~UVectorFieldStatic(UVectorFieldStatic *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVectorFieldStatic__6B_;
  pFVar1 = (this->CPUData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FBulkData::~FBulkData((FBulkData *)&this->SourceData);
  UVectorField::~UVectorField((UVectorField *)this);
  return;
}

// GetPrivateStaticClass @ 147350320

UClass * __cdecl UVectorFieldStatic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VectorFieldStatic",
               &Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton,
               StaticRegisterNativesUVectorFieldStatic,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UVectorFieldStatic>,
               InternalVTableHelperCtorCaller<UVectorFieldStatic>,local_res8,
               UVectorField::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVectorFieldStatic.InnerSingleton;
}

// Serialize @ 147356a90

void __thiscall
UVectorFieldStatic::Serialize(UVectorFieldStatic *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUVectorFieldStatic @ 147358980

void __cdecl UVectorFieldStatic::StaticRegisterNativesUVectorFieldStatic(void)

{
  return;
}

// UVectorFieldStatic @ 14890be70

UVectorFieldStatic * __thiscall
UVectorFieldStatic::UVectorFieldStatic(UVectorFieldStatic *this,FObjectInitializer *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UVectorFieldStatic__6B_;
  *(undefined8 *)&this->SourceData = 0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->bAllowCPUAccess = false;
  *(undefined8 *)&(this->SourceData).field_0x8 = 0;
  *(undefined8 *)&(this->SourceData).field_0x10 = 0;
  *(undefined4 *)&(this->SourceData).field_0xd = 0xffffffff;
  (this->SourceData).field_0x11 = 0xff;
  uVar1 = FIoChunkId::InvalidChunkId.Id[1];
  uVar2 = FIoChunkId::InvalidChunkId.Id[2];
  uVar3 = FIoChunkId::InvalidChunkId.Id[3];
  uVar4 = FIoChunkId::InvalidChunkId.Id[4];
  uVar5 = FIoChunkId::InvalidChunkId.Id[5];
  uVar6 = FIoChunkId::InvalidChunkId.Id[6];
  uVar7 = FIoChunkId::InvalidChunkId.Id[7];
  (this->SourceData).field_0x18 = FIoChunkId::InvalidChunkId.Id[0];
  (this->SourceData).field_0x19 = uVar1;
  (this->SourceData).field_0x1a = uVar2;
  (this->SourceData).field_0x1b = uVar3;
  (this->SourceData).field_0x1c = uVar4;
  (this->SourceData).field_0x1d = uVar5;
  (this->SourceData).field_0x1e = uVar6;
  (this->SourceData).field_0x1f = uVar7;
  uVar1 = FIoChunkId::InvalidChunkId.Id[9];
  uVar2 = FIoChunkId::InvalidChunkId.Id[10];
  uVar3 = FIoChunkId::InvalidChunkId.Id[0xb];
  (this->SourceData).field_0x20 = FIoChunkId::InvalidChunkId.Id[8];
  (this->SourceData).field_0x21 = uVar1;
  (this->SourceData).field_0x22 = uVar2;
  (this->SourceData).field_0x23 = uVar3;
  (this->CPUData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CPUData).ArrayNum = 0;
  (this->CPUData).ArrayMax = 0;
  return this;
}

// BeginDestroy @ 148919240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVectorFieldStatic::BeginDestroy(UVectorFieldStatic *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FVectorFieldResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVectorFieldResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->Resource != (FVectorFieldResource *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UVectorFieldStatic::ReleaseResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UVectorFieldStatic::ReleaseResource'::`5'::<lambda_1>,1,0>::
                _vftable_;
    pFStack_70 = this->Resource;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UVectorFieldStatic::ReleaseResource_::__l5::TSTR_ReleaseVectorFieldCommand541>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UVectorFieldStatic::ReleaseResource'::__l5::TSTR_ReleaseVectorFieldCommand541>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    this->Resource = (FVectorFieldResource *)0x0;
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// FilteredSample @ 148942df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UVectorFieldStatic::FilteredSample
          (UVectorFieldStatic *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          ,TVector<double> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined1 auVar23 [14];
  undefined1 auVar24 [14];
  undefined1 auVar25 [14];
  undefined1 auVar26 [14];
  undefined1 auVar27 [14];
  undefined1 auVar28 [14];
  undefined1 auVar29 [14];
  undefined1 auVar30 [14];
  undefined1 auVar31 [14];
  undefined1 auVar32 [14];
  undefined1 auVar33 [14];
  undefined1 auVar34 [14];
  undefined1 auVar35 [14];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  uint uVar54;
  undefined7 extraout_var;
  TVector<double> *pTVar55;
  longlong lVar56;
  FScriptContainerElement *pFVar57;
  int iVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  undefined1 auVar62 [16];
  double dVar63;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  undefined1 auVar64 [16];
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  double dVar73;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  undefined1 auVar74 [16];
  uint uVar86;
  uint uVar87;
  uint uVar88;
  double dVar89;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  undefined1 auVar90 [16];
  double dVar97;
  double dVar98;
  undefined8 uVar99;
  undefined1 auVar100 [16];
  double dVar101;
  undefined8 uVar102;
  undefined1 auVar103 [16];
  undefined8 uVar104;
  undefined1 auVar105 [16];
  double dVar106;
  uint uVar107;
  uint uVar108;
  double dVar109;
  double dVar110;
  
  uVar54 = (uint)&stack0x00000000;
  if (this->bAllowCPUAccess == false) {
    bVar51 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x1a7,L"");
    uVar54 = (uint)CONCAT71(extraout_var,bVar51);
    if (bVar51) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  dVar61 = (param_1->field0_0x0)._s_0.X;
  iVar5 = this->SizeX;
  iVar6 = this->SizeY;
  lVar56 = (longlong)dVar61;
  dVar97 = (double)iVar5;
  dVar109 = (double)iVar6;
  dVar110 = (double)this->SizeZ;
  auVar62._0_8_ = dVar61;
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != dVar61)) {
    auVar105._8_8_ = dVar61;
    auVar105._0_8_ = dVar61;
    uVar54 = movmskpd(uVar54,auVar105);
    uVar54 = uVar54 & 1;
    auVar62._0_8_ = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  dVar63 = (param_1->field0_0x0)._s_0.Y;
  lVar56 = (longlong)dVar63;
  dVar101 = dVar63;
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != dVar63)) {
    auVar103._8_8_ = dVar63;
    auVar103._0_8_ = dVar63;
    uVar54 = movmskpd(uVar54,auVar103);
    uVar54 = uVar54 & 1;
    dVar101 = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  dVar73 = (param_1->field0_0x0)._s_0.Z;
  lVar56 = (longlong)dVar73;
  dVar98 = dVar73;
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != dVar73)) {
    auVar100._8_8_ = dVar73;
    auVar100._0_8_ = dVar73;
    uVar54 = movmskpd(uVar54,auVar100);
    uVar54 = uVar54 & 1;
    dVar98 = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  dVar61 = dVar61 - auVar62._0_8_;
  dVar63 = dVar63 - dVar101;
  dVar106 = dVar110 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dVar73 = dVar73 - dVar98;
  auVar90._0_8_ = (__real_3ff0000000000000 / dVar110) * dVar98;
  lVar56 = (longlong)auVar90._0_8_;
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != auVar90._0_8_)) {
    auVar90._8_8_ = auVar90._0_8_;
    uVar54 = movmskpd(uVar54,auVar90);
    uVar54 = uVar54 & 1;
    auVar90._0_8_ = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  auVar59._0_8_ = (__real_3ff0000000000000 / dVar109) * dVar101;
  lVar56 = (longlong)auVar59._0_8_;
  uVar99 = dVar98 - auVar90._0_8_ * (param_2->field0_0x0)._s_0.Z * dVar110;
  if (dVar106 <= (double)uVar99) {
    uVar99 = dVar106;
  }
  auVar90._0_8_ = dVar109 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  if ((double)uVar99 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) {
    uVar99 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != auVar59._0_8_)) {
    auVar59._8_8_ = auVar59._0_8_;
    uVar54 = movmskpd(uVar54,auVar59);
    uVar54 = uVar54 & 1;
    auVar59._0_8_ = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  dVar89 = dVar97 - UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  uVar102 = dVar101 - auVar59._0_8_ * (param_2->field0_0x0)._s_0.Y * dVar109;
  auVar60._0_8_ = (__real_3ff0000000000000 / dVar97) * auVar62._0_8_;
  if (auVar90._0_8_ <= (double)uVar102) {
    uVar102 = auVar90._0_8_;
  }
  lVar56 = (longlong)auVar60._0_8_;
  if ((double)uVar102 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
    uVar102 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != auVar60._0_8_)) {
    auVar60._8_8_ = auVar60._0_8_;
    uVar54 = movmskpd(uVar54,auVar60);
    uVar54 = uVar54 & 1;
    auVar60._0_8_ = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  auVar74._0_8_ =
       (__real_3ff0000000000000 / dVar97) *
       (auVar62._0_8_ + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X);
  lVar56 = (longlong)auVar74._0_8_;
  uVar104 = auVar62._0_8_ - auVar60._0_8_ * (param_2->field0_0x0)._s_0.X * dVar97;
  if (dVar89 <= (double)uVar104) {
    uVar104 = dVar89;
  }
  if ((double)uVar104 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
    uVar104 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != auVar74._0_8_)) {
    auVar74._8_8_ = auVar74._0_8_;
    uVar54 = movmskpd(uVar54,auVar74);
    uVar54 = uVar54 & 1;
    auVar74._0_8_ = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  auVar64._0_8_ =
       (__real_3ff0000000000000 / dVar109) *
       (dVar101 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y);
  lVar56 = (longlong)auVar64._0_8_;
  uVar14 = (auVar62._0_8_ + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X) -
           auVar74._0_8_ * (param_2->field0_0x0)._s_0.X * dVar97;
  if (dVar89 <= (double)uVar14) {
    uVar14 = dVar89;
  }
  if ((double)uVar14 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) {
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  }
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != auVar64._0_8_)) {
    auVar64._8_8_ = auVar64._0_8_;
    uVar54 = movmskpd(uVar54,auVar64);
    uVar54 = uVar54 & 1;
    auVar64._0_8_ = (double)(longlong)(lVar56 - (ulonglong)uVar54);
  }
  auVar62._0_8_ =
       (__real_3ff0000000000000 / dVar110) *
       (dVar98 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z);
  lVar56 = (longlong)auVar62._0_8_;
  uVar13 = (dVar101 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y) -
           auVar64._0_8_ * (param_2->field0_0x0)._s_0.Y * dVar109;
  if (auVar90._0_8_ <= (double)uVar13) {
    uVar13 = auVar90._0_8_;
  }
  if ((double)uVar13 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y) {
    uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  if ((lVar56 != -0x8000000000000000) && ((double)lVar56 != auVar62._0_8_)) {
    auVar62._8_8_ = auVar62._0_8_;
    uVar54 = movmskpd(uVar54,auVar62);
    auVar62._0_8_ = (double)(longlong)(lVar56 - (ulonglong)(uVar54 & 1));
  }
  uVar12 = (dVar98 + UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z) -
           auVar62._0_8_ * (param_2->field0_0x0)._s_0.Z * dVar110;
  if (dVar106 <= (double)uVar12) {
    uVar12 = dVar106;
  }
  if ((double)uVar12 <= UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z) {
    uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  if (this->bAllowCPUAccess == false) {
    bVar51 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar51) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar51 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar51) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  uVar50 = _UNK_1506896e8;
  uVar49 = _UNK_1506896e4;
  uVar48 = __xmm_7f8000007f8000007f8000007f800000;
  fVar47 = _UNK_1506896d8;
  fVar46 = _UNK_1506896d4;
  fVar45 = ___xmm_77800000778000007780000077800000;
  uVar108 = _UNK_1506895a8;
  uVar107 = _UNK_1506895a4;
  uVar54 = ___xmm_00007fff00007fff00007fff00007fff;
  iVar5 = (int)((double)(iVar6 * iVar5) * (double)uVar99 +
               (double)uVar102 * dVar97 + (double)uVar104) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar1 = *(ulonglong *)pFVar57;
  iVar5 = this->SizeX;
  auVar22._8_4_ = 0;
  auVar22._0_8_ = uVar1;
  auVar22._12_2_ = (short)(uVar1 >> 0x30);
  auVar30._8_2_ = (short)(uVar1 >> 0x20);
  auVar30._0_8_ = uVar1;
  auVar30._10_4_ = auVar22._10_4_;
  auVar31._6_8_ = 0;
  auVar31._0_6_ = auVar30._8_6_;
  uVar68 = ___xmm_00007fff00007fff00007fff00007fff & (ushort)uVar1;
  uVar81 = (uint)CONCAT82(SUB148(auVar31 << 0x40,6),(short)(uVar1 >> 0x10));
  uVar75 = _UNK_1506895a4 & uVar81;
  uVar80 = _UNK_1506895a8 & auVar30._8_4_;
  dVar109 = (double)(float)(-(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar68) &
                            ___xmm_00400000004000000040000000400000 |
                            -(uint)(___xmm_00007bff00007bff00007bff00007bff < (int)uVar68) &
                            __xmm_7f8000007f8000007f8000007f800000 |
                            (uVar68 ^ (ushort)uVar1) << 0x10 |
                           (uint)((float)(uVar68 << 0xd) * ___xmm_77800000778000007780000077800000))
  ;
  auVar62._0_8_ =
       (double)(float)(-(uint)(_UNK_150689594 < (int)uVar75) & _UNK_1506895b4 |
                       -(uint)(_UNK_150689584 < (int)uVar75) & _UNK_1506896e4 |
                       (uVar75 ^ uVar81) << 0x10 | (uint)((float)(uVar75 << 0xd) * _UNK_1506896d4));
  dVar97 = (double)(float)(-(uint)(_UNK_150689598 < (int)uVar80) & _UNK_1506895b8 |
                           -(uint)(_UNK_150689588 < (int)uVar80) & _UNK_1506896e8 |
                           (uVar80 ^ auVar30._8_4_) << 0x10 |
                          (uint)((float)(uVar80 << 0xd) * _UNK_1506896d8));
  iVar6 = this->SizeY;
  if (this->bAllowCPUAccess == false) {
    bVar51 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar51) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar51 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar51) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  iVar5 = (int)((double)iVar5 * (double)uVar102 + (double)uVar14 +
               (double)(iVar5 * iVar6) * (double)uVar99) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar1 = *(ulonglong *)pFVar57;
  iVar5 = this->SizeX;
  auVar15._8_4_ = 0;
  auVar15._0_8_ = uVar1;
  auVar15._12_2_ = (short)(uVar1 >> 0x30);
  auVar23._8_2_ = (short)(uVar1 >> 0x20);
  auVar23._0_8_ = uVar1;
  auVar23._10_4_ = auVar15._10_4_;
  auVar32._6_8_ = 0;
  auVar32._0_6_ = auVar23._8_6_;
  uVar75 = uVar54 & (ushort)uVar1;
  uVar68 = (uint)CONCAT82(SUB148(auVar32 << 0x40,6),(short)(uVar1 >> 0x10));
  uVar80 = uVar107 & uVar68;
  uVar81 = uVar108 & auVar23._8_4_;
  bVar51 = ___xmm_00007bff00007bff00007bff00007bff < (int)uVar75;
  bVar8 = _UNK_150689584 < (int)uVar80;
  bVar9 = _UNK_150689588 < (int)uVar81;
  uVar86 = -(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar75) &
           ___xmm_00400000004000000040000000400000;
  uVar91 = -(uint)(_UNK_150689594 < (int)uVar80) & _UNK_1506895b4;
  uVar94 = -(uint)(_UNK_150689598 < (int)uVar81) & _UNK_1506895b8;
  iVar6 = this->SizeY;
  if (this->bAllowCPUAccess == false) {
    bVar52 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar52) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar52 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar52) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  iVar5 = (int)((double)iVar5 * (double)uVar13 + (double)uVar104 +
               (double)(iVar5 * iVar6) * (double)uVar99) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar2 = *(ulonglong *)pFVar57;
  iVar5 = this->SizeX;
  auVar16._8_4_ = 0;
  auVar16._0_8_ = uVar2;
  auVar16._12_2_ = (short)(uVar2 >> 0x30);
  auVar24._8_2_ = (short)(uVar2 >> 0x20);
  auVar24._0_8_ = uVar2;
  auVar24._10_4_ = auVar16._10_4_;
  auVar33._6_8_ = 0;
  auVar33._0_6_ = auVar24._8_6_;
  uVar69 = uVar54 & (ushort)uVar2;
  uVar65 = (uint)CONCAT82(SUB148(auVar33 << 0x40,6),(short)(uVar2 >> 0x10));
  uVar76 = uVar107 & uVar65;
  uVar82 = uVar108 & auVar24._8_4_;
  dVar110 = (double)(float)(-(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar69) &
                            ___xmm_00400000004000000040000000400000 |
                            -(uint)(___xmm_00007bff00007bff00007bff00007bff < (int)uVar69) & uVar48
                            | (uVar69 ^ (ushort)uVar2) << 0x10 |
                           (uint)((float)(uVar69 << 0xd) * fVar45));
  dVar98 = (double)(float)(-(uint)(_UNK_150689594 < (int)uVar76) & _UNK_1506895b4 |
                           -(uint)(_UNK_150689584 < (int)uVar76) & uVar49 |
                           (uVar76 ^ uVar65) << 0x10 | (uint)((float)(uVar76 << 0xd) * fVar46));
  dVar101 = (double)(float)(-(uint)(_UNK_150689598 < (int)uVar82) & _UNK_1506895b8 |
                            -(uint)(_UNK_150689588 < (int)uVar82) & uVar50 |
                            (uVar82 ^ auVar24._8_4_) << 0x10 |
                           (uint)((float)(uVar82 << 0xd) * fVar47));
  iVar6 = this->SizeY;
  if (this->bAllowCPUAccess == false) {
    bVar52 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar52) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar52 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar52) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  iVar41 = _UNK_150689588;
  iVar40 = _UNK_150689584;
  iVar39 = ___xmm_00007bff00007bff00007bff00007bff;
  iVar5 = (int)((double)iVar5 * (double)uVar13 + (double)uVar14 +
               (double)(iVar5 * iVar6) * (double)uVar99) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar2 = *(ulonglong *)pFVar57;
  iVar5 = this->SizeX;
  iVar6 = this->SizeY;
  auVar17._8_4_ = 0;
  auVar17._0_8_ = uVar2;
  auVar17._12_2_ = (short)(uVar2 >> 0x30);
  auVar25._8_2_ = (short)(uVar2 >> 0x20);
  auVar25._0_8_ = uVar2;
  auVar25._10_4_ = auVar17._10_4_;
  auVar34._6_8_ = 0;
  auVar34._0_6_ = auVar25._8_6_;
  uVar69 = uVar54 & (ushort)uVar2;
  uVar65 = (uint)CONCAT82(SUB148(auVar34 << 0x40,6),(short)(uVar2 >> 0x10));
  uVar76 = uVar107 & uVar65;
  uVar82 = uVar108 & auVar25._8_4_;
  bVar52 = ___xmm_00007bff00007bff00007bff00007bff < (int)uVar69;
  bVar10 = _UNK_150689584 < (int)uVar76;
  bVar11 = _UNK_150689588 < (int)uVar82;
  uVar87 = -(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar69) &
           ___xmm_00400000004000000040000000400000;
  uVar92 = -(uint)(_UNK_150689594 < (int)uVar76) & _UNK_1506895b4;
  uVar95 = -(uint)(_UNK_150689598 < (int)uVar82) & _UNK_1506895b8;
  if (this->bAllowCPUAccess == false) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  iVar5 = (int)((double)(iVar5 * iVar6) * (double)uVar12 +
               (double)iVar5 * (double)uVar102 + (double)uVar104) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar3 = *(ulonglong *)pFVar57;
  iVar5 = this->SizeX;
  iVar6 = this->SizeY;
  auVar18._8_4_ = 0;
  auVar18._0_8_ = uVar3;
  auVar18._12_2_ = (short)(uVar3 >> 0x30);
  auVar26._8_2_ = (short)(uVar3 >> 0x20);
  auVar26._0_8_ = uVar3;
  auVar26._10_4_ = auVar18._10_4_;
  auVar35._6_8_ = 0;
  auVar35._0_6_ = auVar26._8_6_;
  uVar70 = uVar54 & (ushort)uVar3;
  uVar66 = (uint)CONCAT82(SUB148(auVar35 << 0x40,6),(short)(uVar3 >> 0x10));
  uVar77 = uVar107 & uVar66;
  uVar83 = uVar108 & auVar26._8_4_;
  auVar90._0_8_ =
       (double)(float)(-(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar70) &
                       ___xmm_00400000004000000040000000400000 |
                       -(uint)(iVar39 < (int)uVar70) & uVar48 | (uVar70 ^ (ushort)uVar3) << 0x10 |
                      (uint)((float)(uVar70 << 0xd) * fVar45));
  auVar59._0_8_ =
       (double)(float)(-(uint)(_UNK_150689594 < (int)uVar77) & _UNK_1506895b4 |
                       -(uint)(iVar40 < (int)uVar77) & uVar49 | (uVar77 ^ uVar66) << 0x10 |
                      (uint)((float)(uVar77 << 0xd) * fVar46));
  dVar106 = (double)(float)(-(uint)(_UNK_150689598 < (int)uVar83) & _UNK_1506895b8 |
                            -(uint)(iVar41 < (int)uVar83) & uVar50 |
                            (uVar83 ^ auVar26._8_4_) << 0x10 |
                           (uint)((float)(uVar83 << 0xd) * fVar47));
  if (this->bAllowCPUAccess == false) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  uVar77 = _UNK_1506895b8;
  uVar70 = _UNK_1506895b4;
  uVar66 = ___xmm_00400000004000000040000000400000;
  iVar5 = (int)((double)(iVar5 * iVar6) * (double)uVar12 +
               (double)iVar5 * (double)uVar102 + (double)uVar14) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar3 = *(ulonglong *)pFVar57;
  iVar5 = this->SizeX;
  auVar19._8_4_ = 0;
  auVar19._0_8_ = uVar3;
  auVar19._12_2_ = (short)(uVar3 >> 0x30);
  auVar27._8_2_ = (short)(uVar3 >> 0x20);
  auVar27._0_8_ = uVar3;
  auVar27._10_4_ = auVar19._10_4_;
  auVar36._6_8_ = 0;
  auVar36._0_6_ = auVar27._8_6_;
  uVar71 = uVar54 & (ushort)uVar3;
  uVar83 = (uint)CONCAT82(SUB148(auVar36 << 0x40,6),(short)(uVar3 >> 0x10));
  uVar78 = uVar107 & uVar83;
  uVar84 = uVar108 & auVar27._8_4_;
  uVar88 = -(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar71) &
           ___xmm_00400000004000000040000000400000;
  uVar93 = -(uint)(_UNK_150689594 < (int)uVar78) & _UNK_1506895b4;
  uVar96 = -(uint)(_UNK_150689598 < (int)uVar84) & _UNK_1506895b8;
  iVar6 = this->SizeY;
  if (this->bAllowCPUAccess == false) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  iVar44 = _UNK_150689598;
  iVar43 = _UNK_150689594;
  iVar42 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar5 = (int)((double)iVar5 * (double)uVar13 + (double)uVar104 +
               (double)(iVar5 * iVar6) * (double)uVar12) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar4 = *(ulonglong *)pFVar57;
  iVar5 = this->SizeX;
  auVar20._8_4_ = 0;
  auVar20._0_8_ = uVar4;
  auVar20._12_2_ = (short)(uVar4 >> 0x30);
  auVar28._8_2_ = (short)(uVar4 >> 0x20);
  auVar28._0_8_ = uVar4;
  auVar28._10_4_ = auVar20._10_4_;
  auVar37._6_8_ = 0;
  auVar37._0_6_ = auVar28._8_6_;
  uVar72 = uVar54 & (ushort)uVar4;
  uVar67 = (uint)CONCAT82(SUB148(auVar37 << 0x40,6),(short)(uVar4 >> 0x10));
  uVar79 = uVar107 & uVar67;
  uVar85 = uVar108 & auVar28._8_4_;
  auVar60._0_8_ =
       (double)(float)(-(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar72) & uVar66 |
                       -(uint)(iVar39 < (int)uVar72) & uVar48 | (uVar72 ^ (ushort)uVar4) << 0x10 |
                      (uint)((float)(uVar72 << 0xd) * fVar45));
  auVar74._0_8_ =
       (double)(float)(-(uint)(_UNK_150689594 < (int)uVar79) & uVar70 |
                       -(uint)(iVar40 < (int)uVar79) & uVar49 | (uVar79 ^ uVar67) << 0x10 |
                      (uint)((float)(uVar79 << 0xd) * fVar46));
  dVar89 = (double)(float)(-(uint)(_UNK_150689598 < (int)uVar85) & uVar77 |
                           -(uint)(iVar41 < (int)uVar85) & uVar50 | (uVar85 ^ auVar28._8_4_) << 0x10
                          | (uint)((float)(uVar85 << 0xd) * fVar47));
  iVar6 = this->SizeY;
  if (this->bAllowCPUAccess == false) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("bAllowCPUAccess",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                        ,0x207,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  pFVar57 = (this->CPUData).AllocatorInstance.Data;
  iVar58 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar58 < 0) {
    bVar53 = ::FDebug::CheckVerifyFailedImpl2
                       ("ArrayNum >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xfe,L"");
    if (bVar53) {
      pcVar7 = (code *)swi(3);
      pTVar55 = (TVector<double> *)(*pcVar7)();
      return pTVar55;
    }
  }
  iVar5 = (int)((double)iVar5 * (double)uVar13 + (double)uVar14 +
               (double)(iVar5 * iVar6) * (double)uVar12) * 3;
  if ((-1 < iVar5) && (iVar5 + 3 <= iVar58)) {
    pFVar57 = pFVar57 + (longlong)iVar5 * 2;
  }
  uVar4 = *(ulonglong *)pFVar57;
  auVar21._8_4_ = 0;
  auVar21._0_8_ = uVar4;
  auVar21._12_2_ = (short)(uVar4 >> 0x30);
  auVar29._8_2_ = (short)(uVar4 >> 0x20);
  auVar29._0_8_ = uVar4;
  auVar29._10_4_ = auVar21._10_4_;
  auVar38._6_8_ = 0;
  auVar38._0_6_ = auVar29._8_6_;
  uVar54 = uVar54 & (ushort)uVar4;
  uVar67 = (uint)CONCAT82(SUB148(auVar38 << 0x40,6),(short)(uVar4 >> 0x10));
  uVar107 = uVar107 & uVar67;
  uVar108 = uVar108 & auVar29._8_4_;
  auVar62._0_8_ =
       ((double)(float)(uVar91 | -(uint)bVar8 & uVar49 | (uVar80 ^ uVar68) << 0x10 |
                       (uint)((float)(uVar80 << 0xd) * fVar46)) - auVar62._0_8_) * dVar61 +
       auVar62._0_8_;
  auVar90._0_8_ =
       ((double)(float)(uVar88 | -(uint)(iVar39 < (int)uVar71) & uVar48 |
                        (uVar71 ^ (ushort)uVar3) << 0x10 | (uint)((float)(uVar71 << 0xd) * fVar45))
       - auVar90._0_8_) * dVar61 + auVar90._0_8_;
  auVar62._0_8_ =
       ((((double)(float)(uVar92 | -(uint)bVar10 & uVar49 | (uVar76 ^ uVar65) << 0x10 |
                         (uint)((float)(uVar76 << 0xd) * fVar46)) - dVar98) * dVar61 + dVar98) -
       auVar62._0_8_) * dVar63 + auVar62._0_8_;
  dVar109 = ((double)(float)(uVar86 | -(uint)bVar51 & uVar48 | (uVar75 ^ (ushort)uVar1) << 0x10 |
                            (uint)((float)(uVar75 << 0xd) * fVar45)) - dVar109) * dVar61 + dVar109;
  dVar97 = ((double)(float)(uVar94 | -(uint)bVar9 & uVar50 | (uVar81 ^ auVar23._8_4_) << 0x10 |
                           (uint)((float)(uVar81 << 0xd) * fVar47)) - dVar97) * dVar61 + dVar97;
  auVar59._0_8_ =
       ((double)(float)(uVar93 | -(uint)(iVar40 < (int)uVar78) & uVar49 | (uVar78 ^ uVar83) << 0x10
                       | (uint)((float)(uVar78 << 0xd) * fVar46)) - auVar59._0_8_) * dVar61 +
       auVar59._0_8_;
  dVar106 = ((double)(float)(uVar96 | -(uint)(iVar41 < (int)uVar84) & uVar50 |
                             (uVar84 ^ auVar27._8_4_) << 0x10 |
                            (uint)((float)(uVar84 << 0xd) * fVar47)) - dVar106) * dVar61 + dVar106;
  dVar109 = ((((double)(float)(uVar87 | -(uint)bVar52 & uVar48 | (uVar69 ^ (ushort)uVar2) << 0x10 |
                              (uint)((float)(uVar69 << 0xd) * fVar45)) - dVar110) * dVar61 + dVar110
             ) - dVar109) * dVar63 + dVar109;
  dVar97 = ((((double)(float)(uVar95 | -(uint)bVar11 & uVar50 | (uVar82 ^ auVar25._8_4_) << 0x10 |
                             (uint)((float)(uVar82 << 0xd) * fVar47)) - dVar101) * dVar61 + dVar101)
           - dVar97) * dVar63 + dVar97;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       ((((((double)(float)(-(uint)(iVar42 < (int)uVar54) & uVar66 |
                            -(uint)(iVar39 < (int)uVar54) & uVar48 |
                            (uVar54 ^ (ushort)uVar4) << 0x10 |
                           (uint)((float)(uVar54 << 0xd) * fVar45)) - auVar60._0_8_) * dVar61 +
          auVar60._0_8_) - auVar90._0_8_) * dVar63 + auVar90._0_8_) - dVar109) * dVar73 + dVar109;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       ((((((double)(float)(-(uint)(iVar44 < (int)uVar108) & uVar77 |
                            -(uint)(iVar41 < (int)uVar108) & uVar50 |
                            (uVar108 ^ auVar29._8_4_) << 0x10 |
                           (uint)((float)(uVar108 << 0xd) * fVar47)) - dVar89) * dVar61 + dVar89) -
         dVar106) * dVar63 + dVar106) - dVar97) * dVar73 + dVar97;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       ((((((double)(float)(-(uint)(iVar43 < (int)uVar107) & uVar70 |
                            -(uint)(iVar40 < (int)uVar107) & uVar49 | (uVar107 ^ uVar67) << 0x10 |
                           (uint)((float)(uVar107 << 0xd) * fVar46)) - auVar74._0_8_) * dVar61 +
          auVar74._0_8_) - auVar59._0_8_) * dVar63 + auVar59._0_8_) - auVar62._0_8_) * dVar73 +
       auVar62._0_8_;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 14895c4c0

void __thiscall
UVectorFieldStatic::GetResourceSizeEx(UVectorFieldStatic *this,FResourceSizeEx *param_1)

{
  FVectorFieldResource *pFVar1;
  bool bVar2;
  ulong64 uVar3;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->CPUData).ArrayMax);
  bVar2 = FBulkData::IsBulkDataLoaded((FBulkData *)&this->SourceData);
  if (bVar2) {
    uVar3 = FBulkData::GetBulkDataSize((FBulkData *)&this->SourceData);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,uVar3);
  }
  pFVar1 = this->Resource;
  if (pFVar1 != (FVectorFieldResource *)0x0) {
    if (pFVar1[1]._padding_ != 0) {
      FResourceSizeEx::AddDedicatedSystemMemoryBytes
                (param_1,(longlong)(pFVar1->SizeZ * pFVar1->SizeY * pFVar1->SizeX) << 3);
    }
    if ((pFVar1->VolumeTextureRHI).Reference != (FRHITexture *)0x0) {
      FResourceSizeEx::AddDedicatedVideoMemoryBytes
                (param_1,(longlong)
                         ((pFVar1->SizeX + -1 + GPixelFormats[10].BlockSizeX) /
                         GPixelFormats[10].BlockSizeX) *
                         (longlong)
                         ((pFVar1->SizeY + -1 + GPixelFormats[10].BlockSizeY) /
                         GPixelFormats[10].BlockSizeY) *
                         (longlong)
                         ((pFVar1->SizeZ + -1 + GPixelFormats[10].BlockSizeZ) /
                         GPixelFormats[10].BlockSizeZ) * (longlong)GPixelFormats[10].BlockBytes);
    }
  }
  return;
}

// GetVolumeTextureRef @ 14895fad0

FRHITexture * __thiscall UVectorFieldStatic::GetVolumeTextureRef(UVectorFieldStatic *this)

{
  FVectorFieldResource *pFVar1;
  
  pFVar1 = this->Resource;
  if (this->Resource == (FVectorFieldResource *)0x0) {
    pFVar1 = (FVectorFieldResource *)GBlackVolumeTexture;
  }
  return (pFVar1->VolumeTextureRHI).Reference;
}

// InitInstance @ 148962580

void __thiscall
UVectorFieldStatic::InitInstance
          (UVectorFieldStatic *this,FVectorFieldInstance *param_1,bool param_2)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FVectorFieldResource *pFVar3;
  FVectorFieldResource *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  pFVar3 = this->Resource;
  if ((param_1->Resource).Reference != (FVectorFieldResource *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                       ,0x59,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (param_1->Resource).Reference;
  if (pFVar4 != pFVar3) {
    (param_1->Resource).Reference = pFVar3;
    if (pFVar3 != (FVectorFieldResource *)0x0) {
      LOCK();
      (pFVar3->NumRefs).Counter = (pFVar3->NumRefs).Counter + 1;
      UNLOCK();
    }
    if (pFVar4 != (FVectorFieldResource *)0x0) {
      LOCK();
      pFVar1 = &pFVar4->NumRefs;
      iVar2 = pFVar1->Counter;
      pFVar1->Counter = pFVar1->Counter + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  param_1->bInstancedResource = false;
  return;
}

// InitResource @ 148962f20

void __thiscall UVectorFieldStatic::InitResource(UVectorFieldStatic *this)

{
  code *pcVar1;
  double dVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  FVectorFieldResource *this_00;
  
  if ((this->Resource != (FVectorFieldResource *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                          ,0x10a,L""), bVar10)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UpdateCPUData(this,false);
  this_00 = ::operator_new(0x80);
  if (this_00 != (FVectorFieldResource *)0x0) {
    FRenderResource::FRenderResource((FRenderResource *)this_00);
    this_00->_padding_ = (longlong)&___7FVectorFieldResource__6B_;
    this_00->_padding_ = (longlong)&___7FVectorFieldStaticResource__6B_;
    (this_00->VolumeTextureRHI).Reference = (FRHITexture *)0x0;
    (this_00->LocalBounds).IsValid = '\0';
    (this_00->NumRefs).Counter = 0;
    this_00[1]._padding_ = 0;
    this_00->SizeX = this->SizeX;
    this_00->SizeY = this->SizeY;
    this_00->SizeZ = this->SizeZ;
    this_00->Intensity = *(float *)&this->_padding_;
    dVar2 = (double)this->_padding_;
    (this_00->LocalBounds).Min.field0_0x0._s_0.X = (double)this->_padding_;
    (this_00->LocalBounds).Min.field0_0x0._s_0.Y = dVar2;
    dVar2 = (double)this->_padding_;
    (this_00->LocalBounds).Min.field0_0x0._s_0.Z = (double)this->_padding_;
    (this_00->LocalBounds).Max.field0_0x0._s_0.X = dVar2;
    dVar2 = (double)this->_padding_;
    (this_00->LocalBounds).Max.field0_0x0._s_0.Y = (double)this->_padding_;
    (this_00->LocalBounds).Max.field0_0x0._s_0.Z = dVar2;
    uVar3 = *(undefined1 *)((longlong)&this->_padding_ + 1);
    uVar4 = *(undefined1 *)((longlong)&this->_padding_ + 2);
    uVar5 = *(undefined1 *)((longlong)&this->_padding_ + 3);
    uVar6 = *(undefined1 *)((longlong)&this->_padding_ + 4);
    uVar7 = *(undefined1 *)((longlong)&this->_padding_ + 5);
    uVar8 = *(undefined1 *)((longlong)&this->_padding_ + 6);
    uVar9 = *(undefined1 *)((longlong)&this->_padding_ + 7);
    (this_00->LocalBounds).IsValid = *(undefined1 *)&this->_padding_;
    (this_00->LocalBounds).Pad[0] = uVar3;
    (this_00->LocalBounds).Pad[1] = uVar4;
    (this_00->LocalBounds).Pad[2] = uVar5;
    (this_00->LocalBounds).Pad[3] = uVar6;
    (this_00->LocalBounds).Pad[4] = uVar7;
    (this_00->LocalBounds).Pad[5] = uVar8;
    (this_00->LocalBounds).Pad[6] = uVar9;
    FBulkData::GetCopy((FBulkData *)&this->SourceData,(void **)(this_00 + 1),true);
  }
  this->Resource = this_00;
  LOCK();
  (this_00->NumRefs).Counter = (this_00->NumRefs).Counter + 1;
  UNLOCK();
  BeginInitResource((FRenderResource *)this->Resource,(FRenderCommandPipe *)0x0);
  return;
}

// PostLoad @ 14896fca0

void __thiscall UVectorFieldStatic::PostLoad(UVectorFieldStatic *this)

{
  code *pcVar1;
  double dVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  FVectorFieldResource *this_00;
  
  UObject::PostLoad((UObject *)this);
  bVar10 = UObjectBaseUtility::IsTemplate
                     ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar10) {
    if ((this->Resource != (FVectorFieldResource *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                            ,0x10a,L""), bVar10)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UpdateCPUData(this,false);
    this_00 = ::operator_new(0x80);
    if (this_00 != (FVectorFieldResource *)0x0) {
      FRenderResource::FRenderResource((FRenderResource *)this_00);
      this_00->_padding_ = (longlong)&___7FVectorFieldResource__6B_;
      this_00->_padding_ = (longlong)&___7FVectorFieldStaticResource__6B_;
      (this_00->VolumeTextureRHI).Reference = (FRHITexture *)0x0;
      (this_00->LocalBounds).IsValid = '\0';
      (this_00->NumRefs).Counter = 0;
      this_00[1]._padding_ = 0;
      this_00->SizeX = this->SizeX;
      this_00->SizeY = this->SizeY;
      this_00->SizeZ = this->SizeZ;
      this_00->Intensity = *(float *)&this->_padding_;
      dVar2 = (double)this->_padding_;
      (this_00->LocalBounds).Min.field0_0x0._s_0.X = (double)this->_padding_;
      (this_00->LocalBounds).Min.field0_0x0._s_0.Y = dVar2;
      dVar2 = (double)this->_padding_;
      (this_00->LocalBounds).Min.field0_0x0._s_0.Z = (double)this->_padding_;
      (this_00->LocalBounds).Max.field0_0x0._s_0.X = dVar2;
      dVar2 = (double)this->_padding_;
      (this_00->LocalBounds).Max.field0_0x0._s_0.Y = (double)this->_padding_;
      (this_00->LocalBounds).Max.field0_0x0._s_0.Z = dVar2;
      uVar3 = *(undefined1 *)((longlong)&this->_padding_ + 1);
      uVar4 = *(undefined1 *)((longlong)&this->_padding_ + 2);
      uVar5 = *(undefined1 *)((longlong)&this->_padding_ + 3);
      uVar6 = *(undefined1 *)((longlong)&this->_padding_ + 4);
      uVar7 = *(undefined1 *)((longlong)&this->_padding_ + 5);
      uVar8 = *(undefined1 *)((longlong)&this->_padding_ + 6);
      uVar9 = *(undefined1 *)((longlong)&this->_padding_ + 7);
      (this_00->LocalBounds).IsValid = *(undefined1 *)&this->_padding_;
      (this_00->LocalBounds).Pad[0] = uVar3;
      (this_00->LocalBounds).Pad[1] = uVar4;
      (this_00->LocalBounds).Pad[2] = uVar5;
      (this_00->LocalBounds).Pad[3] = uVar6;
      (this_00->LocalBounds).Pad[4] = uVar7;
      (this_00->LocalBounds).Pad[5] = uVar8;
      (this_00->LocalBounds).Pad[6] = uVar9;
      FBulkData::GetCopy((FBulkData *)&this->SourceData,(void **)(this_00 + 1),true);
    }
    this->Resource = this_00;
    LOCK();
    (this_00->NumRefs).Counter = (this_00->NumRefs).Counter + 1;
    UNLOCK();
    BeginInitResource((FRenderResource *)this->Resource,(FRenderCommandPipe *)0x0);
  }
  return;
}

// ReleaseResource @ 1489778f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVectorFieldStatic::ReleaseResource(UVectorFieldStatic *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FVectorFieldResource *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FVectorFieldResource *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = this->Resource;
  if (pFStack_70 != (FVectorFieldResource *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UVectorFieldStatic::ReleaseResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UVectorFieldStatic::ReleaseResource'::`5'::<lambda_1>,1,0>::
                _vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UVectorFieldStatic::ReleaseResource_::__l5::TSTR_ReleaseVectorFieldCommand541>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`UVectorFieldStatic::ReleaseResource'::__l5::TSTR_ReleaseVectorFieldCommand541>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    this->Resource = (FVectorFieldResource *)0x0;
  }
  return;
}

// Sample @ 14897bac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UVectorFieldStatic::Sample
          (UVectorFieldStatic *this,TVector<double> *__return_storage_ptr__,
          TIntVector3<int> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  bool bVar8;
  TVector<double> *pTVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  
  if (this->bAllowCPUAccess == false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAllowCPUAccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                       ,0x1e0,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar2 = this->SizeX;
  iVar3 = this->SizeY;
  iVar13 = iVar2 + -1;
  iVar14 = iVar3 + -1;
  if ((param_1->field0_0x0)._s_0.X < iVar13) {
    iVar13 = (param_1->field0_0x0)._s_0.X;
  }
  if ((param_1->field0_0x0)._s_0.Y < iVar14) {
    iVar14 = (param_1->field0_0x0)._s_0.Y;
  }
  iVar10 = this->SizeZ + -1;
  if ((param_1->field0_0x0)._s_0.Z < iVar10) {
    iVar10 = (param_1->field0_0x0)._s_0.Z;
  }
  iVar12 = 0;
  if (0 < iVar10) {
    iVar12 = iVar10;
  }
  iVar10 = 0;
  if (0 < iVar14) {
    iVar10 = iVar14;
  }
  iVar14 = 0;
  if (0 < iVar13) {
    iVar14 = iVar13;
  }
  if (this->bAllowCPUAccess == false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bAllowCPUAccess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                       ,0x207,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar4)();
      return pTVar9;
    }
  }
  pFVar11 = (this->CPUData).AllocatorInstance.Data;
  iVar13 = (int)((ulonglong)(longlong)(this->CPUData).ArrayNum >> 1);
  if (iVar13 < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TVector<double> *)(*pcVar4)();
      return pTVar9;
    }
  }
  iVar14 = ((iVar12 * iVar3 + iVar10) * iVar2 + iVar14) * 3;
  if ((-1 < iVar14) && (iVar14 + 3 <= iVar13)) {
    pFVar11 = pFVar11 + (longlong)iVar14 * 2;
  }
  uVar1 = *(ulonglong *)pFVar11;
  auVar5._8_4_ = 0;
  auVar5._0_8_ = uVar1;
  auVar5._12_2_ = (short)(uVar1 >> 0x30);
  auVar6._8_2_ = (short)(uVar1 >> 0x20);
  auVar6._0_8_ = uVar1;
  auVar6._10_4_ = auVar5._10_4_;
  auVar7._6_8_ = 0;
  auVar7._0_6_ = auVar6._8_6_;
  uVar18 = ___xmm_00007fff00007fff00007fff00007fff & (ushort)uVar1;
  uVar17 = (uint)CONCAT82(SUB148(auVar7 << 0x40,6),(short)(uVar1 >> 0x10));
  uVar19 = _UNK_1506895a4 & uVar17;
  uVar21 = _UNK_1506895a8 & auVar6._8_4_;
  uVar15 = -(uint)(_UNK_150689584 < (int)uVar19) & _UNK_1506896e4;
  uVar16 = -(uint)(_UNK_150689588 < (int)uVar21) & _UNK_1506896e8;
  uVar23 = -(uint)(_UNK_150689594 < (int)uVar19) & _UNK_1506895b4;
  uVar24 = -(uint)(_UNK_150689598 < (int)uVar21) & _UNK_1506895b8;
  fVar20 = (float)(uVar19 << 0xd) * _UNK_1506896d4;
  fVar22 = (float)(uVar21 << 0xd) * _UNK_1506896d8;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(float)(-(uint)(___xmm_00007c0000007c0000007c0000007c00 < (int)uVar18) &
                       ___xmm_00400000004000000040000000400000 |
                       -(uint)(___xmm_00007bff00007bff00007bff00007bff < (int)uVar18) &
                       __xmm_7f8000007f8000007f8000007f800000 | (uVar18 ^ (ushort)uVar1) << 0x10 |
                      (uint)((float)(uVar18 << 0xd) * ___xmm_77800000778000007780000077800000));
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)(float)(uVar23 | uVar15 | (uVar19 ^ uVar17) << 0x10 | (uint)fVar20);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)(float)(uVar24 | uVar16 | (uVar21 ^ auVar6._8_4_) << 0x10 | (uint)fVar22);
  return __return_storage_ptr__;
}

// Serialize @ 14897d3a0

void __thiscall UVectorFieldStatic::Serialize(UVectorFieldStatic *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  if ((*(longlong *)&param_1->field_0x68 != 0) &&
     (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) {
    FBulkData::SetBulkDataFlags((FBulkData *)&this->SourceData,0x48);
  }
  FBulkData::Serialize((FBulkData *)&this->SourceData,param_1,(UObject *)this,false,1,None);
  return;
}

// UpdateCPUData @ 148988b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UVectorFieldStatic::UpdateCPUData(UVectorFieldStatic *this,bool param_1)

{
  int *piVar1;
  ushort *puVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  void *local_res8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_c8;
  
  uVar7 = 0;
  if (this->bAllowCPUAccess == false) {
    piVar1 = &(this->CPUData).ArrayMax;
    (this->CPUData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CPUData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    local_res8 = (void *)0x0;
    FBulkData::GetCopy((FBulkData *)&this->SourceData,&local_res8,param_1);
    if (local_res8 == (void *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3757121744251388263>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                         ,0x167,"Ptr");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (1 < (byte)LogVectorField._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVectorField);
      }
    }
    else {
      lVar5 = FBulkData::GetBulkDataSize((FBulkData *)&this->SourceData);
      if (lVar5 == (longlong)(this->SizeY * this->SizeZ * this->SizeX) * 8) {
        if (param_1) {
          FBulkData::IsBulkDataLoaded((FBulkData *)&this->SourceData);
        }
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        iVar6 = this->SizeX * this->SizeZ * this->SizeY;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        local_c8._padding_ = 0;
        FArchiveState::FArchiveState((FArchiveState *)&local_c8);
        local_c8._padding_ = 0;
        local_c8._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_c8.ArchiveName.ComparisonIndex.Value = 0;
        local_c8.ArchiveName.Number = 0;
        local_c8.Bytes = &this->CPUData;
        FArchiveState::SetIsSaving((FArchiveState *)&local_c8,true);
        (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
        local_c8._padding_ = (longlong)&___7FMemoryWriter__6B_;
        uVar8 = iVar6 * 6 + 2;
        if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
        }
        (this->CPUData).ArrayNum = 0;
        if ((this->CPUData).ArrayMax < (int)uVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar8,&(this->CPUData).AllocatorInstance,0,&(this->CPUData).ArrayMax);
        }
        if (iVar6 != 0) {
          do {
            puVar2 = (ushort *)((longlong)local_res8 + uVar7 * 8);
            if (*(ushort **)(local_c8._padding_ + 8) < *(ushort **)local_c8._padding_ + 1) {
              if ((local_c8._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_c8._padding_ + 0x188) ==
                    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
                  TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,puVar2,2);
                }
                else {
                  (**(code **)(local_c8._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,puVar2);
              }
            }
            else {
              *puVar2 = **(ushort **)local_c8._padding_;
              *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 2;
            }
            puVar2 = (ushort *)((longlong)local_res8 + uVar7 * 8 + 2);
            if (*(ushort **)(local_c8._padding_ + 8) < *(ushort **)local_c8._padding_ + 1) {
              if ((local_c8._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_c8._padding_ + 0x188) ==
                    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
                  TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,puVar2,2);
                }
                else {
                  (**(code **)(local_c8._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,puVar2);
              }
            }
            else {
              *puVar2 = **(ushort **)local_c8._padding_;
              *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 2;
            }
            puVar2 = (ushort *)((longlong)local_res8 + uVar7 * 8 + 4);
            if (*(ushort **)(local_c8._padding_ + 8) < *(ushort **)local_c8._padding_ + 1) {
              if ((local_c8._padding_ & 0x10000U) == 0) {
                if (*(code **)(local_c8._padding_ + 0x188) ==
                    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
                  TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_c8,puVar2,2);
                }
                else {
                  (**(code **)(local_c8._padding_ + 0x188))();
                }
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)&local_c8,puVar2);
              }
            }
            else {
              *puVar2 = **(ushort **)local_c8._padding_;
              *(longlong *)local_c8._padding_ = *(longlong *)local_c8._padding_ + 2;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ulonglong)(longlong)iVar6);
        }
        FMemory::Free(local_res8);
        FArchive::~FArchive((FArchive *)&local_c8);
      }
      else {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3757121744251388270>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                           ,0x16e,
                           "SourceData.GetBulkDataSize() == (SizeX*SizeY*SizeZ) * sizeof(FFloat16Color)"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (1 < (byte)LogVectorField._0_1_) {
          FBulkData::GetBulkDataSize((FBulkData *)&this->SourceData);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVectorField);
        }
        FMemory::Free(local_res8);
      }
    }
  }
  return;
}

// UpdateResource @ 1489899e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UVectorFieldStatic::UpdateResource(UVectorFieldStatic *this)

{
  FVectorFieldResource *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  code **ppcVar5;
  ulonglong uVar6;
  undefined1 auStack_168 [32];
  FVectorFieldResource *local_148;
  code *pcStack_140;
  code *pcStack_138;
  code *pcStack_130;
  code *pcStack_128;
  code *local_120;
  code *pcStack_118;
  code *local_110;
  code *pcStack_108;
  code *local_100;
  code *pcStack_f8;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  code *local_d8;
  code *pcStack_d0;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (this->Resource == (FVectorFieldResource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                       ,0x118,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UpdateCPUData(this,false);
  uStack_dc = (undefined4)this->_padding_;
  local_d8 = (code *)this->_padding_;
  pcStack_d0 = (code *)this->_padding_;
  local_e8 = this->SizeX;
  pFVar1 = this->Resource;
  local_c8 = (code *)this->_padding_;
  pcStack_c0 = (code *)this->_padding_;
  iStack_e4 = this->SizeY;
  local_b8 = (code *)this->_padding_;
  pcStack_b0 = (code *)this->_padding_;
  iStack_e0 = this->SizeZ;
  local_a8 = (code *)this->_padding_;
  pcStack_a0 = (code *)0x0;
  FBulkData::GetCopy((FBulkData *)&this->SourceData,&pcStack_a0,true);
  pcVar2 = pcStack_a0;
  pcStack_140 = (code *)CONCAT44(iStack_e4,local_e8);
  pcStack_138 = (code *)CONCAT44(uStack_dc,iStack_e0);
  pcStack_130 = local_d8;
  pcStack_128 = pcStack_d0;
  local_98[0] = (code *)0x0;
  local_120 = local_c8;
  pcStack_118 = pcStack_c0;
  local_110 = local_b8;
  pcStack_108 = pcStack_b0;
  local_100 = local_a8;
  pcStack_f8 = pcStack_a0;
  local_148 = pFVar1;
  local_70 = FMemory::Malloc(0x60,8);
  local_70[1] = (code *)local_148;
  local_70[2] = pcStack_140;
  *local_70 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__UpdateResource_FVectorFieldStaticResource__QEAAXPEAVUVectorFieldStatic___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_70[3] = pcStack_138;
  local_70[4] = pcStack_130;
  local_70[5] = pcStack_128;
  local_70[6] = local_120;
  local_70[7] = pcStack_118;
  local_70[8] = local_110;
  local_70[9] = pcStack_108;
  local_70[10] = local_100;
  local_70[0xb] = pcVar2;
  if (local_70 != (code **)&DAT_fffffffffffffff8) {
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FVectorFieldStaticResource::UpdateResource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FVectorFieldStaticResource::UpdateResource_::__l2::TSTR_FUpdateStaticVectorFieldCommand211>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68[0] = local_98[0];
    local_40 = local_70;
    local_70 = (code **)0x0;
    local_58[0] = local_88[0];
    local_58[1] = local_88[1];
    local_58[2] = local_88[2];
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FVectorFieldStaticResource::UpdateResource'::__l2::TSTR_FUpdateStaticVectorFieldCommand211>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_68[0] != (code *)0x0) {
        ppcVar5 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar5 = local_40;
        }
        (**(code **)(*ppcVar5 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])
                ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    ppcVar5 = local_98 + 2;
    if (local_70 != (code **)0x0) {
      ppcVar5 = local_70;
    }
    (**(code **)(*ppcVar5 + 0x10))();
  }
  return;
}

