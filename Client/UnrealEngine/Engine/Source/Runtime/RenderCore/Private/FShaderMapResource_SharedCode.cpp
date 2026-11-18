// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 20

// FShaderMapResource_SharedCode @ 145e42130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderMapResource_SharedCode * __thiscall
FShaderMapResource_SharedCode::FShaderMapResource_SharedCode
          (FShaderMapResource_SharedCode *this,FShaderLibraryInstance *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FRHIShaderLibrary *pFVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  uint uVar8;
  int local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar2 = (param_1->Library).Reference;
  iVar3 = (**(code **)(pFVar2->_padding_ + 0x28))(pFVar2,param_2);
  FShaderMapResource::FShaderMapResource
            ((FShaderMapResource *)this,((param_1->Library).Reference)->Platform,iVar3);
  this->LibraryInstance = param_1;
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  this->ShaderMapIndex = param_2;
  this->bEntireShaderMapPreloaded = false;
  if (GShaderMapResourceRef != false) {
    uVar5 = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    uVar8 = (uint)this->_padding_ & 0x7fffffff;
    if (uVar8 != 0) {
      do {
        pFVar2 = (this->LibraryInstance->Library).Reference;
        uVar4 = (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,this->ShaderMapIndex,uVar5);
        pFVar2 = (this->LibraryInstance->Library).Reference;
        local_res18[0] = (**(code **)(pFVar2->_padding_ + 0xa8))(pFVar2,uVar4);
        TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_18,local_res18);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)uVar8);
      uVar5 = local_18._8_8_ & 0xffffffff;
    }
    iVar3 = (int)uVar5;
    pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar3 * 4;
    FVar7.Data = local_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar5 != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar7.Data == pFVar1) break;
      pFVar2 = (this->LibraryInstance->Library).Reference;
      (**(code **)(pFVar2->_padding_ + 0x98))(pFVar2,*(undefined4 *)FVar7.Data);
      uVar5 = local_18._8_8_ & 0xffffffff;
      FVar7.Data = FVar7.Data + 4;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~FShaderMapResource_SharedCode @ 145e446a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderMapResource_SharedCode::~FShaderMapResource_SharedCode(FShaderMapResource_SharedCode *this)

{
  this->_padding_ = (longlong)&_vftable__for__FRenderResource__;
  this->_padding_ = (longlong)&_vftable__for__FDeferredCleanupInterface__;
  FShaderMapResource::~FShaderMapResource((FShaderMapResource *)this);
  return;
}

// CreateRHIShaderOrCrash @ 145e51060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FRHIShader * __thiscall
FShaderMapResource_SharedCode::CreateRHIShaderOrCrash
          (FShaderMapResource_SharedCode *this,int param_1,bool param_2)

{
  FRHIShaderLibrary *pFVar1;
  bool bVar2;
  bool bVar3;
  FRHIShader *pFVar4;
  FRHIShader *local_res8;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1396,"FShaderMapResource_SharedCode_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
               ,0x574);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1396);
  }
  pFVar1 = (this->LibraryInstance->Library).Reference;
  bVar3 = (bool)(**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,this->ShaderMapIndex,param_1);
  FShaderLibraryInstance::GetOrCreateShader(this->LibraryInstance,(int)&local_res8,bVar3);
  if (local_res8 == (FRHIShader *)0x0) {
    if (param_2) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
    }
    pFVar4 = (FRHIShader *)0x0;
  }
  else {
    FRHIResource::AddRef((FRHIResource *)local_res8);
    pFVar4 = local_res8;
  }
  if (local_res8 != (FRHIShader *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res8);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return pFVar4;
}

// GetFriendlyName @ 145e58ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall
FShaderMapResource_SharedCode::GetFriendlyName
          (FShaderMapResource_SharedCode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     &((this->LibraryInstance->Library).Reference)->LibraryName);
  return __return_storage_ptr__;
}

// GetGroupIndexForShader @ 145e58af0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FShaderMapResource_SharedCode::GetGroupIndexForShader
          (FShaderMapResource_SharedCode *this,int param_1)

{
  FRHIShaderLibrary *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int iVar3;
  
  pFVar1 = (this->LibraryInstance->Library).Reference;
  uVar2 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,this->ShaderMapIndex,param_1);
  pFVar1 = (this->LibraryInstance->Library).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000145e58b27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (*UNRECOVERED_JUMPTABLE)(pFVar1,uVar2,UNRECOVERED_JUMPTABLE);
  return iVar3;
}

// GetLibraryId @ 145e59600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall FShaderMapResource_SharedCode::GetLibraryId(FShaderMapResource_SharedCode *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000145e5960a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->LibraryInstance->Library).Reference)->_padding_ + 0xb0))();
  return iVar1;
}

// GetLibraryShaderIndex @ 145e59620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FShaderMapResource_SharedCode::GetLibraryShaderIndex
          (FShaderMapResource_SharedCode *this,int param_1)

{
  FRHIShaderLibrary *pFVar1;
  int iVar2;
  
  pFVar1 = (this->LibraryInstance->Library).Reference;
                    /* WARNING: Could not recover jumptable at 0x000145e59637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,this->ShaderMapIndex,param_1);
  return iVar2;
}

// GetShaderHash @ 145e5ad70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSHAHash * __thiscall
FShaderMapResource_SharedCode::GetShaderHash
          (FShaderMapResource_SharedCode *this,FSHAHash *__return_storage_ptr__,int param_1)

{
  FRHIShaderLibrary *pFVar1;
  
  pFVar1 = (this->LibraryInstance->Library).Reference;
  (**(code **)(pFVar1->_padding_ + 0x48))
            (pFVar1,__return_storage_ptr__,this->ShaderMapIndex,param_1);
  return __return_storage_ptr__;
}

// GetShaderMapHash @ 145e5ae80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FSHAHash * __thiscall
FShaderMapResource_SharedCode::GetShaderMapHash
          (FShaderMapResource_SharedCode *this,FSHAHash *__return_storage_ptr__)

{
  FRHIShaderLibrary *pFVar1;
  
  pFVar1 = (this->LibraryInstance->Library).Reference;
  (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,__return_storage_ptr__,this->ShaderMapIndex);
  return __return_storage_ptr__;
}

// GetShaderSizeBytes @ 145e5b000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
FShaderMapResource_SharedCode::GetShaderSizeBytes(FShaderMapResource_SharedCode *this,int param_1)

{
  FRHIShaderLibrary *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  uint uVar3;
  
  pFVar1 = (this->LibraryInstance->Library).Reference;
  uVar2 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,this->ShaderMapIndex,param_1);
  pFVar1 = (this->LibraryInstance->Library).Reference;
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x68);
                    /* WARNING: Could not recover jumptable at 0x000145e5b034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(pFVar1,uVar2,UNRECOVERED_JUMPTABLE);
  return uVar3;
}

// GetSizeBytes @ 145e5bcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall FShaderMapResource_SharedCode::GetSizeBytes(FShaderMapResource_SharedCode *this)

{
  return (*(int *)((longlong)&this->_padding_ + 4) + (int)this->_padding_ * 2 + 0x22) * 4;
}

// PreloadShader @ 145e67d60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderMapResource_SharedCode::PreloadShader
          (FShaderMapResource_SharedCode *this,int param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FRHIShaderLibrary *pFVar1;
  int iVar2;
  
  if ((this->bEntireShaderMapPreloaded == false) &&
     (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) == 0)) {
    pFVar1 = (this->LibraryInstance->Library).Reference;
    iVar2 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,this->ShaderMapIndex,param_1);
    FShaderLibraryInstance::PreloadShader(this->LibraryInstance,iVar2,param_2);
  }
  return;
}

// PreloadShaderMap @ 145e67dc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FShaderMapResource_SharedCode::PreloadShaderMap
          (FShaderMapResource_SharedCode *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  uint *puVar1;
  FRHIShaderLibrary *pFVar2;
  FShaderLibraryInstance *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FCachedRHIShader *pFVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint local_res18 [2];
  FLLMScope local_res20 [2];
  FMemScope local_68;
  uint *local_60;
  ulonglong local_58;
  FCachedRHIShader local_50;
  
  local_60 = (uint *)0x0;
  local_58 = 0;
  pFVar2 = (this->LibraryInstance->Library).Reference;
  (**(code **)(pFVar2->_padding_ + 0x38))(pFVar2,this->ShaderMapIndex);
  iVar5 = (int)local_58;
  uVar8 = (ulonglong)(int)local_58;
  puVar1 = local_60 + uVar8;
  puVar9 = local_60;
  while( true ) {
    if ((int)uVar8 != iVar5) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (puVar9 == puVar1) break;
    local_res18[0] = *puVar9;
    pFVar3 = this->LibraryInstance;
    FLLMScope::FLLMScope(local_res20,Shaders,false,None,Default,true);
    FMemScope::FMemScope(&local_68,Shaders,true);
    if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
      FCpuProfilerTrace::GetOrCreateSpecId
                (&`public:_void___cdecl_FShaderLibraryInstance::PreloadShader(int,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                  ::__l2::__CpuProfilerEventSpecId1100,"FShaderLibraryInstance_PreloadShader",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                 ,0x44c);
      FCpuProfilerTrace::OutputBeginEvent
                (`public:_void___cdecl_FShaderLibraryInstance::PreloadShader(int,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64)___ptr64'
                 ::__l2::__CpuProfilerEventSpecId1100);
    }
    uVar6 = local_res18[0] & 0x8000001f;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xffffffe0) + 1;
    }
    AcquireSRWLockExclusive((PSRWLOCK)(pFVar3->ShaderLocks + (int)uVar6));
    local_50.PreloadingState = NotPreloaded;
    local_50._1_7_ = 0;
    local_50.RHIShader.Reference = (FRHIShader *)0x0;
    pFVar7 = TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
             ::FindOrAddImpl<int_const_&,FShaderLibraryInstance::FCachedRHIShader>
                       ((TMapBase<int,FShaderLibraryInstance::FCachedRHIShader,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>_>
                         *)(pFVar3->RHIShaders + (int)uVar6),local_res18[0],(int *)local_res18,
                        &local_50);
    if (local_50.RHIShader.Reference != (FRHIShader *)0x0) {
      FRHIResource::Release((FRHIResource *)local_50.RHIShader.Reference);
    }
    if (pFVar7->PreloadingState == NotPreloaded) {
      pFVar2 = (pFVar3->Library).Reference;
      (**(code **)(pFVar2->_padding_ + 0x78))(pFVar2,local_res18[0]);
      pFVar7->PreloadingState = Preloaded;
    }
    else if (pFVar7->PreloadingState == Preloaded) {
      pFVar2 = (pFVar3->Library).Reference;
      (**(code **)(pFVar2->_padding_ + 0x70))(pFVar2,local_res18[0]);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(pFVar3->ShaderLocks + (int)uVar6));
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FMemScope::~FMemScope(&local_68);
    FLLMScope::~FLLMScope(local_res20);
    uVar8 = local_58 & 0xffffffff;
    puVar9 = puVar9 + 1;
  }
  if (local_60 != (uint *)0x0) {
    FMemory::Free(local_60);
  }
  return;
}

// ReleasePreloadedShaderCode @ 145e6a670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FShaderMapResource_SharedCode::ReleasePreloadedShaderCode
          (FShaderMapResource_SharedCode *this,int param_1)

{
  FRHIShaderLibrary *pFVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if ((CpuChannel->Enabled < 0) || (LoadTimeChannel->Enabled < 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1427,"FShaderMapResource_SharedCode_InitRHI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
               ,0x593);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1427);
  }
  if (this->bEntireShaderMapPreloaded != false) {
    pFVar1 = (this->LibraryInstance->Library).Reference;
    uVar3 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,this->ShaderMapIndex,param_1);
    pFVar1 = (this->LibraryInstance->Library).Reference;
    (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,uVar3);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReleaseRHI @ 145e6a730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FShaderMapResource_SharedCode::ReleaseRHI(FShaderMapResource_SharedCode *this)

{
  FRHIShaderLibrary *pFVar1;
  FShaderLibraryInstance *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  ForAnyElementType FVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  FString local_c8;
  uint local_b8 [2];
  uint local_b0 [2];
  int local_a8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  ulonglong local_90;
  FShaderMapResource_SharedCode *local_88;
  FName local_80;
  FString local_78;
  FReadAccessScope local_68;
  
  puVar11 = (uint *)0x0;
  if (this->LibraryInstance != (FShaderLibraryInstance *)0x0) {
    if ((this->LibraryInstance->Library).Reference == (FRHIShaderLibrary *)0x0) {
      local_res8[0] = 0;
      bVar5 = `FShaderMapResource_SharedCode::ReleaseRHI'::__l3::<lambda_1>::operator()(local_res8);
      if (!bVar5) goto LAB_145e6aad2;
    }
    uVar6 = (uint)this->_padding_ & 0x7fffffff;
    local_90 = (ulonglong)uVar6;
    local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0;
    local_res20 = 0;
    puVar10 = puVar11;
    puVar18 = puVar11;
    if (uVar6 != 0) {
      do {
        pFVar1 = (this->LibraryInstance->Library).Reference;
        uVar6 = (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,this->ShaderMapIndex,puVar10);
        pFVar2 = this->LibraryInstance;
        if (*(longlong *)(this->_padding_ + (longlong)puVar18 * 8) == 0) {
          if (this->bEntireShaderMapPreloaded == false) {
            uVar7 = uVar6 & 0x8000001f;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
            }
            lVar15 = (longlong)(int)uVar7;
            lVar14 = (longlong)pFVar2->RHIShaders + lVar15 * 8 + -8;
            AcquireSRWLockExclusive((PSRWLOCK)(lVar14 + 0xa18));
            if (*(int *)&pFVar2->RHIShaders[lVar15].field_0x8 !=
                *(int *)&pFVar2->RHIShaders[lVar15].field_0x34) {
              puVar3 = *(undefined1 **)&pFVar2->RHIShaders[lVar15].field_0x40;
              puVar12 = &pFVar2->RHIShaders[lVar15].field_0x38;
              if (puVar3 != (undefined1 *)0x0) {
                puVar12 = puVar3;
              }
              uVar7 = *(uint *)(puVar12 +
                               (ulonglong)
                               (*(int *)&pFVar2->RHIShaders[lVar15].field_0x48 - 1U & uVar6) * 4);
              if (uVar7 != 0xffffffff) {
                do {
                  puVar10 = (uint *)((longlong)(int)uVar7 * 0x20 +
                                    *(longlong *)(pFVar2->RHIShaders + lVar15));
                  if (*puVar10 == uVar6) {
                    puVar8 = puVar10 + 2;
                    if (puVar10 == (uint *)0x0) {
                      puVar8 = puVar11;
                    }
                    if ((puVar8 != (uint *)0x0) && ((char)*puVar8 == '\x01')) {
                      if ((*(longlong *)(puVar8 + 2) != 0) &&
                         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                            ("!ShaderPtr->RHIShader.IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                                             ,0x4ee,L""), bVar5)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pFVar1 = (pFVar2->Library).Reference;
                      (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,uVar6);
                      local_b0[0] = uVar6;
                      if (*(int *)&pFVar2->RHIShaders[lVar15].field_0x8 !=
                          *(int *)&pFVar2->RHIShaders[lVar15].field_0x34) {
                        puVar10 = local_b0;
                        goto LAB_145e6aa09;
                      }
                    }
                    break;
                  }
                  uVar7 = puVar10[6];
                } while (uVar7 != 0xffffffff);
              }
            }
            goto LAB_145e6aa1f;
          }
          pFVar1 = (pFVar2->Library).Reference;
          (**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,uVar6);
        }
        else {
          uVar7 = uVar6 & 0x8000001f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
          }
          lVar15 = (longlong)(int)uVar7;
          lVar14 = (longlong)pFVar2->RHIShaders + lVar15 * 8 + -8;
          AcquireSRWLockExclusive((PSRWLOCK)(lVar14 + 0xa18));
          if (*(int *)&pFVar2->RHIShaders[lVar15].field_0x8 !=
              *(int *)&pFVar2->RHIShaders[lVar15].field_0x34) {
            puVar3 = *(undefined1 **)&pFVar2->RHIShaders[lVar15].field_0x40;
            puVar12 = &pFVar2->RHIShaders[lVar15].field_0x38;
            if (puVar3 != (undefined1 *)0x0) {
              puVar12 = puVar3;
            }
            uVar7 = *(uint *)(puVar12 +
                             (ulonglong)
                             (*(int *)&pFVar2->RHIShaders[lVar15].field_0x48 - 1U & uVar6) * 4);
            if (uVar7 != 0xffffffff) {
              do {
                puVar10 = (uint *)((longlong)(int)uVar7 * 0x20 +
                                  *(longlong *)(pFVar2->RHIShaders + lVar15));
                if (*puVar10 == uVar6) {
                  puVar8 = puVar10 + 2;
                  if (puVar10 == (uint *)0x0) {
                    puVar8 = puVar11;
                  }
                  if ((puVar8 != (uint *)0x0) && (*(longlong *)(puVar8 + 2) != 0)) {
                    uVar7 = *(uint *)(*(longlong *)(puVar8 + 2) + 8) & 0x3fffffff;
                    if (uVar7 < 2) {
                      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("NumRefs > 1u",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                                         ,0x4de,L"");
                      if (bVar5) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                    }
                    else if ((uVar7 == 2) &&
                            (local_b8[0] = uVar6,
                            *(int *)&pFVar2->RHIShaders[lVar15].field_0x8 !=
                            *(int *)&pFVar2->RHIShaders[lVar15].field_0x34)) {
                      puVar10 = local_b8;
LAB_145e6aa09:
                      TSet<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>,FDefaultSetAllocator>
                      ::RemoveImpl<int>((TSet<TTuple<int,FShaderLibraryInstance::FCachedRHIShader>,TDefaultMapHashableKeyFuncs<int,FShaderLibraryInstance::FCachedRHIShader,0>,FDefaultSetAllocator>
                                         *)(pFVar2->RHIShaders + lVar15),uVar6,(int *)puVar10);
                    }
                  }
                  break;
                }
                uVar7 = puVar10[6];
              } while (uVar7 != 0xffffffff);
            }
          }
LAB_145e6aa1f:
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar14 + 0xa18));
        }
        if (GShaderMapResourceRef != false) {
          pFVar1 = (this->LibraryInstance->Library).Reference;
          local_a8[0] = (**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1,uVar6);
          TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_a0,local_a8);
        }
        puVar18 = (uint *)((longlong)puVar18 + 1);
        local_res20 = local_res20 + 1;
        puVar10 = (uint *)(ulonglong)local_res20;
      } while ((longlong)puVar18 < (longlong)local_90);
      puVar11 = (uint *)(ulonglong)(uint)local_a0.ArrayNum;
    }
    if (GShaderMapResourceRef != false) {
      iVar9 = (int)puVar11;
      pFVar16 = local_a0.AllocatorInstance.Data + (longlong)iVar9 * 4;
      FVar13.Data = local_a0.AllocatorInstance.Data;
      while( true ) {
        if ((int)puVar11 != iVar9) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar13.Data == pFVar16) break;
        pFVar1 = (this->LibraryInstance->Library).Reference;
        (**(code **)(pFVar1->_padding_ + 0xa0))(pFVar1,*(undefined4 *)FVar13.Data);
        puVar11 = (uint *)(ulonglong)(uint)local_a0.ArrayNum;
        FVar13.Data = FVar13.Data + 4;
      }
    }
    if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.AllocatorInstance.Data);
    }
  }
LAB_145e6aad2:
  this->bEntireShaderMapPreloaded = false;
  FShaderMapResource::ReleaseRHI((FShaderMapResource *)this);
  this->LibraryInstance = (FShaderLibraryInstance *)0x0;
  if (0 < (int)this->_padding_) {
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FShaderLibrariesCollection::GatherShaderMapResourceReferences
              (FShaderLibrariesCollection::Impl,this,&local_e8);
    iVar9 = local_e8.ArrayNum;
    pFVar16 = local_e8.AllocatorInstance.Data + (longlong)local_e8.ArrayNum * 0x10;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    FVar13.Data = local_e8.AllocatorInstance.Data;
    while( true ) {
      if (local_e8.ArrayNum != iVar9) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar13.Data == pFVar16) break;
      if (1 < local_c8.Data.ArrayNum) {
        ::FString::AppendChars(&local_c8,L", ",2);
      }
      iVar17 = *(int *)(FVar13.Data + 8) + -1;
      if (*(int *)(FVar13.Data + 8) == 0) {
        iVar17 = 0;
      }
      ::FString::AppendChars(&local_c8,*(wchar_t **)FVar13.Data,iVar17);
      FVar13.Data = FVar13.Data + 0x10;
    }
    if ((1 < local_c8.Data.ArrayNum) && (2 < (byte)LogShaderLibrary._0_1_)) {
      pFVar1 = (this->LibraryInstance->Library).Reference;
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = (pFVar1->LibraryName).Data.ArrayNum;
      lVar14 = (longlong)local_d0;
      pFVar16 = (pFVar1->LibraryName).Data.AllocatorInstance.Data;
      if (local_d0 == 0) {
        local_cc = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d0,0,&local_d8,local_d0,&local_cc);
        memcpy(local_d8.Data,pFVar16,lVar14 * 2);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    local_88 = this;
    `FShaderMapResource_SharedCode::ReleaseRHI'::__l29::<lambda_2>::operator()(&local_88);
    if (2 < (byte)LogShaderLibrary._0_1_) {
      local_80 = (FName)this->_padding_;
      ::FName::ToString(&local_80,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogShaderLibrary);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &OnSharedShaderMapResourceExplicitRelease,&local_68);
    if ((OnSharedShaderMapResourceExplicitRelease._16_4_ != 0) &&
       (OnSharedShaderMapResourceExplicitRelease._8_8_ != 0)) {
      (**(code **)(*(longlong *)OnSharedShaderMapResourceExplicitRelease._8_8_ + 0x68))
                (OnSharedShaderMapResourceExplicitRelease._8_8_,this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  return;
}

// ReleaseResource @ 145e6ad00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderMapResource_SharedCode::ReleaseResource(FShaderMapResource_SharedCode *this)

{
  FShaderMapResource_SharedCode *local_res8 [4];
  
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if ((this->bEntireShaderMapPreloaded != false) ||
     (this->LibraryInstance != (FShaderLibraryInstance *)0x0)) {
    local_res8[0] = this;
    `FShaderMapResource_SharedCode::ReleaseResource'::__l2::<lambda_1>::operator()(local_res8);
  }
  return;
}

// TryRelease @ 145e70f00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FShaderMapResource_SharedCode::TryRelease(FShaderMapResource_SharedCode *this)

{
  uint uVar1;
  FShaderLibraryInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  pFVar2 = this->LibraryInstance;
  if (pFVar2 != (FShaderLibraryInstance *)0x0) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar2->ResourceLock);
    if ((int)this->_padding_ == 0) {
      uVar1 = this->ShaderMapIndex;
      uVar6 = 0;
      if ((int)uVar1 < (pFVar2->Resources).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if (*(FShaderMapResource_SharedCode **)
           ((pFVar2->Resources).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) != this) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resources[ShaderMapIndex] == Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderCodeLibrary.cpp"
                           ,0x497,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      uVar6 = 0;
      if ((int)uVar1 < (pFVar2->Resources).ArrayNum) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      *(undefined8 *)((pFVar2->Resources).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->ResourceLock);
      return true;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->ResourceLock);
  }
  return false;
}

// operator() @ 1504dd760

bool __thiscall
`FShaderMapResource_SharedCode::ReleaseResource'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_482300135573814983>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 8);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_482300135573814983>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FShaderMapResource_SharedCode::ReleaseResource(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504dd7d5;
    }
  }
  bVar2 = false;
LAB_1504dd7d5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1504dd810

bool __thiscall
`FShaderMapResource_SharedCode::ReleaseRHI'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_482300135573813828>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_482300135573813828>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504dd890

bool __thiscall
`FShaderMapResource_SharedCode::ReleaseRHI'::__l29::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_482300135573813777>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 8);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_482300135573813777>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504dd90c;
    }
  }
  bVar2 = false;
LAB_1504dd90c:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

