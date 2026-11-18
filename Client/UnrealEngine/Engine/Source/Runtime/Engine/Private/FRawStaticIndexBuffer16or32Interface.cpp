// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// CreateRHIIndexBufferInternal @ 1483fa1b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __cdecl
FRawStaticIndexBuffer16or32Interface::CreateRHIIndexBufferInternal
          (FRHICommandListBase *param_1,wchar_t *param_2,FName *param_3,int param_4,ulong64 param_5,
          FResourceArrayInterface *param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FRHIBuffer> TVar3;
  uint uVar4;
  int local_80;
  int iStack_7c;
  
  local_80 = (int)param_6 * (int)param_5;
  if (local_80 == 0) {
    local_80 = 0;
    iStack_7c = 0;
    uVar4 = 0x100000;
  }
  else {
    uVar4 = 0x8001;
    iStack_7c = (int)param_6;
  }
  ::FName::FName((FName *)&param_6,(wchar_t *)param_3);
  if ((uVar4 >> 0x14 != 0) && (((local_80 != 0 || (iStack_7c != 0)) || (uVar4 != 0x100000)))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Size == 0 && Stride == 0 && Usage == EBufferUsageFlags::NullResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x54f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.Reference = (FRHIBuffer *)(*pcVar1)();
      return (TRefCountPtr<FRHIBuffer>)TVar3.Reference;
    }
  }
  FRHICommandListBase::CreateBuffer((FRHICommandListBase *)param_2,(FRHIBufferCreateDesc *)param_1);
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// InitRHIForStreaming @ 14840de20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawStaticIndexBuffer16or32Interface::InitRHIForStreaming
          (FRawStaticIndexBuffer16or32Interface *this,FRHIBuffer *param_1,ulong64 param_2,
          FRHIResourceReplaceBatcher *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if ((this->_padding_ != 0) && (param_1 != (FRHIBuffer *)0x0)) {
    iVar2 = (param_3->Infos).ArrayNum;
    if (iVar2 == (param_3->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_3->Infos).AllocatorInstance,&(param_3->Infos).ArrayMax);
    }
    (param_3->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_3->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(FRHIBuffer **)(pFVar1 + 8) = param_1;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// IsSRVCreatedByDefault @ 14840f910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRawStaticIndexBuffer16or32Interface::IsSRVCreatedByDefault
          (FRawStaticIndexBuffer16or32Interface *this,bool param_1)

{
  bool bVar1;
  
  bVar1 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform);
  return bVar1 || param_1;
}

// IsSRVNeeded @ 14840f940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRawStaticIndexBuffer16or32Interface::IsSRVNeeded
          (FRawStaticIndexBuffer16or32Interface *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)GMaxRHIShaderPlatform;
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bContainsValidPlatformInfo == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2ce,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar4].bSupportsManualVertexFetch == 0) &&
     (bVar2 = IsGPUSkinPassThroughSupported(GMaxRHIShaderPlatform), !bVar2)) {
    return param_1;
  }
  return true;
}

// IsShaderResource @ 14840fa30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRawStaticIndexBuffer16or32Interface::IsShaderResource
          (FRawStaticIndexBuffer16or32Interface *this,bool param_1)

{
  EShaderPlatform EVar1;
  bool bVar2;
  
  EVar1 = GMaxRHIShaderPlatform;
  bVar2 = AreBufferSRVsAlwaysCreatedByDefault(GMaxRHIShaderPlatform);
  if ((!bVar2) && (bVar2 = IsGPUSkinPassThroughSupported(EVar1), !bVar2)) {
    return param_1;
  }
  return true;
}

// ReleaseRHIForStreaming @ 14841f5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRawStaticIndexBuffer16or32Interface::ReleaseRHIForStreaming
          (FRawStaticIndexBuffer16or32Interface *this,FRHIResourceReplaceBatcher *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if (this->_padding_ != 0) {
    iVar2 = (param_1->Infos).ArrayNum;
    if (iVar2 == (param_1->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_1->Infos).AllocatorInstance,&(param_1->Infos).ArrayMax);
    }
    (param_1->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_1->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(longlong *)(pFVar1 + 8) = 0;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

