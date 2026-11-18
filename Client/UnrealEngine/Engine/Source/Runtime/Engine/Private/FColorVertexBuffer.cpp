// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// FColorVertexBuffer @ 1483e1040

FColorVertexBuffer * __thiscall
FColorVertexBuffer::FColorVertexBuffer(FColorVertexBuffer *this,FColorVertexBuffer *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  FColorVertexBuffer *pFVar7;
  FColorVertexData *pFVar8;
  undefined4 *puVar9;
  uchar *puVar10;
  FColorVertexData *pFVar11;
  ulonglong uVar12;
  
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  pFVar11 = (FColorVertexData *)0x0;
  this->_padding_ = (longlong)&___7FColorVertexBuffer__6B_;
  this->VertexData = (FColorVertexData *)0x0;
  (this->ColorComponentsSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->Data = (uchar *)0x0;
  this->Stride = 0;
  this->NumVertices = 0;
  this->NeedsCPUAccess = true;
  if (param_1->VertexData != (FColorVertexData *)0x0) {
    uVar4 = (**(code **)(*(longlong *)param_1->VertexData + 0x28))();
    uVar12 = (ulonglong)uVar4;
    puVar6 = (undefined4 *)(**(code **)(*(longlong *)param_1->VertexData + 0x30))();
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                           ,0x164,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FColorVertexBuffer *)(*pcVar2)();
      return pFVar7;
    }
    pFVar8 = this->VertexData;
    this->NumVertices = uVar4;
    this->NeedsCPUAccess = true;
    if (pFVar8 != (FColorVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
      this->VertexData = (FColorVertexData *)0x0;
    }
    pFVar8 = ::operator_new(0x28);
    if (pFVar8 != (FColorVertexData *)0x0) {
      *(undefined8 *)&pFVar8->field_0x10 = 0;
      *(undefined8 *)&pFVar8->field_0x18 = 0;
      *(undefined ***)&pFVar8->field_0x8 = &___7__TResourceArray_UFColor___0A___6B_;
      *(undefined ***)pFVar8 = &___7FColorVertexData__6B_;
      pFVar8->field_0x20 = 1;
      pFVar11 = pFVar8;
    }
    this->VertexData = pFVar11;
    uVar5 = (**(code **)(*(longlong *)pFVar11 + 0x20))();
    this->Stride = uVar5;
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,uVar4,0);
    puVar9 = (undefined4 *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    if (uVar4 != 0) {
      do {
        uVar1 = *puVar6;
        puVar6 = puVar6 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    puVar10 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    this->Data = puVar10;
  }
  return this;
}

// FColorVertexBuffer @ 1483e1190

FColorVertexBuffer * __thiscall FColorVertexBuffer::FColorVertexBuffer(FColorVertexBuffer *this)

{
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this);
  this->NeedsCPUAccess = true;
  this->_padding_ = (longlong)&___7FColorVertexBuffer__6B_;
  this->VertexData = (FColorVertexData *)0x0;
  (this->ColorComponentsSRV).Reference = (FRHIShaderResourceView *)0x0;
  this->Data = (uchar *)0x0;
  this->Stride = 0;
  this->NumVertices = 0;
  return this;
}

// ~FColorVertexBuffer @ 1483e88d0

void __thiscall FColorVertexBuffer::~FColorVertexBuffer(FColorVertexBuffer *this)

{
  FColorVertexData *pFVar1;
  FRHIShaderResourceView *this_00;
  
  this->_padding_ = (longlong)&___7FColorVertexBuffer__6B_;
  pFVar1 = this->VertexData;
  if (pFVar1 != (FColorVertexData *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    this->VertexData = (FColorVertexData *)0x0;
  }
  this_00 = (this->ColorComponentsSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// operator= @ 1483e9280

void __thiscall FColorVertexBuffer::operator=(FColorVertexBuffer *this,FColorVertexBuffer *param_1)

{
  FColorVertexData *pFVar1;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FColorVertexData *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  this->VertexData = (FColorVertexData *)0x0;
  return;
}

// AllocateData @ 1483ef930

void __thiscall FColorVertexBuffer::AllocateData(FColorVertexBuffer *this,bool param_1)

{
  uint uVar1;
  FColorVertexData *pFVar2;
  FColorVertexData *pFVar3;
  
  pFVar3 = (FColorVertexData *)0x0;
  pFVar2 = this->VertexData;
  if (pFVar2 != (FColorVertexData *)0x0) {
    (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    this->VertexData = (FColorVertexData *)0x0;
  }
  pFVar2 = ::operator_new(0x28);
  if (pFVar2 != (FColorVertexData *)0x0) {
    *(undefined8 *)&pFVar2->field_0x10 = 0;
    *(undefined8 *)&pFVar2->field_0x18 = 0;
    *(undefined ***)&pFVar2->field_0x8 = &___7__TResourceArray_UFColor___0A___6B_;
    *(undefined ***)pFVar2 = &___7FColorVertexData__6B_;
    pFVar2->field_0x20 = param_1;
    pFVar3 = pFVar2;
  }
  this->VertexData = pFVar3;
  uVar1 = (**(code **)(*(longlong *)pFVar3 + 0x20))();
  this->Stride = uVar1;
  return;
}

// AppendVertices @ 1483efa00

bool __thiscall
FColorVertexBuffer::AppendVertices
          (FColorVertexBuffer *this,FStaticMeshBuildVertex *param_1,uint param_2)

{
  FColorVertexData **ppFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uchar *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res18 [2];
  uint *local_18;
  FColorVertexBuffer *local_10;
  
  local_res18[0] = param_2;
  if (0x7ffffffe < (ulonglong)param_2 + (ulonglong)this->NumVertices) {
    local_18 = local_res18;
    local_10 = this;
    bVar5 = `FColorVertexBuffer::AppendVertices'::__l3::<lambda_1>::operator()(&local_18);
    if (!bVar5) {
      return false;
    }
  }
  ppFVar1 = &this->VertexData;
  if (this->VertexData == (FColorVertexData *)0x0) {
    if (local_res18[0] == 0) {
      return true;
    }
    if ((this->NumVertices != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumVertices == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                           ,0x90,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    AllocateData(this,this->NeedsCPUAccess);
  }
  if (local_res18[0] != 0) {
    if ((*ppFVar1 == (FColorVertexData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertexData != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                           ,0x9a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if ((param_1 == (FStaticMeshBuildVertex *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Vertices != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                           ,0x9b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar3 = this->NumVertices;
    uVar9 = local_res18[0] + uVar3;
    this->NumVertices = uVar9;
    (**(code **)(*(longlong *)*ppFVar1 + 8))(*ppFVar1,uVar9,0);
    if (this->NumVertices != 0) {
      puVar7 = (uchar *)(**(code **)(*(longlong *)*ppFVar1 + 0x30))();
      uVar9 = 0;
      this->Data = puVar7;
      if (local_res18[0] != 0) {
        do {
          iVar2 = uVar9 + uVar3;
          uVar8 = (ulonglong)uVar9;
          uVar9 = uVar9 + 1;
          *(FColor_u_0 *)(this->Data + iVar2 * this->Stride) = param_1[uVar8].Color.field0_0x0;
        } while (uVar9 < local_res18[0]);
      }
    }
  }
  return true;
}

// BindColorVertexBuffer @ 1483f0050

void __thiscall
FColorVertexBuffer::BindColorVertexBuffer
          (FColorVertexBuffer *this,FVertexFactory *param_1,FStaticMeshDataType *param_2)

{
  code *pcVar1;
  bool bVar2;
  TGlobalResource<FNullColorVertexBuffer,0> *pTVar3;
  uint uVar4;
  
  if (this->NumVertices == 0) {
    pTVar3 = &GNullColorVertexBuffer;
    param_2->ColorComponentsSRV = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
    param_2->ColorIndexMask = 0;
    uVar4 = 0;
  }
  else {
    param_2->ColorComponentsSRV = (this->ColorComponentsSRV).Reference;
    param_2->ColorIndexMask = 0xffffffff;
    uVar4 = this->Stride;
    pTVar3 = (TGlobalResource<FNullColorVertexBuffer,0> *)this;
    if ((0xff < uVar4) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InStride <= 0xFF",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\VertexStreamComponent.h"
                           ,0x39,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (param_2->ColorComponent).VertexBuffer = (FVertexBuffer *)pTVar3;
  (param_2->ColorComponent).StreamOffset = 0;
  (param_2->ColorComponent).Offset = '\0';
  (param_2->ColorComponent).Stride = (uchar)uVar4;
  (param_2->ColorComponent).Type.Value = '\b';
  (param_2->ColorComponent).VertexStreamUsage = ManualFetch;
  return;
}

// BindDefaultColorVertexBuffer @ 1483f0150

void __cdecl
FColorVertexBuffer::BindDefaultColorVertexBuffer
          (FVertexFactory *param_1,FStaticMeshDataType *param_2,NullBindStride param_3)

{
  uchar uVar1;
  EVertexStreamUsage EVar2;
  
  param_2->ColorComponentsSRV = (FRHIShaderResourceView *)GNullColorVertexBuffer._40_8_;
  param_2->ColorIndexMask = 0;
  (param_2->ColorComponent).VertexBuffer = (FVertexBuffer *)&GNullColorVertexBuffer;
  (param_2->ColorComponent).StreamOffset = 0;
  (param_2->ColorComponent).Offset = '\0';
  uVar1 = '\0';
  if (param_3 == FColorSizeForComponentOverride) {
    uVar1 = '\x04';
  }
  (param_2->ColorComponent).Stride = uVar1;
  EVar2 = ManualFetch|Overridden;
  if (param_3 != FColorSizeForComponentOverride) {
    EVar2 = ManualFetch;
  }
  (param_2->ColorComponent).Type.Value = '\b';
  (param_2->ColorComponent).VertexStreamUsage = EVar2;
  return;
}

// CleanUp @ 1483f4400

void __thiscall FColorVertexBuffer::CleanUp(FColorVertexBuffer *this)

{
  FColorVertexData *pFVar1;
  
  pFVar1 = this->VertexData;
  if (pFVar1 != (FColorVertexData *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    this->VertexData = (FColorVertexData *)0x0;
  }
  return;
}

// ClearMetaData @ 1483f4940

void __thiscall FColorVertexBuffer::ClearMetaData(FColorVertexBuffer *this)

{
  this->Stride = 0;
  this->NumVertices = 0;
  return;
}

// CreateRHIBuffer @ 1483f9e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIBuffer> __thiscall
FColorVertexBuffer::CreateRHIBuffer(FColorVertexBuffer *this,FRHICommandListBase *param_1)

{
  EBufferUsageFlags EVar1;
  FRHIResource *this_00;
  FColorVertexData *pFVar2;
  bool bVar3;
  FResourceArrayInterface *pFVar4;
  TRefCountPtr<FRHIBuffer> TVar5;
  wchar_t *in_R8;
  longlong local_res8;
  FRHIResource *local_res10;
  undefined4 in_stack_ffffffffffffffd4;
  
  EVar1 = this->NumVertices;
  (param_1->MemManager).Top = (uchar *)0x0;
  if (this->VertexData == (FColorVertexData *)0x0) {
    pFVar4 = (FResourceArrayInterface *)0x0;
  }
  else {
    pFVar4 = (FResourceArrayInterface *)(**(code **)(*(longlong *)this->VertexData + 0x38))();
  }
  if (EVar1 != None) {
    local_res8 = this->_padding_;
    TVar5 = FRenderResource::CreateRHIBufferInternal
                      ((FRHICommandListBase *)&local_res10,in_R8,(FName *)L"FColorVertexBuffer",
                       (uint)&local_res8,EVar1,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffffd4,0x101),
                       SUB81(pFVar4,0));
    if (param_1 != (FRHICommandListBase *)TVar5.Reference) {
      this_00 = (FRHIResource *)(param_1->MemManager).Top;
      (param_1->MemManager).Top = (uchar *)(TVar5.Reference)->_padding_;
      (TVar5.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res10 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res10);
    }
  }
  bVar3 = FRenderResource::ShouldFreeResourceObject(this->VertexData,pFVar4);
  if (bVar3) {
    pFVar2 = this->VertexData;
    if (pFVar2 != (FColorVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
    }
    this->VertexData = (FColorVertexData *)0x0;
  }
  return (TRefCountPtr<FRHIBuffer>)(FRHIBuffer *)param_1;
}

// ExportText @ 1484012d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FColorVertexBuffer::ExportText(FColorVertexBuffer *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  int local_58;
  int local_50;
  FString local_48;
  wchar_t local_38 [12];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((this->NumVertices == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumVertices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                         ,0x105,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::PrintfImpl(&local_48,L"ColorVertexData(%i)=(");
  iVar7 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  iVar7 = (param_1->Data).ArrayNum;
  iVar3 = this->NumVertices * 9;
  iVar1 = iVar7 + -1 + iVar3;
  if (iVar7 == 0) {
    iVar1 = iVar3;
  }
  ::FString::Reserve(param_1,iVar1);
  uVar6 = 0;
  if (this->NumVertices != 0) {
    do {
      TCString<wchar_t>::SprintfImpl(local_38,L"%.8x,");
      sVar5 = wcslen(local_38);
      ::FString::AppendChars(param_1,local_38,(int)sVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < this->NumVertices);
  }
  iVar1 = (param_1->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  local_58 = iVar7 + -1;
  if (((local_58 < 0) || (iVar7 <= local_58)) &&
     (local_50 = iVar7,
     bVar4 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValidIndex(Index)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                        ,0x107,
                        L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined2 *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar7 * 2 + -2) = 0x29;
  return;
}

// GetAllocatedSize @ 1484051b0

uint __thiscall FColorVertexBuffer::GetAllocatedSize(FColorVertexBuffer *this)

{
  uint uVar1;
  
  if (this->VertexData != (FColorVertexData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484051bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->VertexData + 0x50))();
    return uVar1;
  }
  return 0;
}

// GetAllowCPUAccess @ 148405230

bool __thiscall FColorVertexBuffer::GetAllowCPUAccess(FColorVertexBuffer *this)

{
  undefined1 uVar1;
  
  if (this->VertexData != (FColorVertexData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014840523c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)this->VertexData + 0x58))();
    return (bool)uVar1;
  }
  return false;
}

// GetFriendlyName @ 148408210

FString * __thiscall
FColorVertexBuffer::GetFriendlyName(FColorVertexBuffer *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ColorOnly Mesh Vertices");
  return __return_storage_ptr__;
}

// GetVertexColors @ 14840b8d0

void __thiscall
FColorVertexBuffer::GetVertexColors
          (FColorVertexBuffer *this,TArray<FColor,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *_Src;
  uint uVar6;
  
  if (this->VertexData != (FColorVertexData *)0x0) {
    uVar2 = this->NumVertices;
    if (uVar2 != 0) {
      iVar5 = param_1->ArrayNum;
      piVar1 = &param_1->ArrayNum;
      if (iVar5 < (int)uVar2) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar2 - iVar5,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      }
      else {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
        }
        if ((int)uVar2 < iVar5) {
          uVar6 = iVar5 - uVar2;
          if (((int)(uVar6 | uVar2) < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar6 != 0) {
            _Dst = (param_1->AllocatorInstance).Data + (longlong)(int)uVar2 * 4;
            iVar5 = (*piVar1 - uVar2) - uVar6;
            if (iVar5 != 0) {
              memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar5 << 2);
            }
            *piVar1 = *piVar1 - uVar6;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
          }
        }
      }
      iVar5 = (**(code **)(*(longlong *)this->VertexData + 0x20))();
      uVar2 = this->NumVertices;
      _Src = (void *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
      memcpy((param_1->AllocatorInstance).Data,_Src,(ulonglong)(iVar5 * uVar2));
    }
  }
  return;
}

// ImportText @ 14840bf90

void __thiscall FColorVertexBuffer::ImportText(FColorVertexBuffer *this,wchar_t *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t wVar4;
  char *pcVar5;
  uchar *puVar6;
  char cVar7;
  wchar_t *pwVar8;
  uint uVar9;
  uint local_res8 [2];
  
  if ((param_1 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceText",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                         ,0x121,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->VertexData != (FColorVertexData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VertexData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                         ,0x122,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FParse::Value(param_1,L"ColorVertexData(",local_res8);
  if (bVar3) {
    wVar4 = *param_1;
    while ((wVar4 != L'\0' && (wVar4 != L')'))) {
      pwVar8 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar4 = *pwVar8;
    }
    wVar4 = *param_1;
    while ((wVar4 != L'\0' && (wVar4 != L'('))) {
      pwVar8 = param_1 + 1;
      param_1 = param_1 + 1;
      wVar4 = *pwVar8;
    }
    if ((*param_1 != L'(') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("*SourceText == L\'(\'",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                           ,0x132,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pwVar8 = param_1 + 1;
    this->NumVertices = local_res8[0];
    AllocateData(this,this->NeedsCPUAccess);
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
    pcVar5 = (char *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    uVar9 = 0;
    if (this->NumVertices != 0) {
      do {
        wVar4 = pwVar8[6];
        if (9 < (ushort)(wVar4 + L'￐')) {
          if ((ushort)(wVar4 + L'ﾟ') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 + 0xa9);
          }
          else if ((ushort)(wVar4 + L'﾿') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 - 0x37);
          }
          else {
            wVar4 = L'\0';
          }
        }
        wVar1 = pwVar8[7];
        cVar7 = (char)wVar1;
        if ((ushort)(wVar1 + L'￐') < 10) {
          cVar7 = cVar7 + -0x30;
        }
        else if ((ushort)(wVar1 + L'ﾟ') < 6) {
          cVar7 = cVar7 + -0x57;
        }
        else if ((ushort)(wVar1 + L'﾿') < 6) {
          cVar7 = cVar7 + -0x37;
        }
        else {
          cVar7 = '\0';
        }
        *pcVar5 = (char)wVar4 * '\x10' + cVar7;
        wVar4 = pwVar8[4];
        if (9 < (ushort)(wVar4 + L'￐')) {
          if ((ushort)(wVar4 + L'ﾟ') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 + 0xa9);
          }
          else if ((ushort)(wVar4 + L'﾿') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 - 0x37);
          }
          else {
            wVar4 = L'\0';
          }
        }
        wVar1 = pwVar8[5];
        cVar7 = (char)wVar1;
        if ((ushort)(wVar1 + L'￐') < 10) {
          cVar7 = cVar7 + -0x30;
        }
        else if ((ushort)(wVar1 + L'ﾟ') < 6) {
          cVar7 = cVar7 + -0x57;
        }
        else if ((ushort)(wVar1 + L'﾿') < 6) {
          cVar7 = cVar7 + -0x37;
        }
        else {
          cVar7 = '\0';
        }
        pcVar5[1] = (char)wVar4 * '\x10' + cVar7;
        wVar4 = pwVar8[2];
        if (9 < (ushort)(wVar4 + L'￐')) {
          if ((ushort)(wVar4 + L'ﾟ') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 + 0xa9);
          }
          else if ((ushort)(wVar4 + L'﾿') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 - 0x37);
          }
          else {
            wVar4 = L'\0';
          }
        }
        wVar1 = pwVar8[3];
        cVar7 = (char)wVar1;
        if ((ushort)(wVar1 + L'￐') < 10) {
          cVar7 = cVar7 + -0x30;
        }
        else if ((ushort)(wVar1 + L'ﾟ') < 6) {
          cVar7 = cVar7 + -0x57;
        }
        else if ((ushort)(wVar1 + L'﾿') < 6) {
          cVar7 = cVar7 + -0x37;
        }
        else {
          cVar7 = '\0';
        }
        pcVar5[2] = (char)wVar4 * '\x10' + cVar7;
        wVar4 = *pwVar8;
        if (9 < (ushort)(wVar4 + L'￐')) {
          if ((ushort)(wVar4 + L'ﾟ') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 + 0xa9);
          }
          else if ((ushort)(wVar4 + L'﾿') < 6) {
            wVar4 = (wchar_t)(byte)((char)wVar4 - 0x37);
          }
          else {
            wVar4 = L'\0';
          }
        }
        wVar1 = pwVar8[1];
        cVar7 = (char)wVar1;
        if ((ushort)(wVar1 + L'￐') < 10) {
          cVar7 = cVar7 + -0x30;
        }
        else if ((ushort)(wVar1 + L'ﾟ') < 6) {
          cVar7 = cVar7 + -0x57;
        }
        else if ((ushort)(wVar1 + L'﾿') < 6) {
          cVar7 = cVar7 + -0x37;
        }
        else {
          cVar7 = '\0';
        }
        pwVar8 = pwVar8 + 9;
        uVar9 = uVar9 + 1;
        pcVar5[3] = (char)wVar4 * '\x10' + cVar7;
        pcVar5 = pcVar5 + 4;
      } while (uVar9 < this->NumVertices);
    }
    if ((pwVar8[-1] != L')') &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("*(SourceText - 1) == TCHAR(\')\')",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                           ,0x144,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar6 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    this->Data = puVar6;
    BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  }
  return;
}

// Init @ 14840c3d0

void __thiscall
FColorVertexBuffer::Init(FColorVertexBuffer *this,FConstMeshBuildVertexView *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  FColorVertexData *pFVar3;
  uchar *puVar4;
  FColor_u_0_s_0 *pFVar5;
  FColorVertexData *pFVar6;
  int iVar7;
  FColorVertexData *pFVar8;
  
  this->NeedsCPUAccess = param_2;
  pFVar8 = (FColorVertexData *)0x0;
  uVar1 = (param_1->Color).NumElements;
  pFVar6 = this->VertexData;
  if (uVar1 == 0) {
    if (pFVar6 != (FColorVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      this->VertexData = (FColorVertexData *)0x0;
    }
    this->Stride = 0;
    this->NumVertices = 0;
  }
  else {
    this->NumVertices = uVar1;
    if (pFVar6 != (FColorVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      this->VertexData = (FColorVertexData *)0x0;
    }
    pFVar3 = ::operator_new(0x28);
    pFVar6 = pFVar8;
    if (pFVar3 != (FColorVertexData *)0x0) {
      *(undefined8 *)&pFVar3->field_0x10 = 0;
      *(undefined8 *)&pFVar3->field_0x18 = 0;
      *(undefined ***)&pFVar3->field_0x8 = &___7__TResourceArray_UFColor___0A___6B_;
      *(undefined ***)pFVar3 = &___7FColorVertexData__6B_;
      pFVar3->field_0x20 = param_2;
      pFVar6 = pFVar3;
    }
    this->VertexData = pFVar6;
    uVar2 = (**(code **)(*(longlong *)pFVar6 + 0x20))();
    this->Stride = uVar2;
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
    puVar4 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    this->Data = puVar4;
    if (0 < (int)uVar1) {
      do {
        iVar7 = (int)pFVar8;
        pFVar5 = (FColor_u_0_s_0 *)
                 TStridedView<FColor_const_,int>::GetElementPtr(&param_1->Color,iVar7);
        pFVar8 = (FColorVertexData *)(ulonglong)(iVar7 + 1U);
        ((FColor_u_0 *)(this->Data + iVar7 * this->Stride))->_s_0 = *pFVar5;
      } while ((int)(iVar7 + 1U) < (int)uVar1);
    }
  }
  return;
}

// Init @ 14840c4f0

void __thiscall
FColorVertexBuffer::Init(FColorVertexBuffer *this,FColorVertexBuffer *param_1,bool param_2)

{
  uint uVar1;
  uchar *_Dst;
  
  this->NeedsCPUAccess = param_2;
  if (this->NumVertices != 0) {
    uVar1 = param_1->NumVertices;
    this->NumVertices = uVar1;
    AllocateData(this,param_2);
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
    if (uVar1 == 0) {
      _Dst = (uchar *)0x0;
    }
    else {
      _Dst = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    }
    this->Data = _Dst;
    memcpy(_Dst,param_1->Data,(ulonglong)(this->Stride * this->NumVertices));
  }
  return;
}

// Init @ 14840c570

void __thiscall
FColorVertexBuffer::Init
          (FColorVertexBuffer *this,
          TArray<FStaticMeshBuildVertex,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FColorVertexData *pFVar4;
  uchar *puVar5;
  FColor_u_0_s_0 *pFVar6;
  FColorVertexData *pFVar7;
  int iVar8;
  FColorVertexData *pFVar9;
  TArrayView<FStaticMeshBuildVertex_const_,int> local_a8;
  FConstMeshBuildVertexView local_98;
  
  local_a8.DataPtr = (FStaticMeshBuildVertex *)(param_1->AllocatorInstance).Data;
  iVar8 = param_1->ArrayNum;
  if ((iVar8 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_a8.ArrayNum = iVar8;
  MakeConstMeshBuildVertexView(&local_98,&local_a8);
  pFVar9 = (FColorVertexData *)0x0;
  pFVar7 = this->VertexData;
  this->NeedsCPUAccess = param_2;
  if (local_98.Color.NumElements == 0) {
    if (pFVar7 != (FColorVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
      this->VertexData = (FColorVertexData *)0x0;
    }
    this->Stride = 0;
    this->NumVertices = 0;
  }
  else {
    this->NumVertices = local_98.Color.NumElements;
    if (pFVar7 != (FColorVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar7)(pFVar7,1);
      this->VertexData = (FColorVertexData *)0x0;
    }
    pFVar4 = ::operator_new(0x28);
    pFVar7 = pFVar9;
    if (pFVar4 != (FColorVertexData *)0x0) {
      *(undefined8 *)&pFVar4->field_0x10 = 0;
      *(undefined8 *)&pFVar4->field_0x18 = 0;
      *(undefined ***)&pFVar4->field_0x8 = &___7__TResourceArray_UFColor___0A___6B_;
      *(undefined ***)pFVar4 = &___7FColorVertexData__6B_;
      pFVar4->field_0x20 = param_2;
      pFVar7 = pFVar4;
    }
    this->VertexData = pFVar7;
    uVar3 = (**(code **)(*(longlong *)pFVar7 + 0x20))();
    this->Stride = uVar3;
    (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
    puVar5 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    this->Data = puVar5;
    if (0 < local_98.Color.NumElements) {
      do {
        iVar8 = (int)pFVar9;
        pFVar6 = (FColor_u_0_s_0 *)
                 TStridedView<FColor_const_,int>::GetElementPtr(&local_98.Color,iVar8);
        pFVar9 = (FColorVertexData *)(ulonglong)(iVar8 + 1U);
        ((FColor_u_0 *)(this->Data + iVar8 * this->Stride))->_s_0 = *pFVar6;
      } while ((int)(iVar8 + 1U) < local_98.Color.NumElements);
    }
  }
  if (local_98.UVs.AllocatorInstance.SecondaryData !=
      (ForElementType<TStridedView<UE::Math::TVector2<float>_const_,int>_>)0x0) {
    FMemory::Free((void *)local_98.UVs.AllocatorInstance.SecondaryData);
  }
  if (local_98.BoneWeights.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BoneWeights.AllocatorInstance.Data);
  }
  if (local_98.BoneIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.BoneIndices.AllocatorInstance.Data);
  }
  return;
}

// Init @ 14840c710

void __thiscall FColorVertexBuffer::Init(FColorVertexBuffer *this,uint param_1,bool param_2)

{
  uchar *puVar1;
  
  this->NumVertices = param_1;
  this->NeedsCPUAccess = param_2;
  AllocateData(this,param_2);
  (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,this->NumVertices,0);
  if (param_1 != 0) {
    puVar1 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
    this->Data = puVar1;
    return;
  }
  this->Data = (uchar *)0x0;
  return;
}

// InitFromColorArray @ 14840c780

void __thiscall
FColorVertexBuffer::InitFromColorArray
          (FColorVertexBuffer *this,FColor *param_1,uint param_2,uint param_3,bool param_4)

{
  FColor_u_0 FVar1;
  code *pcVar2;
  bool bVar3;
  FColor_u_0 *pFVar4;
  uchar *puVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_2;
  if ((param_2 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
                         ,0x164,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->NeedsCPUAccess = param_4;
  this->NumVertices = param_2;
  AllocateData(this,param_4);
  (**(code **)(*(longlong *)this->VertexData + 8))(this->VertexData,uVar6,0);
  pFVar4 = (FColor_u_0 *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
  if (param_2 != 0) {
    do {
      FVar1 = param_1->field0_0x0;
      param_1 = (FColor *)((longlong)param_1 + (ulonglong)param_3);
      *pFVar4 = FVar1;
      pFVar4 = pFVar4 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  puVar5 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
  this->Data = puVar5;
  return;
}

// InitRHI @ 14840cfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FColorVertexBuffer::InitRHI(FColorVertexBuffer *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  EBufferUsageFlags EVar2;
  FColorVertexData *pFVar3;
  FRHIResource *pFVar4;
  FRHIShaderResourceView *this_00;
  bool bVar5;
  bool bVar6;
  FResourceArrayInterface *pFVar7;
  TRefCountPtr<FRHIBuffer> TVar8;
  TRefCountPtr<FRHIShaderResourceView> TVar9;
  FRHIResource *this_01;
  TRefCountPtr<FRHIShaderResourceView> *pTVar10;
  bool bVar11;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  undefined4 in_stack_ffffffffffffffa4;
  longlong local_40;
  longlong lStack_38;
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId423,"FColorVertexBuffer::InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
               ,0x1a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId423);
  }
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId424,"FColorVertexBuffer_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\ColorVertexBuffer.cpp"
               ,0x1a8);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId424);
  }
  this_01 = (FRHIResource *)0x0;
  EVar2 = this->NumVertices;
  if (this->VertexData == (FColorVertexData *)0x0) {
    pFVar7 = (FResourceArrayInterface *)0x0;
  }
  else {
    pFVar7 = (FResourceArrayInterface *)(**(code **)(*(longlong *)this->VertexData + 0x38))();
  }
  if (EVar2 != None) {
    local_res8 = (FRHIResource *)this->_padding_;
    TVar8 = FRenderResource::CreateRHIBufferInternal
                      ((FRHICommandListBase *)&stack0x00000018,(wchar_t *)param_1,
                       (FName *)L"FColorVertexBuffer",(uint)&stack0x00000008,EVar2,
                       (FResourceArrayInterface *)CONCAT44(in_stack_ffffffffffffffa4,0x101),
                       SUB81(pFVar7,0));
    if ((FRHIBuffer *)&stack0xffffffffffffffb8 != TVar8.Reference) {
      this_01 = (FRHIResource *)(TVar8.Reference)->_padding_;
      (TVar8.Reference)->_padding_ = 0;
    }
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res18);
    }
  }
  bVar6 = FRenderResource::ShouldFreeResourceObject(this->VertexData,pFVar7);
  if (bVar6) {
    pFVar3 = this->VertexData;
    if (pFVar3 != (FColorVertexData *)0x0) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
    this->VertexData = (FColorVertexData *)0x0;
  }
  plVar1 = &this->_padding_;
  if (plVar1 != (longlong *)&stack0xffffffffffffffb8) {
    pFVar4 = (FRHIResource *)*plVar1;
    *plVar1 = (longlong)this_01;
    this_01 = pFVar4;
  }
  if (this_01 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_01);
  }
  if ((*plVar1 != 0) &&
     (bVar6 = RHISupportsManualVertexFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform), bVar6)) {
    lStack_38 = 0;
    local_40 = 0x12500;
    TVar9 = FRHICommandListBase::CreateShaderResourceView
                      (param_1,(FRHIBuffer *)&stack0x00000008,(FInitializer *)*plVar1);
    pTVar10 = &this->ColorComponentsSRV;
    if ((FRHIShaderResourceView *)pTVar10 != TVar9.Reference) {
      this_00 = pTVar10->Reference;
                    /* WARNING: Load size is inaccurate */
      pTVar10->Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (this_00 != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitRHIForStreaming @ 14840dcd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FColorVertexBuffer::InitRHIForStreaming
          (FColorVertexBuffer *this,FRHIBuffer *param_1,FRHIResourceReplaceBatcher *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  if ((this->_padding_ != 0) && (param_1 != (FRHIBuffer *)0x0)) {
    iVar2 = (param_2->Infos).ArrayNum;
    if (iVar2 == (param_2->Infos).ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(param_2->Infos).AllocatorInstance,&(param_2->Infos).ArrayMax);
    }
    (param_2->Infos).ArrayNum = iVar2 + 1;
    pFVar1 = (param_2->Infos).AllocatorInstance.Data + (longlong)iVar2 * 0x18;
    *(longlong *)pFVar1 = this->_padding_;
    *(FRHIBuffer **)(pFVar1 + 8) = param_1;
    pFVar1[0x10] = (FScriptContainerElement)0x0;
  }
  return;
}

// ReleaseRHI @ 14841f440

void __thiscall FColorVertexBuffer::ReleaseRHI(FColorVertexBuffer *this)

{
  FRHIShaderResourceView *this_00;
  
  this_00 = (this->ColorComponentsSRV).Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    (this->ColorComponentsSRV).Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FVertexBuffer::ReleaseRHI((FVertexBuffer *)this);
  return;
}

// ReleaseRHIForStreaming @ 14841f4d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FColorVertexBuffer::ReleaseRHIForStreaming
          (FColorVertexBuffer *this,FRHIResourceReplaceBatcher *param_1)

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

// Serialize @ 148422940

/* WARNING: Enum "EUnrealEngineObjectUE4Version": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FColorVertexBuffer::Serialize(FColorVertexBuffer *this,FArchive *param_1,bool param_2)

{
  longlong *plVar1;
  uint *puVar2;
  FColorVertexData *pFVar3;
  int iVar4;
  FPackageFileVersion FVar5;
  uchar *puVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  FStripDataFlags local_res18 [8];
  
  this->NeedsCPUAccess = param_2;
  FVar5 = FPackageFileVersion::CreateUE4Version((EUnrealEngineObjectUE4Version)local_res8);
  FStripDataFlags::FStripDataFlags(local_res18,param_1,'\0',(FPackageFileVersion *)FVar5);
  if ((((param_1->field_0x28 & 4) == 0) || (this->NumVertices == 0)) ||
     (this->VertexData != (FColorVertexData *)0x0)) {
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Stride,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->Stride);
      }
    }
    else {
      this->Stride = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
    if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->NumVertices,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&this->NumVertices);
      }
    }
    else {
      this->NumVertices = *puVar2;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    }
    if (((param_1->field_0x28 & 1) != 0) && (this->NumVertices != 0)) {
      AllocateData(this,param_2);
    }
    if (((((ushort)local_res18[0] & 2) == 0) || ((param_1->field_0x2b & 4) != 0)) &&
       (pFVar3 = this->VertexData, pFVar3 != (FColorVertexData *)0x0)) {
      (**(code **)(*(longlong *)pFVar3 + 0x40))(pFVar3,param_1,0);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      if (((ushort)local_res18[0] & 2) == 0) {
        if (this->VertexData != (FColorVertexData *)0x0) {
          iVar4 = (**(code **)(*(longlong *)this->VertexData + 0x28))();
          if (0 < iVar4) {
            puVar6 = (uchar *)(**(code **)(*(longlong *)this->VertexData + 0x30))();
            this->Data = puVar6;
          }
        }
      }
      else {
        this->Stride = 0;
        this->NumVertices = 0;
      }
    }
    return;
  }
  if (2 < (byte)LogStaticMesh._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogStaticMesh);
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = 0;
  local_res10[0] = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res10);
  return;
}

// SerializeMetaData @ 1484239b0

void __thiscall FColorVertexBuffer::SerializeMetaData(FColorVertexBuffer *this,FArchive *param_1)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = &this->Stride;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &this->NumVertices;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (uint *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148423a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,puVar1);
  return;
}

// SetMetaData @ 148425410

void __thiscall FColorVertexBuffer::SetMetaData(FColorVertexBuffer *this,uint param_1,uint param_2)

{
  this->Stride = param_1;
  this->NumVertices = param_2;
  return;
}

// operator() @ 15052aad0

bool __thiscall `FColorVertexBuffer::AppendVertices'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8946095081438314359>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8946095081438314359>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

