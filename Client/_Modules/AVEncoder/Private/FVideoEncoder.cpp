// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AVEncoder
// Functions: 10

// ~FVideoEncoder @ 148d01860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall AVEncoder::FVideoEncoder::~FVideoEncoder(FVideoEncoder *this)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FVideoEncoder_AVEncoder__6B_;
  pFVar5 = (this->Layers).AllocatorInstance.Data;
  iVar1 = (this->Layers).ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Layers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<AVEncoder::FVideoEncoder::FLayer_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar3) goto LAB_148d018cc;
    if (*(longlong *)pFVar5 != 0) break;
    pFVar5 = pFVar5 + 8;
  }
  if (2 < (byte)LogVideoEncoder._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
  }
LAB_148d018cc:
  if (*(longlong *)&this->OnEncodedPacket != 0) {
    plVar2 = *(longlong **)&(this->OnEncodedPacket).field_0x28;
    plVar4 = (longlong *)&(this->OnEncodedPacket).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar3 = (this->Layers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddLayer @ 148d03290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall AVEncoder::FVideoEncoder::AddLayer(FVideoEncoder *this,FLayerConfig *param_1)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong local_18 [2];
  
  uVar2 = (this->Layers).ArrayNum;
  uVar7 = (**(code **)(this->_padding_ + 0x20))();
  if (uVar2 < uVar7) {
    local_18[0] = (**(code **)(this->_padding_ + 0x30))(this,(this->Layers).ArrayNum,param_1);
    if (local_18[0] != 0) {
      pFVar3 = (this->Layers).AllocatorInstance.Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Layers).ArrayMax * 8)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      iVar8 = (this->Layers).ArrayNum;
      piVar1 = &(this->Layers).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Layers).AllocatorInstance,piVar1);
      }
      (this->Layers).ArrayNum = iVar8 + 1;
      *(longlong *)((this->Layers).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_18[0];
      return true;
    }
  }
  else if (1 < (byte)LogVideoEncoder._0_1_) {
    (**(code **)(this->_padding_ + 0x20))(this);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
  }
  return false;
}

// CreateLayer @ 148d07e90

FLayer * __thiscall
AVEncoder::FVideoEncoder::CreateLayer(FVideoEncoder *this,uint param_1,FLayerConfig *param_2)

{
  return (FLayer *)0x0;
}

// DestroyLayer @ 148d09810

void __thiscall AVEncoder::FVideoEncoder::DestroyLayer(FVideoEncoder *this,FLayer *param_1)

{
  return;
}

// Encode @ 148d09ac0

void __thiscall
AVEncoder::FVideoEncoder::Encode
          (FVideoEncoder *this,TSharedPtr<AVEncoder::FVideoEncoderInputFrame,1> *param_1,
          FEncodeOptions *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetLayerConfig @ 148d0b710

/* WARNING: Enum "Type": Some values do not have unique names */

FLayerConfig * __thiscall
AVEncoder::FVideoEncoder::GetLayerConfig
          (FVideoEncoder *this,FLayerConfig *__return_storage_ptr__,uint param_1)

{
  undefined8 uVar1;
  uint uVar2;
  H264Profile HVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FLayerConfig *pFVar10;
  uint uVar11;
  
  uVar2 = (this->Layers).ArrayNum;
  if (uVar2 <= param_1) {
    if (1 < (byte)LogVideoEncoder._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    }
    __return_storage_ptr__->QPMax = -1;
    __return_storage_ptr__->QPMin = -1;
    __return_storage_ptr__->Width = 0;
    __return_storage_ptr__->Height = 0;
    __return_storage_ptr__->MaxFramerate = 0;
    __return_storage_ptr__->MaxBitrate = 0;
    __return_storage_ptr__->TargetBitrate = 0;
    __return_storage_ptr__->FillData = false;
    __return_storage_ptr__->RateControlMode = CBR;
    __return_storage_ptr__->MultipassMode = FULL;
    __return_storage_ptr__->H264Profile = BASELINE;
    return __return_storage_ptr__;
  }
  uVar11 = 0;
  if ((int)param_1 < (int)uVar2) {
    uVar11 = ~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FLayerConfig *)(*pcVar5)();
      return pFVar10;
    }
  }
  lVar4 = *(longlong *)((this->Layers).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x30);
  uVar6 = *(undefined8 *)(lVar4 + 0x38);
  uVar7 = *(undefined8 *)(lVar4 + 0x40);
  uVar8 = *(undefined8 *)(lVar4 + 0x48);
  __return_storage_ptr__->Width = (int)uVar1;
  __return_storage_ptr__->Height = (int)((ulonglong)uVar1 >> 0x20);
  __return_storage_ptr__->MaxFramerate = (int)uVar6;
  __return_storage_ptr__->MaxBitrate = (int)((ulonglong)uVar6 >> 0x20);
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  HVar3 = *(H264Profile *)(lVar4 + 0x58);
  __return_storage_ptr__->TargetBitrate = (int)uVar7;
  __return_storage_ptr__->QPMax = (int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->QPMin = (int)uVar8;
  __return_storage_ptr__->RateControlMode = (int)((ulonglong)uVar8 >> 0x20);
  __return_storage_ptr__->MultipassMode = (int)uVar1;
  __return_storage_ptr__->FillData = (bool)(char)((ulonglong)uVar1 >> 0x20);
  *(int3 *)&__return_storage_ptr__->field_0x25 = (int3)((ulonglong)uVar1 >> 0x28);
  __return_storage_ptr__->H264Profile = HVar3;
  return __return_storage_ptr__;
}

// GetMaxLayers @ 148d0b880

uint __thiscall AVEncoder::FVideoEncoder::GetMaxLayers(FVideoEncoder *this)

{
  return 1;
}

// Setup @ 148d13800

bool __thiscall
AVEncoder::FVideoEncoder::Setup
          (FVideoEncoder *this,TSharedRef<AVEncoder::FVideoEncoderInput,1> *param_1,
          FLayerConfig *param_2)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return false;
}

// Shutdown @ 148d14a00

void __thiscall AVEncoder::FVideoEncoder::Shutdown(FVideoEncoder *this)

{
  return;
}

// UpdateLayerConfig @ 148d15720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
AVEncoder::FVideoEncoder::UpdateLayerConfig(FVideoEncoder *this,uint param_1,FLayerConfig *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  RateControlMode RVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  
  uVar1 = (this->Layers).ArrayNum;
  if (param_1 < uVar1) {
    uVar9 = 0;
    if ((int)param_1 < (int)uVar1) {
      uVar9 = ~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar2 = *(longlong *)((this->Layers).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 8);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    uVar7 = *(undefined8 *)&param_2->MaxFramerate;
    *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)param_2;
    *(undefined8 *)(lVar2 + 0x38) = uVar7;
    iVar4 = param_2->QPMax;
    iVar5 = param_2->QPMin;
    RVar6 = param_2->RateControlMode;
    *(int *)(lVar2 + 0x40) = param_2->TargetBitrate;
    *(int *)(lVar2 + 0x44) = iVar4;
    *(int *)(lVar2 + 0x48) = iVar5;
    *(RateControlMode *)(lVar2 + 0x4c) = RVar6;
    *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)&param_2->MultipassMode;
    *(H264Profile *)(lVar2 + 0x58) = param_2->H264Profile;
    *(undefined1 *)(lVar2 + 0x5c) = 1;
    LeaveCriticalSection(lpCriticalSection);
  }
  else if (1 < (byte)LogVideoEncoder._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVideoEncoder);
    return;
  }
  return;
}

