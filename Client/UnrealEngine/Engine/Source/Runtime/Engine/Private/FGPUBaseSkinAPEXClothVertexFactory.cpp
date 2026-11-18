// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// FGPUBaseSkinAPEXClothVertexFactory @ 147cc3420

FGPUBaseSkinAPEXClothVertexFactory * __thiscall
FGPUBaseSkinAPEXClothVertexFactory::FGPUBaseSkinAPEXClothVertexFactory
          (FGPUBaseSkinAPEXClothVertexFactory *this,uint param_1)

{
  undefined8 uVar1;
  
  (this->ClothShaderData).ClothBlendWeight = 1.0;
  this->_padding_ = (longlong)&___7FGPUBaseSkinAPEXClothVertexFactory__6B_;
  *(undefined8 *)&(this->ClothShaderData).WorldScale.field0_0x0 =
       UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  (this->ClothShaderData).WorldScale.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  (this->ClothShaderData).NumInfluencesPerVertex = 1;
  (this->ClothShaderData).bEnabled = false;
  (this->ClothShaderData).ClothSimulPositionNormalBuffer[0].VertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  (this->ClothShaderData).ClothSimulPositionNormalBuffer[0].VertexBufferSRV.Reference =
       (FRHIShaderResourceView *)0x0;
  (this->ClothShaderData).ClothSimulPositionNormalBuffer[0].Size = 0;
  (this->ClothShaderData).ClothSimulPositionNormalBuffer[1].VertexBufferRHI.Reference =
       (FRHIBuffer *)0x0;
  (this->ClothShaderData).ClothSimulPositionNormalBuffer[1].VertexBufferSRV.Reference =
       (FRHIShaderResourceView *)0x0;
  (this->ClothShaderData).ClothSimulPositionNormalBuffer[1].Size = 0;
  (this->ClothShaderData).bDoubleBuffer = false;
  (this->ClothShaderData).CurrentBuffer = 0;
  (this->ClothShaderData).PreviousRevisionNumber = 0;
  (this->ClothShaderData).CurrentRevisionNumber = 0;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[0].M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[0].M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[0].M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[0].M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[0].M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[0].M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[0].M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[0].M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[1].M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[1].M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[1].M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[1].M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[1].M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[1].M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)(this->ClothShaderData).ClothToLocal[1].M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)((this->ClothShaderData).ClothToLocal[1].M[3] + 2) = uVar1;
  (this->ClothShaderData).NumInfluencesPerVertex = param_1;
  return this;
}

// ~FGPUBaseSkinAPEXClothVertexFactory @ 147cc85c0

void __thiscall
FGPUBaseSkinAPEXClothVertexFactory::~FGPUBaseSkinAPEXClothVertexFactory
          (FGPUBaseSkinAPEXClothVertexFactory *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  FVertexBufferAndSRV *pFVar1;
  longlong lVar2;
  
  lVar2 = 2;
  this->_padding_ = (longlong)&___7FGPUBaseSkinAPEXClothVertexFactory__6B_;
  pFVar1 = (FVertexBufferAndSRV *)&(this->ClothShaderData)._padding_;
  do {
    this_00 = pFVar1[-1].VertexBufferSRV.Reference;
    pFVar1 = pFVar1 + -1;
    lVar2 = lVar2 + -1;
    if (this_00 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    this_01 = (pFVar1->VertexBufferRHI).Reference;
    if (this_01 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  } while (lVar2 != 0);
  return;
}

// GetClothBuffer @ 147cfb1f0

TRefCountPtr<FRHIShaderResourceView> __thiscall
FGPUBaseSkinAPEXClothVertexFactory::GetClothBuffer(FGPUBaseSkinAPEXClothVertexFactory *this)

{
  FRHIShaderResourceView *in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetClothBuffer @ 147cfb210

TRefCountPtr<FRHIShaderResourceView> __thiscall
FGPUBaseSkinAPEXClothVertexFactory::GetClothBuffer(FGPUBaseSkinAPEXClothVertexFactory *this)

{
  FRHIShaderResourceView *in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (TRefCountPtr<FRHIShaderResourceView>)in_RDX;
}

// GetClothBufferForReading @ 147cfb230

FVertexBufferAndSRV * __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothBufferForReading
          (ClothShaderType *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVertexBufferAndSRV *pFVar4;
  
  uVar3 = GetClothBufferIndexForReading(this,param_1);
  if ((this->ClothSimulPositionNormalBuffer[uVar3].VertexBufferRHI.Reference == (FRHIBuffer *)0x0)
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClothSimulPositionNormalBuffer[Index].VertexBufferRHI.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                            ,0x4ca,L"Index: %i Buffer0: %s Buffer1: %s"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FVertexBufferAndSRV *)(*pcVar1)();
    return pFVar4;
  }
  return this->ClothSimulPositionNormalBuffer + uVar3;
}

// GetClothBufferForWriting @ 147cfb2d0

FVertexBufferAndSRV * __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothBufferForWriting(ClothShaderType *this)

{
  if (this->bDoubleBuffer != false) {
    return this->ClothSimulPositionNormalBuffer + this->CurrentBuffer;
  }
  return this->ClothSimulPositionNormalBuffer;
}

// GetClothBufferIndexForReading @ 147cfb310

uint __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothBufferIndexForReading
          (ClothShaderType *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  if (this->bDoubleBuffer != false) {
    if (this->CurrentRevisionNumber - this->PreviousRevisionNumber < 2) {
      uVar3 = (uint)param_1;
    }
    uVar3 = uVar3 ^ this->CurrentBuffer;
    if (this->ClothSimulPositionNormalBuffer[uVar3].VertexBufferRHI.Reference != (FRHIBuffer *)0x0)
    {
      return uVar3;
    }
    if (!param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bPrevious",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                         ,0x4f9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
    if (this->bDoubleBuffer != false) {
      uVar4 = this->CurrentBuffer;
    }
  }
  return uVar4;
}

// GetClothBufferIndexForWriting @ 147cfb3c0

uint __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothBufferIndexForWriting
          (ClothShaderType *this)

{
  if (this->bDoubleBuffer != false) {
    return this->CurrentBuffer;
  }
  return 0;
}

// GetClothBufferIndexInternal @ 147cfb3e0

uint __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothBufferIndexInternal
          (ClothShaderType *this,bool param_1)

{
  uint uVar1;
  
  if (this->bDoubleBuffer != false) {
    uVar1 = 0;
    if (this->CurrentRevisionNumber - this->PreviousRevisionNumber < 2) {
      uVar1 = (uint)param_1;
    }
    return uVar1 ^ this->CurrentBuffer;
  }
  return 0;
}

// GetClothIndexOffset @ 147cfb5a0

uint __thiscall
FGPUBaseSkinAPEXClothVertexFactory::GetClothIndexOffset
          (FGPUBaseSkinAPEXClothVertexFactory *this,uint param_1,uint param_2)

{
  return 0;
}

// GetClothToLocalForReading @ 147cfb5b0

TMatrix<float> * __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothToLocalForReading
          (ClothShaderType *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = GetClothBufferIndexForReading(this,param_1);
  return this->ClothToLocal + uVar1;
}

// GetClothToLocalForWriting @ 147cfb5e0

TMatrix<float> * __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::GetClothToLocalForWriting
          (ClothShaderType *this)

{
  if (this->bDoubleBuffer != false) {
    return this->ClothToLocal + this->CurrentBuffer;
  }
  return this->ClothToLocal;
}

// HasClothBufferForReading @ 147d13a20

bool __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::HasClothBufferForReading
          (ClothShaderType *this,bool param_1)

{
  uint uVar1;
  
  uVar1 = GetClothBufferIndexForReading(this,param_1);
  if ((this->bEnabled != false) &&
     (this->ClothSimulPositionNormalBuffer[uVar1].VertexBufferRHI.Reference != (FRHIBuffer *)0x0)) {
    return true;
  }
  return false;
}

// IsClothEnabled @ 147d1a1e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FGPUBaseSkinAPEXClothVertexFactory::IsClothEnabled(EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&MobileEnableClothIniValue.CVarName,L"r.Mobile.EnableCloth");
      MobileEnableClothIniValue.CVar = (IConsoleVariable *)0x0;
      atexit(`FGPUBaseSkinAPEXClothVertexFactory::IsClothEnabled'::__l2::
             _dynamic_atexit_destructor_for__MobileEnableClothIniValue__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar2 = FShaderPlatformCachedIniValue<bool>::Get(&MobileEnableClothIniValue,param_1);
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel == ES3_1) && (!bVar2)) {
    return false;
  }
  return true;
}

// ReleaseClothSimulData @ 147d20c60

void __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::ReleaseClothSimulData(ClothShaderType *this)

{
  undefined8 uVar1;
  
  if (((this->ClothSimulPositionNormalBuffer[0].VertexBufferRHI.Reference != (FRHIBuffer *)0x0) &&
      (this->ClothSimulPositionNormalBuffer[0].VertexBufferSRV.Reference !=
       (FRHIShaderResourceView *)0x0)) && (GClothBufferPool._416_4_ != -1)) {
    TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::ReleasePooledResource
              ((TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)
               &GClothBufferPool,this->ClothSimulPositionNormalBuffer);
  }
  if (((this->ClothSimulPositionNormalBuffer[1].VertexBufferRHI.Reference != (FRHIBuffer *)0x0) &&
      (this->ClothSimulPositionNormalBuffer[1].VertexBufferSRV.Reference !=
       (FRHIShaderResourceView *)0x0)) && (GClothBufferPool._416_4_ != -1)) {
    TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::ReleasePooledResource
              ((TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)
               &GClothBufferPool,this->ClothSimulPositionNormalBuffer + 1);
  }
  this->CurrentBuffer = 0;
  this->PreviousRevisionNumber = 0;
  this->CurrentRevisionNumber = 0;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->ClothToLocal[0].M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->ClothToLocal[0].M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->ClothToLocal[0].M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->ClothToLocal[0].M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->ClothToLocal[0].M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->ClothToLocal[0].M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->ClothToLocal[0].M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->ClothToLocal[0].M[3] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->ClothToLocal[1].M[0] = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->ClothToLocal[1].M[0] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->ClothToLocal[1].M[1] = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->ClothToLocal[1].M[1] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->ClothToLocal[1].M[2] = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->ClothToLocal[1].M[2] + 2) = uVar1;
  uVar1 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->ClothToLocal[1].M[3] = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->ClothToLocal[1].M[3] + 2) = uVar1;
  this->bDoubleBuffer = false;
  return;
}

// SetCurrentRevisionNumber @ 147d28d00

void __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::SetCurrentRevisionNumber
          (ClothShaderType *this,uint param_1)

{
  if ((this->bDoubleBuffer != false) && (this->CurrentRevisionNumber != param_1)) {
    this->PreviousRevisionNumber = this->CurrentRevisionNumber;
    this->CurrentBuffer = 1 - this->CurrentBuffer;
    this->CurrentRevisionNumber = param_1;
  }
  return;
}

// UpdateClothSimulationData @ 147d35c10

/* WARNING: Removing unreachable block (ram,0x000147d360e0) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData
          (ClothShaderType *this,FRHICommandList *param_1,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_2,
          TArrayView<UE::Math::TVector<float>_const_,int> *param_3,uint param_4,FName *param_5)

{
  FVertexBufferAndSRV *this_00;
  undefined8 uVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TVector<float>_u_0 *pTVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_2_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData>
  FVar13;
  undefined8 *puVar14;
  FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_23_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData>
  FVar15;
  TVector<float> *pTVar16;
  TVector<float> *pTVar17;
  ulonglong uVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  FName FVar22;
  FColor_u_0 local_res8 [2];
  FRHICommandListBase *local_res10;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_res18;
  TArrayView<UE::Math::TVector<float>_const_,int> *local_res20;
  FColor_u_0 local_c0 [2];
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_98;
  FVertexBufferAndSRV local_88;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  uVar18 = 0;
  local_res10 = (FRHICommandListBase *)param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData =
         (FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_2_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData>
          )0x0;
    pFVar12 = ::FName::FName(&local_70,
                             "STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData,*pFVar12,
               L"STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData;
  if (StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_2_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData>
       )0x0) {
    pFVar12 = ::FName::FName(&local_68,
                             "STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData");
    FVar13 = (FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_2_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData
                          ,*pFVar12,
                          L"STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_147d35e20:
    bVar6 = false;
    FVar22 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_b8.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                   ,0x47f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147d35e20;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar6 = true;
  }
  bVar9 = SupportsNoOverwriteBuffers();
  uVar20 = param_2->ArrayNum;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                          ,0x485,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (this->bDoubleBuffer != false) {
    if (this->CurrentRevisionNumber != param_4) {
      this->PreviousRevisionNumber = this->CurrentRevisionNumber;
      this->CurrentBuffer = 1 - this->CurrentBuffer;
      this->CurrentRevisionNumber = param_4;
    }
    uVar18 = (ulonglong)this->CurrentBuffer;
  }
  this_00 = this->ClothSimulPositionNormalBuffer + uVar18;
  uVar21 = 0x10000;
  if (uVar20 < 0x10000) {
    uVar21 = uVar20;
  }
  uVar20 = uVar21 * 0x18;
  if (bVar9) {
LAB_147d35f1a:
    if ((GClothBufferPool._416_4_ == -1) ||
       (TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::
        ReleasePooledResource
                  ((TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)
                   &GClothBufferPool,this_00), GClothBufferPool._416_4_ == -1)) {
      local_88.Size = 0;
      local_88._20_4_ = 0;
      local_88.VertexBufferRHI.Reference = (FRHIBuffer *)0x0;
      local_88.VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
    }
    else {
      TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::CreatePooledResource
                ((TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)
                 &GClothBufferPool,&local_88,(FRHICommandListBase *)param_1,uVar20);
    }
    FVertexBufferAndSRV::operator=(this_00,&local_88);
    if (local_88.VertexBufferSRV.Reference != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88.VertexBufferSRV.Reference);
    }
    if (local_88.VertexBufferRHI.Reference != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_88.VertexBufferRHI.Reference);
    }
  }
  else {
    uVar11 = FSharedPoolPolicyData::GetPoolBucketIndex
                       ((FSharedPoolPolicyData *)&GClothBufferPool.field_0x8,uVar20);
    if ((0x11 < uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bucket < NumPoolBucketSizes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                            ,0xb1,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (this_00->Size != FSharedPoolPolicyData::BucketSizes[uVar11]) goto LAB_147d35f1a;
  }
  if ((((this_00->VertexBufferRHI).Reference == (FRHIBuffer *)0x0) ||
      ((this_00->VertexBufferSRV).Reference == (FRHIShaderResourceView *)0x0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidRef(*CurrentClothBuffer)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                          ,0x492,L""), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ((this_00->VertexBufferRHI).Reference)->_padding_ = (longlong)*param_5;
  if (uVar21 == 0) goto LAB_147d362e9;
  puVar14 = FRHICommandListBase::LockBuffer
                      ((FRHICommandListBase *)param_1,(this_00->VertexBufferRHI).Reference,0,uVar20,
                       bVar9 + RLM_WriteOnly);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData =
         (FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_23_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData>
          )0x0;
    pFVar12 = ::FName::FName(&local_60,
                             "STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData"
                            );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData,
               *pFVar12,
               L"STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar15 = StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData;
  if (StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_23_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData>
       )0x0) {
    pFVar12 = ::FName::FName(local_58,
                             "STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData"
                            );
    FVar15 = (FThreadSafeStaticStat<_public:_void___cdecl_FGPUBaseSkinAPEXClothVertexFactory::ClothShaderType::UpdateClothSimulationData(FRHICommandList_&,TArrayView<UE::Math::TVector<float>_const_,int>,TArrayView<UE::Math::TVector<float>_const_,int>,unsigned_int,FName_const_&)_::_23_::FStat_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &
                          StatPtr_STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData
                          ,*pFVar12,
                          L"STAT_FGPUBaseSkinAPEXClothVertexFactory_UpdateClothSimulationData_CopyData"
                          ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar15;
  bVar9 = false;
  bVar10 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  if (FVar19 == (FName)0x0) {
LAB_147d3622d:
    bVar4 = false;
    FVar19 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c0[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0 = FVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GPUSkinVertexFactory.cpp"
                   ,0x49a);
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147d3622d;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar4 = true;
  }
  pTVar16 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](local_res18,0);
  pTVar17 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](local_res20,0);
  if (uVar21 != 0) {
    uVar18 = (ulonglong)uVar21;
    do {
      pTVar8 = &pTVar16->field0_0x0;
      fVar2 = (pTVar16->field0_0x0)._s_0.Z;
      pTVar16 = pTVar16 + 1;
      *puVar14 = *(undefined8 *)pTVar8;
      uVar1 = *(undefined8 *)&pTVar17->field0_0x0;
      *(float *)(puVar14 + 1) = fVar2;
      fVar2 = (pTVar17->field0_0x0)._s_0.Z;
      *(undefined8 *)((longlong)puVar14 + 0xc) = uVar1;
      *(float *)((longlong)puVar14 + 0x14) = fVar2;
      puVar14 = puVar14 + 3;
      uVar18 = uVar18 - 1;
      pTVar17 = pTVar17 + 1;
    } while (uVar18 != 0);
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  FRHICommandListBase::UnlockBuffer(local_res10,(this_00->VertexBufferRHI).Reference);
LAB_147d362e9:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

