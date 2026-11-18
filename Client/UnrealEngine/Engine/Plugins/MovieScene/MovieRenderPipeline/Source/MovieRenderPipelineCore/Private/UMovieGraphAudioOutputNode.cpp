// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 16

// StaticClass @ 14dc99e50

UClass * __cdecl UMovieGraphAudioOutputNode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphAudioOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphAudioOutputNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphAudioOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphAudioOutputNode>,local_res8,
               UMovieGraphFileOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton;
}

// UMovieGraphAudioOutputNode @ 14dcaed50

UMovieGraphAudioOutputNode * __thiscall
UMovieGraphAudioOutputNode::UMovieGraphAudioOutputNode
          (UMovieGraphAudioOutputNode *this,FVTableHelper *param_1)

{
  UMovieGraphFileOutputNode::UMovieGraphFileOutputNode((UMovieGraphFileOutputNode *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieGraphAudioOutputNode__6B_;
  (this->CachedPipeline).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EvaluatedGraph).field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  return this;
}

// UMovieGraphAudioOutputNode @ 14dcaed90

UMovieGraphAudioOutputNode * __thiscall
UMovieGraphAudioOutputNode::UMovieGraphAudioOutputNode(UMovieGraphAudioOutputNode *this)

{
  UMovieGraphNode::UMovieGraphNode((UMovieGraphNode *)this);
  this->_padding_ = (longlong)&___7UMovieGraphFileOutputNode__6B_;
  ::FString::FString((FString *)&this->_padding_,"{sequence_name}.{layer_name}.{frame_number}");
  this->_padding_ = (longlong)&___7UMovieGraphAudioOutputNode__6B_;
  (this->CachedPipeline).WeakPtr = (FWeakObjectPtr)0x0;
  (this->EvaluatedGraph).field0_0x0.DebugPtr = (UMovieGraphEvaluatedConfig *)0x0;
  ::FString::operator=((FString *)&this->_padding_,L"{sequence_name}");
  return this;
}

// ~UMovieGraphAudioOutputNode @ 14dcb2630

void __thiscall
UMovieGraphAudioOutputNode::~UMovieGraphAudioOutputNode(UMovieGraphAudioOutputNode *this)

{
  this->_padding_ = (longlong)&___7UMovieGraphAudioOutputNode__6B_;
  UMovieGraphFileOutputNode::~UMovieGraphFileOutputNode((UMovieGraphFileOutputNode *)this);
  return;
}

// BuildNewProcessCommandLineArgsImpl @ 14dcbc920

/* WARNING: Removing unreachable block (ram,0x00014dcbca03) */

void __thiscall
UMovieGraphAudioOutputNode::BuildNewProcessCommandLineArgsImpl
          (UMovieGraphAudioOutputNode *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  ::FString::FString(&local_18,"-deterministicaudio");
  pFVar4 = (param_2->AllocatorInstance).Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_18) &&
      ((FScriptContainerElement *)&local_18 < pFVar4 + (longlong)param_2->ArrayMax * 0x10)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 == param_2->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar3 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  return;
}

// GenerateFinalAudioData @ 14dcc8f90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieGraphAudioOutputNode::GenerateFinalAudioData
          (UMovieGraphAudioOutputNode *this,
          TArray<UMovieGraphAudioOutputNode::FFinalAudioData,TSizedDefaultAllocator<32>_> *param_1)

{
  TWeakObjectPtr<UMovieGraphPipeline,FWeakObjectPtr> *this_00;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 *pTVar1;
  float fVar2;
  TObjectPtr<UMoviePipelineExecutorShot> TVar3;
  void *_Src;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  UObject *pUVar13;
  ulong64 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float *pfVar22;
  FWeakObjectPtr *this_01;
  FGuid *pFVar23;
  FScriptContainerElement *pFVar24;
  uint local_res8;
  undefined1 local_res18 [16];
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  ForAnyElementType local_138;
  int local_130 [3];
  int local_124;
  int local_120;
  int local_11c;
  float local_118;
  FMovieGraphRenderDataIdentifier local_108;
  FString local_b8;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong *local_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80 [9];
  
  this_00 = &this->CachedPipeline;
  local_res18._8_8_ = this_00;
  pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  uVar17 = *(uint *)(pUVar13 + 0xb);
  pUVar13 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  uVar15 = 0;
  if ((int)uVar17 < *(int *)(pUVar13 + 8)) {
    uVar15 = ~uVar17 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar9.Data = UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  pTVar1 = (TObjectPtr<UMoviePipelineExecutorShot>_u_0 *)
           (*(longlong *)&pUVar13[7].field_0x20 + (longlong)(int)uVar17 * 8);
  lVar18 = (longlong)UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum;
  local_a0 = UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum;
  if (UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 0) {
    local_9c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum,0,&local_a8,
               UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum,&local_9c);
    memcpy(local_a8.Data,FVar9.Data,lVar18 * 2);
  }
  TVar3.field0_0x0 = (TObjectPtr<UMoviePipelineExecutorShot>_u_0)pTVar1->DebugPtr;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = *(int *)((longlong)TVar3.field0_0x0 + 0x48);
  lVar18 = (longlong)local_140;
  _Src = *(void **)((longlong)TVar3.field0_0x0 + 0x40);
  if (local_140 == 0) {
    local_13c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_140,0,&local_148,local_140,&local_13c);
    memcpy(local_148.Data,_Src,lVar18 * 2);
  }
  FVar9.Data = UMovieGraphNode::GlobalsPinNameString.Data.AllocatorInstance.Data;
  lVar18 = (longlong)UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum;
  local_108.RootBranchName = UMovieGraphNode::GlobalsPinName;
  local_108.LayerName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.LayerName.Data.ArrayNum = UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum;
  if (UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum == 0) {
    local_108.LayerName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_108.LayerName,
               UMovieGraphNode::GlobalsPinNameString.Data.ArrayNum,
               &local_108.LayerName.Data.ArrayMax);
    memcpy(local_108.LayerName.Data.AllocatorInstance.Data,FVar9.Data,lVar18 * 2);
  }
  FVar9.Data = RendererName.Data.AllocatorInstance.Data;
  lVar18 = (longlong)RendererName.Data.ArrayNum;
  local_108.RendererName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.RendererName.Data.ArrayNum = RendererName.Data.ArrayNum;
  if (RendererName.Data.ArrayNum == 0) {
    local_108.RendererName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,RendererName.Data.ArrayNum,0,(ForAnyElementType *)&local_108.RendererName,
               RendererName.Data.ArrayNum,&local_108.RendererName.Data.ArrayMax);
    memcpy(local_108.RendererName.Data.AllocatorInstance.Data,FVar9.Data,lVar18 * 2);
  }
  iVar11 = local_140;
  FVar9.Data = local_148.Data;
  local_108.SubResourceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.SubResourceName.Data.ArrayNum = 0;
  local_108.SubResourceName.Data.ArrayMax = 0;
  local_108.CameraName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.CameraName.Data.ArrayNum = local_140;
  if (local_140 == 0) {
    local_108.CameraName.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_140,0,(ForAnyElementType *)&local_108.CameraName,local_140,
               &local_108.CameraName.Data.ArrayMax);
    memcpy(local_108.CameraName.Data.AllocatorInstance.Data,FVar9.Data,(longlong)iVar11 * 2);
  }
  GenerateOutputPath(this,&local_b8,&local_108,
                     (TObjectPtr<UMoviePipelineExecutorShot> *)&pTVar1->ObjectPtr);
  this_01 = &(this->CachedPipeline).WeakPtr;
  pUVar13 = FWeakObjectPtr::Get(this_01);
  fVar8 = __real_46fffe00;
  fVar7 = __real_bf800000;
  fVar6 = __real_3f800000;
  local_res8 = 0;
  local_90 = (longlong *)(*(longlong *)(pUVar13 + 5) + 0x38);
  iVar11 = *(int *)(*(longlong *)(pUVar13 + 5) + 0x40);
  if (0 < iVar11) {
    local_98 = 0;
    do {
      lVar18 = local_98;
      uVar20 = 0;
      uVar17 = 0;
      if ((int)local_res8 < iVar11) {
        uVar17 = ~local_res8 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar23 = (FGuid *)(lVar18 + *local_90);
      uVar14 = CityHash64((char *)pFVar23,0x10);
      iVar11 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                         (&AlreadyWrittenSegments,(uint)uVar14,pFVar23);
      if (iVar11 == -1) {
        TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                  (&AlreadyWrittenSegments,(FGuid *)local_res18,(bool *)pFVar23);
        iVar11 = param_1->ArrayNum;
        uVar17 = 0;
        uVar19 = uVar20;
        uVar21 = uVar20;
        if (0 < iVar11) {
          do {
            uVar12 = (uint)uVar19;
            uVar15 = uVar17;
            if ((int)uVar12 < iVar11) {
              uVar15 = ~uVar12 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar24 = (param_1->AllocatorInstance).Data;
            iVar11 = *(int *)(pFVar24 + uVar21 + 8);
            if (iVar11 == local_b8.Data.ArrayNum) {
              if (1 < iVar11) {
                iVar11 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(pFVar24 + uVar21),
                                    (wchar_t *)local_b8.Data.AllocatorInstance.Data);
                bVar10 = iVar11 == 0;
                goto LAB_14dcc93b5;
              }
              iVar11 = param_1->ArrayNum;
LAB_14dcc93d9:
              uVar15 = uVar17;
              if ((int)uVar12 < iVar11) {
                uVar15 = ~uVar12 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar24 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x88;
              this_01 = (FWeakObjectPtr *)local_res18._8_8_;
              if (pFVar24 != (FScriptContainerElement *)0x0) goto LAB_14dcc9577;
              break;
            }
            bVar10 = iVar11 + local_b8.Data.ArrayNum == 1;
LAB_14dcc93b5:
            iVar11 = param_1->ArrayNum;
            if (bVar10) goto LAB_14dcc93d9;
            uVar19 = (ulonglong)(uVar12 + 1);
            uVar21 = uVar21 + 0x88;
            this_01 = (FWeakObjectPtr *)local_res18._8_8_;
          } while ((int)(uVar12 + 1) < iVar11);
        }
        iVar11 = param_1->ArrayNum;
        if (iVar11 == param_1->ArrayMax) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x888,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar11 + 1;
        DefaultConstructItems<UMovieGraphAudioOutputNode::FFinalAudioData,int>
                  ((param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x88,1);
        uVar15 = param_1->ArrayNum - 1;
        if ((int)uVar15 < param_1->ArrayNum) {
          uVar17 = ~uVar15 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar9.Data = local_b8.Data.AllocatorInstance.Data;
        pFVar24 = (param_1->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x88;
        if (pFVar24 != (FScriptContainerElement *)&local_b8) {
          pFVar5 = pFVar24 + 0xc;
          iVar11 = *(int *)pFVar5;
          iVar16 = local_b8.Data.ArrayNum;
          *(int *)&pFVar24[8].field_0x0 = iVar16;
          if ((iVar16 == 0) && (iVar11 == 0)) {
            *(int *)pFVar5 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar16,iVar11,(ForAnyElementType *)pFVar24,iVar16,(int *)pFVar5);
            if (iVar16 != 0) {
              memcpy(*(void **)&pFVar24->field_0x0,FVar9.Data,(longlong)iVar16 * 2);
            }
          }
        }
        pUVar13 = FWeakObjectPtr::Get(this_01);
        *(undefined4 *)&pFVar24[0x38].field_0x0 = *(undefined4 *)(pUVar13 + 0xb);
        *(FName *)(pFVar24 + 0x40) = local_108.RootBranchName;
        ::FString::operator=((FString *)(pFVar24 + 0x48),&local_108.LayerName);
        ::FString::operator=((FString *)(pFVar24 + 0x58),&local_108.RendererName);
        ::FString::operator=((FString *)(pFVar24 + 0x68),&local_108.SubResourceName);
        ::FString::operator=((FString *)(pFVar24 + 0x78),&local_108.CameraName);
LAB_14dcc9577:
        QueryPerformanceCounter(&local_88);
        local_130[2] = pFVar23[0x14].A;
        local_120 = (int)(float)pFVar23[0x13].A;
        pfVar22 = *(float **)&pFVar23[0x13].C;
        local_11c = (int)(float)pFVar23[0x13].B;
        local_138.Data = (FScriptContainerElement *)0x0;
        local_130[0] = 0;
        local_130[1] = 0;
        local_124 = local_130[2] / local_120;
        local_118 = (float)local_124 / (float)local_11c;
        if (local_130[2] < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_130[2]);
        }
        if (0 < local_130[2]) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_130[2],&local_138,0,local_130 + 1);
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_130[2],&local_138,local_130,local_130 + 1);
        uVar19 = uVar20;
        if (0 < local_130[2]) {
          do {
            fVar2 = *pfVar22;
            if (fVar6 <= *pfVar22) {
              fVar2 = fVar6;
            }
            uVar17 = (uint)uVar20;
            if (fVar2 <= fVar7) {
              fVar2 = fVar7;
            }
            uVar15 = 0;
            if ((int)uVar17 < local_130[0]) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar20 = (ulonglong)(uVar17 + 1);
            pfVar22 = pfVar22 + 1;
            *(short *)(local_138.Data + uVar19) = (short)(int)(fVar2 * fVar8);
            uVar19 = uVar19 + 2;
          } while ((int)(uVar17 + 1) < local_130[2]);
        }
        FVar9.Data = local_138.Data;
        uVar17 = pFVar23[0x14].A;
        fVar2 = (float)pFVar23[0x13].B;
        *(int *)&pFVar24[0x28].field_0x0 = (int)(float)pFVar23[0x13].A;
        *(int *)(pFVar24 + 0x2c) = (int)fVar2;
        uVar12 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (2,2,uVar17,(ForAnyElementType *)(pFVar24 + 0x10),(int *)(pFVar24 + 0x18)
                            ,(int *)(pFVar24 + 0x1c));
        uVar15 = 0;
        if ((int)uVar12 < *(int *)&pFVar24[0x18].field_0x0) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        memcpy((void *)(*(longlong *)&pFVar24[0x10].field_0x0 + (longlong)(int)uVar12 * 2),
               FVar9.Data,(longlong)(int)uVar17 * 2);
        *(uint *)&pFVar24[0x20].field_0x0 = *(int *)&pFVar24[0x20].field_0x0 + uVar17;
        iVar11 = *(int *)&pFVar24[0x20].field_0x0 / *(int *)&pFVar24[0x28].field_0x0;
        *(int *)(pFVar24 + 0x24) = iVar11;
        *(float *)&pFVar24[0x30].field_0x0 = (float)iVar11 / (float)*(int *)(pFVar24 + 0x2c);
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          QueryPerformanceCounter(local_80);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        this_01 = (FWeakObjectPtr *)local_res18._8_8_;
        if (local_138.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data);
          this_01 = (FWeakObjectPtr *)local_res18._8_8_;
        }
      }
      local_res8 = local_res8 + 1;
      local_98 = local_98 + 0x148;
      iVar11 = (int)local_90[1];
    } while ((int)local_res8 < iVar11);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_108.CameraName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.CameraName.Data.AllocatorInstance.Data);
  }
  if (local_108.SubResourceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.SubResourceName.Data.AllocatorInstance.Data);
  }
  if (local_108.RendererName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.RendererName.Data.AllocatorInstance.Data);
  }
  if (local_108.LayerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.LayerName.Data.AllocatorInstance.Data);
  }
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// GenerateOutputPath @ 14dcc9d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __thiscall
UMovieGraphAudioOutputNode::GenerateOutputPath
          (UMovieGraphAudioOutputNode *this,FString *__return_storage_ptr__,
          FMovieGraphRenderDataIdentifier *param_1,TObjectPtr<UMoviePipelineExecutorShot> *param_2)

{
  UMovieGraphEvaluatedConfig *pUVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FName FVar5;
  bool bVar6;
  UMovieGraphGlobalOutputSettingNode *pUVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FString *pFVar10;
  longlong lVar11;
  undefined1 auStackY_2f8 [32];
  FString local_2c8;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_2b8;
  FString local_2a8;
  FString local_298;
  undefined1 local_288 [16];
  FString *local_278;
  FString *local_270;
  FString local_268;
  undefined1 local_258 [32];
  void *local_238;
  undefined4 local_230;
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  void *local_218;
  undefined4 local_210;
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  void *local_1c8;
  undefined4 local_1c0;
  FMovieGraphFilenameResolveParams local_1b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pUVar7 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     ((this->EvaluatedGraph).field0_0x0.DebugPtr,UMovieGraphNode::GlobalsPinName,
                      true,true);
  FVar5 = UMovieGraphNode::GlobalsPinName;
  pUVar1 = (this->EvaluatedGraph).field0_0x0.DebugPtr;
  pUVar8 = StaticClass();
  UMovieGraphEvaluatedConfig::GetSettingsForBranch(pUVar1,&local_2b8,pUVar8,FVar5,true,true);
  lVar11 = 0;
  if (local_2b8.ArrayNum < 1) {
    if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.AllocatorInstance.Data);
    }
  }
  else {
    lVar2 = *(longlong *)local_2b8.AllocatorInstance.Data;
    FMemory::Free(local_2b8.AllocatorInstance.Data);
    if (lVar2 != 0) {
      pUVar8 = StaticClass();
      iVar4 = (int)pUVar8->_padding_;
      if ((iVar4 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar4 * 8)
          == &pUVar8->_padding_)) {
        lVar11 = lVar2;
      }
    }
  }
  ::operator/(&local_2c8,&(pUVar7->OutputDirectory).Path,(FString *)(lVar11 + 0xb8));
  UE::MoviePipeline::ValidateOutputFormatString(&local_2c8,false,false,false);
  UE::MoviePipeline::RemoveFrameNumberFormatStrings(&local_2c8,true);
  FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams(&local_1b8);
  pUVar9 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  local_1b8.InitializationTime.Ticks = *(long64 *)&pUVar9[0xb].field_0x20;
  pUVar9 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  local_1b8.InitializationTimeOffset.Ticks = *(long64 *)&pUVar9[0xb].field_0x8;
  pUVar9 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  local_1b8.Job.field0_0x0 =
       (TObjectPtr<UMoviePipelineExecutorJob>_u_0)
       *(TObjectPtr<UMoviePipelineExecutorJob>_u_0 *)&pUVar9[5].field_0x18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1b8.Job.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorJob>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1b8.Job.field0_0x0);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((param_2->field0_0x0).DebugPtr != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_2->field0_0x0).DebugPtr);
  }
  local_1b8.Shot.field0_0x0.ObjectPtr.field0_0x0 = param_2->field0_0x0;
  ::FString::FString(&local_298,L"render_pass");
  local_288._0_8_ = &local_298;
  local_288._8_8_ = &RendererName;
  ::FString::FString(&local_2a8,L"ext");
  local_278 = &local_2a8;
  local_270 = &OutputExtension;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&local_1b8.FileNameFormatOverrides,2);
  pFVar10 = (FString *)local_288;
  do {
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString_const_&,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)&local_1b8.FileNameFormatOverrides,
               (FString *)(pFVar10->Data).AllocatorInstance.Data,
               *(FString **)&(pFVar10->Data).ArrayNum);
    pFVar10 = pFVar10 + 1;
  } while (pFVar10 != &local_268);
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->EvaluatedGraph).field0_0x0.DebugPtr,
     pUVar1 != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_1b8.EvaluatedConfig.field0_0x0 = (this->EvaluatedGraph).field0_0x0;
  local_1b8.RenderDataIdentifier.RootBranchName = param_1->RootBranchName;
  ::FString::operator=(&local_1b8.RenderDataIdentifier.LayerName,&param_1->LayerName);
  ::FString::operator=(&local_1b8.RenderDataIdentifier.RendererName,&param_1->RendererName);
  ::FString::operator=(&local_1b8.RenderDataIdentifier.SubResourceName,&param_1->SubResourceName);
  ::FString::operator=(&local_1b8.RenderDataIdentifier.CameraName,&param_1->CameraName);
  local_1b8.Version = (((param_2->field0_0x0).DebugPtr)->ShotInfo).VersionNumber;
  local_258._0_8_ = (FScriptContainerElement *)0x0;
  local_258._8_8_ = 0;
  local_238 = (void *)0x0;
  local_230 = 0;
  local_22c = 0x80;
  local_228 = 0xffffffff;
  local_224 = 0;
  local_218 = (void *)0x0;
  local_210 = 0;
  local_208._0_8_ = (FScriptContainerElement *)0x0;
  local_208._8_8_ = 0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1dc = 0x80;
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1c8 = (void *)0x0;
  local_1c0 = 0;
  UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
            (__return_storage_ptr__,&local_2c8,&local_1b8,(FMovieGraphResolveArgs *)local_258);
  bVar6 = FPaths::IsRelative(__return_storage_ptr__);
  if (bVar6) {
    pFVar10 = FPaths::ConvertRelativePathToFull(&local_268,__return_storage_ptr__);
    if (__return_storage_ptr__ != pFVar10) {
      pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data
      ;
      (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar10->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar10->Data).ArrayMax;
      (pFVar10->Data).ArrayNum = 0;
      (pFVar10->Data).ArrayMax = 0;
    }
    if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  local_1c0 = 0;
  if (local_1c8 != (void *)0x0) {
    FMemory::Free(local_1c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_208,0,local_208._8_4_);
  iVar4 = SUB84(local_208._8_8_,4);
  local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
  }
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1e0 = 0;
  if (0x80 < local_1dc) {
    local_1dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
  }
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
  }
  if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_208._0_8_);
  }
  local_210 = 0;
  if (local_218 != (void *)0x0) {
    FMemory::Free(local_218);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_258,0,local_258._8_4_);
  iVar4 = SUB84(local_258._8_8_,4);
  local_258._8_8_ = local_258._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_258,0,(int *)(local_258 + 0xc));
  }
  local_228 = 0xffffffff;
  local_224 = 0;
  local_230 = 0;
  if (0x80 < local_22c) {
    local_22c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_258 + 0x10),0);
  }
  if (local_238 != (void *)0x0) {
    FMemory::Free(local_238);
  }
  if ((FScriptContainerElement *)local_258._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_258._0_8_);
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_1b8);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetBranchRestriction @ 14dccab80

EMovieGraphBranchRestriction __thiscall
UMovieGraphAudioOutputNode::GetBranchRestriction(UMovieGraphAudioOutputNode *this)

{
  return Globals;
}

// GetPrivateStaticClass @ 14dcd15c0

UClass * __cdecl UMovieGraphAudioOutputNode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphAudioOutputNode",
               &Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton,
               StaticRegisterNativesUMovieGraphAudioOutputNode,0xd8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMovieGraphAudioOutputNode>,
               InternalVTableHelperCtorCaller<UMovieGraphAudioOutputNode>,local_res8,
               UMovieGraphFileOutputNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphAudioOutputNode.InnerSingleton;
}

// IsFinishedWritingToDiskImpl @ 14dcd71c0

bool __thiscall
UMovieGraphAudioOutputNode::IsFinishedWritingToDiskImpl(UMovieGraphAudioOutputNode *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 local_res10 [8];
  
  iVar2 = ActiveWriters.ArrayNum;
  pFVar1 = ActiveWriters.AllocatorInstance.Data + (longlong)ActiveWriters.ArrayNum * 8;
  FVar4.Data = ActiveWriters.AllocatorInstance.Data;
  while( true ) {
    if (ActiveWriters.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    if (*(FSoundWavePCMWriter **)FVar4.Data != (FSoundWavePCMWriter *)0x0) {
      bVar3 = Audio::FSoundWavePCMWriter::IsDone(*(FSoundWavePCMWriter **)FVar4.Data);
      if (!bVar3) {
        return false;
      }
    }
    FVar4.Data = FVar4.Data + 8;
  }
  return true;
}

// NeedsPerShotFlushing @ 14dcd8760

bool __thiscall UMovieGraphAudioOutputNode::NeedsPerShotFlushing(UMovieGraphAudioOutputNode *this)

{
  int iVar1;
  UMovieGraphGlobalOutputSettingNode *pUVar2;
  bool bVar3;
  FString local_18;
  
  pUVar2 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     ((this->EvaluatedGraph).field0_0x0.DebugPtr,UMovieGraphNode::GlobalsPinName,
                      true,true);
  ::operator/(&local_18,&(pUVar2->OutputDirectory).Path,(FString *)&this->_padding_);
  bVar3 = false;
  iVar1 = ::FString::Find(&local_18,L"{shot_name}",0xb,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    iVar1 = ::FString::Find(&local_18,L"{camera_name}",0xd,IgnoreCase,FromStart,-1);
    if (iVar1 == -1) goto LAB_14dcd87f7;
  }
  bVar3 = true;
LAB_14dcd87f7:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// OnAllFramesSubmittedImpl @ 14dcd8830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMovieGraphAudioOutputNode::OnAllFramesSubmittedImpl
          (UMovieGraphAudioOutputNode *this,UMovieGraphPipeline *param_1,
          TObjectPtr<UMovieGraphEvaluatedConfig> *param_2)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  UMovieGraphPipeline *local_res8;
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CachedPipeline).WeakPtr,(FObjectPtr)&local_res8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((param_2->field0_0x0).DebugPtr != (UMovieGraphEvaluatedConfig *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)(param_2->field0_0x0).DebugPtr);
  }
  (this->EvaluatedGraph).field0_0x0 = param_2->field0_0x0;
  pUVar3 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  iVar1 = *(int *)(pUVar3 + 0xb);
  pUVar3 = FWeakObjectPtr::Get(&(this->CachedPipeline).WeakPtr);
  if ((-1 < iVar1) && (iVar1 < *(int *)(pUVar3 + 8))) {
    bVar2 = NeedsPerShotFlushing(this);
    if (!bVar2) {
      StartAudioExport(this);
    }
  }
  return;
}

// OnAllShotFramesSubmittedImpl @ 14dcd8900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieGraphAudioOutputNode::OnAllShotFramesSubmittedImpl
          (UMovieGraphAudioOutputNode *this,UMovieGraphPipeline *param_1,
          UMoviePipelineExecutorShot *param_2,TObjectPtr<UMovieGraphEvaluatedConfig> *param_3,
          bool param_4)

{
  UMovieGraphTimeStepBase *pUVar1;
  bool bVar2;
  longlong lVar3;
  UMovieGraphPipeline *local_res8;
  undefined1 local_88 [128];
  
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieGraphPipeline *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->CachedPipeline).WeakPtr,(FObjectPtr)&local_res8);
  pUVar1 = (param_1->GraphTimeStepInstance).field0_0x0.DebugPtr;
  lVar3 = (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_88);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)(lVar3 + 0x40) != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)(lVar3 + 0x40));
  }
  (this->EvaluatedGraph).field0_0x0 = *(TObjectPtr<UMovieGraphEvaluatedConfig>_u_0 *)(lVar3 + 0x40);
  bVar2 = NeedsPerShotFlushing(this);
  if (bVar2) {
    StartAudioExport(this);
  }
  return;
}

// StartAudioExport @ 14dce4c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMovieGraphAudioOutputNode::StartAudioExport(UMovieGraphAudioOutputNode *this)

{
  int *piVar1;
  FFinalAudioData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  void *_Src;
  FFinalAudioData *pFVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  ENetMode EVar10;
  int iVar11;
  UObject *pUVar12;
  UWorld *this_00;
  FAudioDevice *pFVar13;
  FSoundWavePCMWriter *pFVar14;
  UPackage *pUVar15;
  FSoundWavePCMWriter *this_01;
  FSoundWavePCMWriter *this_02;
  longlong *plVar16;
  TConsoleVariableData<float> *this_03;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 *puVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  FFutureState *this_04;
  FWeakObjectPtr *this_05;
  float fVar24;
  undefined1 local_res10 [8];
  uint local_res18;
  FWeakObjectPtr *local_res20;
  FSoundWavePCMWriter *local_1d8;
  TArray<UMovieGraphAudioOutputNode::FFinalAudioData,TSizedDefaultAllocator<32>_> local_1d0;
  undefined8 local_1b8;
  FString FStack_1b0;
  void *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  longlong local_148;
  undefined4 local_140;
  undefined1 local_138 [24];
  ForAnyElementType local_120;
  int local_118;
  int local_114;
  ForAnyElementType local_110;
  int local_108;
  int local_104 [3];
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  ForAnyElementType local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined4 local_b0;
  FFinalAudioData *local_a8;
  FString local_a0;
  FString local_90;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined8 local_50;
  
  this_05 = &(this->CachedPipeline).WeakPtr;
  local_res20 = this_05;
  pUVar12 = FWeakObjectPtr::Get(this_05);
  this_00 = UEngine::GetWorldFromContextObject(GEngine,pUVar12,LogAndReturnNull);
  if (((((this_00 != (UWorld *)0x0) && (this_00->bAllowAudioPlayback != '\0')) &&
       (EVar10 = UWorld::InternalGetNetMode(this_00), EVar10 != NM_DedicatedServer)) &&
      (((pFVar13 = UWorld::GetAudioDeviceRaw(this_00), pFVar13 != (FAudioDevice *)0x0 &&
        (pTVar3 = pFVar13[1].ReverbPluginInterface.SharedReferenceCount.ReferenceController,
        pTVar3 != (TReferenceControllerBase<1> *)0x0)) &&
       (cVar7 = (**(code **)(pTVar3->_padding_ + 0xf8))(), cVar7 != '\0')))) ||
     (bVar8 = FAudioThread::IsUsingThreadedAudio(), !bVar8)) {
    if (ActiveWriters.ArrayMax < 0) {
      DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int>
                ((TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>
                  *)ActiveWriters.AllocatorInstance.Data,ActiveWriters.ArrayNum);
      ActiveWriters.ArrayNum = 0;
      if (ActiveWriters.ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&ActiveWriters.AllocatorInstance,0,&ActiveWriters.ArrayMax);
      }
    }
    else {
      DestructItems<TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>,int>
                ((TUniquePtr<Audio::FSoundWavePCMWriter,TDefaultDelete<Audio::FSoundWavePCMWriter>_>
                  *)ActiveWriters.AllocatorInstance.Data,ActiveWriters.ArrayNum);
      ActiveWriters.ArrayNum = 0;
    }
    pUVar12 = FWeakObjectPtr::Get(this_05);
    lVar20 = *(longlong *)(pUVar12 + 5);
    if ((*(int *)(lVar20 + 0x50) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AudioState.ActiveSubmixes.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\Nodes\\MovieGraphAudioOutputNode.cpp"
                           ,0xe7,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)(lVar20 + 0x40) != 0) {
      local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.ArrayNum = 0;
      local_1d0.ArrayMax = 0;
      GenerateFinalAudioData(this,&local_1d0);
      uVar18 = (ulonglong)local_1d0.ArrayNum;
      local_res18 = local_1d0.ArrayNum;
      pFVar23 = local_1d0.AllocatorInstance.Data + 0x40;
      local_a8 = (FFinalAudioData *)(local_1d0.AllocatorInstance.Data + uVar18 * 0x88);
      uVar19 = uVar18;
      while( true ) {
        pFVar6 = local_a8;
        if ((int)uVar18 != (int)uVar19) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UMovieGraphAudioOutputNode::FFinalAudioData,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        pFVar2 = (FFinalAudioData *)(pFVar23 + -0x40);
        if (pFVar2 == pFVar6) break;
        FStack_1b0.Data.ArrayNum = 0;
        FStack_1b0.Data.ArrayMax = 0;
        local_1b8 = 0;
        FStack_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a0 = (void *)0x0;
        local_198 = 0;
        local_190 = 0;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_178.Data.ArrayNum = 0;
        local_178.Data.ArrayMax = 0;
        local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_168.Data.ArrayNum = 0;
        local_168.Data.ArrayMax = 0;
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
        local_148 = 0;
        local_140 = 0;
        pUVar12 = FWeakObjectPtr::Get(this_05);
        uVar22 = *(uint *)(pFVar23 + -8);
        uVar17 = 0;
        if ((int)uVar22 < *(int *)(pUVar12 + 8)) {
          uVar17 = ~uVar22 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1b8 = *(undefined8 *)(*(longlong *)&pUVar12[7].field_0x20 + (longlong)(int)uVar22 * 8)
        ;
        local_190 = *(undefined8 *)pFVar23;
        ::FString::operator=(&local_188,(FString *)(pFVar23 + 8));
        ::FString::operator=(&local_178,(FString *)(pFVar23 + 0x18));
        ::FString::operator=(&local_168,(FString *)(pFVar23 + 0x28));
        ::FString::operator=(&local_158,(FString *)(pFVar23 + 0x38));
        local_148 = this->_padding_;
        uVar22 = *(int *)(pFVar23 + -0x38) - 1;
        if (*(int *)(pFVar23 + -0x38) == 0) {
          uVar22 = 0;
        }
        ::FString::AssignRange
                  (&FStack_1b0,(wchar_t *)(pFVar2->FilePath).Data.AllocatorInstance.Data,uVar22);
        FPaths::GetBaseFilename(&local_90,(FString *)pFVar2,true);
        FPaths::GetPath(&local_a0,(FString *)pFVar2);
        pFVar14 = ::operator_new(0x90);
        if (pFVar14 == (FSoundWavePCMWriter *)0x0) {
          this_04 = (FFutureState *)&DAT_00000010;
          pFVar14 = (FSoundWavePCMWriter *)0x0;
        }
        else {
          (pFVar14->CurrentBuffer).RawPCMData.ArrayNum = 1;
          (pFVar14->CurrentBuffer).RawPCMData.ArrayMax = 1;
          (pFVar14->CurrentBuffer).RawPCMData.AllocatorInstance.Data =
               (FScriptContainerElement *)
               &
               ___7__TIntrusiveReferenceController_V__TFutureState__N___00_SharedPointerInternals__6B_
          ;
          (pFVar14->CurrentBuffer).NumSamples = 0;
          (pFVar14->CurrentBuffer).NumFrames = 0;
          (pFVar14->CurrentBuffer).NumChannels = 0;
          (pFVar14->CurrentBuffer).SampleRate = 0;
          *(undefined8 *)&(pFVar14->CurrentBuffer).SampleDuration = 0;
          pFVar14->CurrentSoundWave = (USoundWave *)0x0;
          pFVar14->CurrentState = Idle;
          *(undefined3 *)&pFVar14->field_0x31 = 0;
          pFVar14->_padding_ = 0;
          (pFVar14->AbsoluteFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->AbsoluteFilePath).Data.ArrayNum = 0;
          (pFVar14->AbsoluteFilePath).Data.ArrayMax = 0;
          *(undefined8 *)&pFVar14->bWasPreviouslyAddedToRoot = 0;
          (pFVar14->CurrentOperation).Ptr = (FAsyncTask<Audio::FAsyncSoundWavePCMWriteWorker> *)0x0;
          (pFVar14->SerializedWavData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar14->SerializedWavData).ArrayNum = 0;
          (pFVar14->SerializedWavData).ArrayMax = 0;
          pFVar14->Progress = 0;
          pFVar14->ChunkSize = 0;
          pFVar14->CurrentPackage = (UPackage *)0x0;
          pFVar14[1].CurrentBuffer.RawPCMData.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)&(pFVar14->CurrentBuffer).NumSamples,4000);
          (pFVar14->AbsoluteFilePath).Data.ArrayNum = 0;
          (pFVar14->AbsoluteFilePath).Data.ArrayMax = 0;
          pFVar14->Progress = 0;
          pFVar14->ChunkSize = 0;
          pUVar15 = (UPackage *)FGenericPlatformProcess::GetSynchEventFromPool(true);
          this_04 = (FFutureState *)&(pFVar14->CurrentBuffer).NumSamples;
          pFVar14->CurrentPackage = pUVar15;
          *(undefined1 *)&pFVar14[1].CurrentBuffer.RawPCMData.AllocatorInstance.Data = 0;
          if ((this_04 == (FFutureState *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          LOCK();
          piVar1 = &(pFVar14->CurrentBuffer).RawPCMData.ArrayNum;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        pUVar12 = FWeakObjectPtr::Get(local_res20);
        if ((this_04 == (FFutureState *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar5.Data = FStack_1b0.Data.AllocatorInstance.Data;
        if (pFVar14 != (FSoundWavePCMWriter *)0x0) {
          LOCK();
          piVar1 = &(pFVar14->CurrentBuffer).RawPCMData.ArrayNum;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        lVar20 = (longlong)FStack_1b0.Data.ArrayNum;
        puVar21 = &pUVar12[0xc].field_0x10;
        local_138._16_8_ = local_1b8;
        local_120.Data = (FScriptContainerElement *)0x0;
        local_118 = FStack_1b0.Data.ArrayNum;
        local_138._0_8_ = this_04;
        local_138._8_8_ = pFVar14;
        if (FStack_1b0.Data.ArrayNum == 0) {
          local_114 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,FStack_1b0.Data.ArrayNum,0,&local_120,FStack_1b0.Data.ArrayNum,&local_114);
          memcpy(local_120.Data,FVar5.Data,lVar20 * 2);
        }
        _Src = local_1a0;
        lVar20 = (longlong)(int)local_198;
        local_110.Data = (FScriptContainerElement *)0x0;
        local_108 = (int)local_198;
        if ((int)local_198 == 0) {
          local_104[0] = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_198,0,&local_110,(int)local_198,local_104);
          memcpy(local_110.Data,_Src,lVar20 * 2);
        }
        FVar5.Data = local_188.Data.AllocatorInstance.Data;
        lVar20 = (longlong)local_188.Data.ArrayNum;
        local_104[1] = (undefined4)local_190;
        local_104[2] = local_190._4_4_;
        local_f8.Data = (FScriptContainerElement *)0x0;
        local_f0 = local_188.Data.ArrayNum;
        if (local_188.Data.ArrayNum == 0) {
          local_ec = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_188.Data.ArrayNum,0,&local_f8,local_188.Data.ArrayNum,&local_ec);
          memcpy(local_f8.Data,FVar5.Data,lVar20 * 2);
        }
        FVar5.Data = local_178.Data.AllocatorInstance.Data;
        lVar20 = (longlong)local_178.Data.ArrayNum;
        local_e8.Data = (FScriptContainerElement *)0x0;
        local_e0 = local_178.Data.ArrayNum;
        if (local_178.Data.ArrayNum == 0) {
          local_dc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_178.Data.ArrayNum,0,&local_e8,local_178.Data.ArrayNum,&local_dc);
          memcpy(local_e8.Data,FVar5.Data,lVar20 * 2);
        }
        FVar5.Data = local_168.Data.AllocatorInstance.Data;
        lVar20 = (longlong)local_168.Data.ArrayNum;
        local_d8.Data = (FScriptContainerElement *)0x0;
        local_d0 = local_168.Data.ArrayNum;
        if (local_168.Data.ArrayNum == 0) {
          local_cc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_168.Data.ArrayNum,0,&local_d8,local_168.Data.ArrayNum,&local_cc);
          memcpy(local_d8.Data,FVar5.Data,lVar20 * 2);
        }
        FVar5.Data = local_158.Data.AllocatorInstance.Data;
        lVar20 = (longlong)local_158.Data.ArrayNum;
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0 = local_158.Data.ArrayNum;
        if (local_158.Data.ArrayNum == 0) {
          local_bc = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_158.Data.ArrayNum,0,&local_c8,local_158.Data.ArrayNum,&local_bc);
          memcpy(local_c8.Data,FVar5.Data,lVar20 * 2);
        }
        local_b8 = local_148;
        local_b0 = local_140;
        if (((*(undefined1 **)puVar21 <= local_138) &&
            (local_138 < *(undefined1 **)puVar21 + (longlong)*(int *)&pUVar12[0xc].field_0x1c * 0x90
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = *(int *)&pUVar12[0xc].field_0x18;
        if (iVar11 == *(int *)&pUVar12[0xc].field_0x1c) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x890,(ForAnyElementType *)puVar21,(int *)&pUVar12[0xc].field_0x1c);
        }
        *(int *)&pUVar12[0xc].field_0x18 = iVar11 + 1;
        TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>::
        TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData>
                  ((TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *)
                   (*(longlong *)puVar21 + (longlong)iVar11 * 0x90),
                   (TTuple<TFuture<bool>,UE::MovieGraph::FMovieGraphOutputFutureData> *)local_138);
        if (local_c8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data);
        }
        if (local_d8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data);
        }
        if (local_e8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data);
        }
        if (local_f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data);
        }
        if (local_110.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data);
        }
        if (local_120.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_138._8_8_);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        this_01 = ::operator_new(0x78);
        this_02 = (FSoundWavePCMWriter *)0x0;
        if (this_01 != (FSoundWavePCMWriter *)0x0) {
          this_02 = Audio::FSoundWavePCMWriter::FSoundWavePCMWriter(this_01,0x2000);
        }
        local_68 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
        local_50 = 0;
        local_60 = Audio::<lambda_26_>::<lambda_invoker_cdecl>;
        local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::
                      Call;
        local_1d8 = this_02;
        bVar8 = Audio::FSoundWavePCMWriter::BeginWriteToWavFile
                          (this_02,(TSampleBuffer<short> *)(pFVar23 + -0x30),&local_90,&local_a0,
                           (TFunction<void___cdecl(void)> *)local_78);
        if (this_04 == (FFutureState *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("State.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x283,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if ((this_04->bComplete != (TAtomic<bool>)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsComplete()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0xcd,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(bool *)this_04[1].Mutex.CriticalSection.Opaque1 = bVar8;
        FFutureState::MarkComplete(this_04);
        if (((ActiveWriters.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1d8) &&
            ((FScriptContainerElement *)&local_1d8 <
             ActiveWriters.AllocatorInstance.Data + (longlong)ActiveWriters.ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (ActiveWriters.ArrayNum == ActiveWriters.ArrayMax) {
          ActiveWriters.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&ActiveWriters.AllocatorInstance,&ActiveWriters.ArrayMax);
        }
        lVar20 = (longlong)ActiveWriters.ArrayNum;
        ActiveWriters.ArrayNum = ActiveWriters.ArrayNum + 1;
        *(FSoundWavePCMWriter **)(ActiveWriters.AllocatorInstance.Data + lVar20 * 8) = local_1d8;
        local_1d8 = (FSoundWavePCMWriter *)0x0;
        if (((this_04 != (FFutureState *)0x0) && (this_04->bComplete == (TAtomic<bool>)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("State->IsComplete()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x242,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar14);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (local_1a0 != (void *)0x0) {
          FMemory::Free(local_1a0);
        }
        if (FStack_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_1b0.Data.AllocatorInstance.Data);
        }
        uVar18 = local_1d0._8_8_ & 0xffffffff;
        pFVar23 = pFVar23 + 0x88;
        uVar19 = (ulonglong)local_res18;
        this_05 = local_res20;
      }
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar16 = (longlong *)
                (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                          (IConsoleManager::Singleton,L"MovieRenderPipeline.WaveOutput.WriteDelay",1
                          );
      if ((plVar16 != (longlong *)0x0) &&
         (this_03 = (TConsoleVariableData<float> *)(**(code **)(*plVar16 + 0x70))(plVar16),
         this_03 != (TConsoleVariableData<float> *)0x0)) {
        if (4 < (byte)LogMovieRenderPipeline._0_1_) {
          TConsoleVariableData<float>::GetValueOnGameThread(this_03);
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        }
        fVar24 = TConsoleVariableData<float>::GetValueOnGameThread(this_03);
        FWindowsPlatformProcess::Sleep(fVar24);
      }
      DestructItems<UMovieGraphAudioOutputNode::FFinalAudioData,int>
                ((FFinalAudioData *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
      if ((FFinalAudioData *)local_1d0.AllocatorInstance.Data != (FFinalAudioData *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// StaticRegisterNativesUMovieGraphAudioOutputNode @ 14dce62f0

void __cdecl UMovieGraphAudioOutputNode::StaticRegisterNativesUMovieGraphAudioOutputNode(void)

{
  return;
}

// UpdateTelemetry @ 14dcecdd0

void __thiscall
UMovieGraphAudioOutputNode::UpdateTelemetry
          (UMovieGraphAudioOutputNode *this,FMoviePipelineShotRenderTelemetry *param_1)

{
  param_1->bUsesAudio = true;
  return;
}

