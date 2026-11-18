// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 10

// operator() @ 14e5d8100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  void *_Src;
  
  uVar2 = *(undefined4 *)((longlong)this + 8);
  uVar3 = *(undefined8 *)this;
  if ((((!GRHICommandList.bLatchedBypass) || ((param_1->field_0x29b & 0x20) == 0)) &&
      (param_1->field_0x64 != '\0')) &&
     ((!GRHICommandList.bLatchedBypass || ((param_1->field_0x29b & 0x20) == 0)))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2ed,
                       L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar5 = param_1->field_0x6a == '\0';
  if (bVar5) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
  }
  _Src = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))(GDynamicRHI,param_1,uVar3,0,uVar2,0);
  if (bVar5) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
  }
  memcpy(*(void **)((longlong)this + 0x10),_Src,(ulonglong)*(uint *)((longlong)this + 8));
  uVar3 = *(undefined8 *)this;
  if ((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
      (param_1->field_0x64 != '\0')) &&
     ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2f5,
                       L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar1 = param_1->field_0x6a;
  if ((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->field_0x6a == '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,uVar3);
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1,uVar3);
  }
  return;
}

// GetCPUBuffer @ 14e5f5b10

void * __cdecl FGLTFBufferUtilities::GetCPUBuffer(FRawStaticIndexBuffer16or32Interface *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = (**(code **)(param_1->_padding_ + 0x88))();
  if (0 < iVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014e5f5b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = (void *)(**(code **)(param_1->_padding_ + 0x68))(param_1,0);
    return pvVar2;
  }
  return (void *)0x0;
}

// GetCPUBuffer @ 14e5f5b50

void * __cdecl FGLTFBufferUtilities::GetCPUBuffer(FRawStaticIndexBuffer *param_1)

{
  void *pvVar1;
  ushort *puVar2;
  
  if (param_1->b32Bit == false) {
    puVar2 = FRawStaticIndexBuffer::AccessStream16(param_1);
    return puVar2;
  }
  if (param_1->b32Bit == false) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)(param_1->IndexStorage)._padding_;
    if (((ulonglong)pvVar1 & 1) != 0) {
      return (void *)((longlong)&(param_1->IndexStorage)._padding_ + ((longlong)pvVar1 >> 0x18));
    }
  }
  return pvVar1;
}

// HasCPUAccess @ 14e600f00

bool __cdecl FGLTFBufferUtilities::HasCPUAccess(FColorVertexBuffer *param_1)

{
  undefined1 uVar1;
  
  if (param_1->VertexData != (FColorVertexData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014840523c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)param_1->VertexData + 0x58))();
    return (bool)uVar1;
  }
  return false;
}

// HasCPUAccess @ 14e600f10

bool __cdecl FGLTFBufferUtilities::HasCPUAccess(FPositionVertexBuffer *param_1)

{
  undefined1 uVar1;
  
  if (param_1->VertexData != (FPositionVertexData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014837e61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)param_1->VertexData + 0x58))();
    return (bool)uVar1;
  }
  return false;
}

// HasCPUAccess @ 14e600f20

bool __cdecl FGLTFBufferUtilities::HasCPUAccess(FRawStaticIndexBuffer16or32Interface *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e600f23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1->_padding_ + 0x48))();
  return (bool)uVar1;
}

// HasCPUAccess @ 14e600f30

bool __cdecl FGLTFBufferUtilities::HasCPUAccess(FRawStaticIndexBuffer *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e600f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((param_1->IndexStorage)._padding_ + 0x30))(&param_1->IndexStorage);
  return (bool)uVar1;
}

// HasCPUAccess @ 14e600f50

bool __cdecl FGLTFBufferUtilities::HasCPUAccess(FSkinWeightVertexBuffer *param_1)

{
  return (param_1->DataVertexBuffer).bNeedsCPUAccess;
}

// HasCPUAccess @ 14e600f60

bool __cdecl FGLTFBufferUtilities::HasCPUAccess(FStaticMeshVertexBuffer *param_1)

{
  char cVar1;
  
  if ((param_1->TangentsData != (FStaticMeshVertexDataInterface *)0x0) &&
     (param_1->TexcoordData != (FStaticMeshVertexDataInterface *)0x0)) {
    cVar1 = (**(code **)((longlong)*param_1->TangentsData + 0x58))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)((longlong)*param_1->TexcoordData + 0x58))();
      if (cVar1 != '\0') {
        return true;
      }
    }
  }
  return false;
}

// ReadRHIBuffer @ 14e609bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FGLTFBufferUtilities::ReadRHIBuffer
          (FRHIBuffer *param_1,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FCommandList *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FRenderCommandList *this;
  FRenderCommandTag *pFVar8;
  code **ppcVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStackY_f8 [32];
  undefined4 uStack_bc;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (((param_1 != (FRHIBuffer *)0x0) && (uVar7 = (param_1->Desc).Size, uVar7 != 0)) &&
     (((param_1->Desc).Usage & Static) != None)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar7,&param_2->AllocatorInstance,&param_2->ArrayNum,piVar1);
    pFVar3 = (param_2->AllocatorInstance).Data;
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x20,8);
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FGLTFBufferUtilities::ReadRHIBuffer'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[1] = (code *)param_1;
    local_80[2] = (code *)CONCAT44(uStack_bc,uVar7);
    local_80[3] = (code *)pFVar3;
    if (local_80 + 1 != (code **)0x0) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FGLTFBufferUtilities::ReadRHIBuffer_::__l2::TSTR_ReadRHIBuffer94>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      if (this->bInitialized == 0) {
        FRenderCommandList::Init(this);
      }
      iVar2 = (this->CommandLists).ArrayNum;
      uVar10 = iVar2 - 1;
      uVar7 = 0;
      if ((int)uVar10 < iVar2) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar2 = (this->CommandLists).ArrayNum;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_48 = 2;
      pFVar4 = (this->CommandLists).AllocatorInstance.Data;
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_a8[0] = (code *)0x0;
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`FGLTFBufferUtilities::ReadRHIBuffer'::__l2::TSTR_ReadRHIBuffer94>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar4 + (iVar2 + -1),
                 (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_78,pFVar8);
      uVar11 = (ulonglong)local_48;
      if ((2 < uVar11) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar9 = local_50;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar11])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar9 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar9 = local_80;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    FlushRenderingCommands();
  }
  return;
}

