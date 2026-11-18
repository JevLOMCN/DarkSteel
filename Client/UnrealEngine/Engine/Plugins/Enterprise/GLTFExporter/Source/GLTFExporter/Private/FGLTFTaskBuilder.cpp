// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 4

// FGLTFTaskBuilder @ 14e5d2e90

FGLTFTaskBuilder * __thiscall
FGLTFTaskBuilder::FGLTFTaskBuilder
          (FGLTFTaskBuilder *this,FString *param_1,UGLTFExportOptions *param_2)

{
  FGLTFBuilder::FGLTFBuilder((FGLTFBuilder *)this,param_1,param_2);
  this->PriorityIndexLock = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->TasksByPriority = 0;
  *(undefined8 *)&(this->TasksByPriority).field_0x8 = 0;
  *(undefined8 *)&(this->TasksByPriority).field_0x20 = 0;
  *(undefined4 *)&(this->TasksByPriority).field_0x28 = 0;
  *(undefined4 *)&(this->TasksByPriority).field_0x2c = 0x80;
  *(undefined4 *)&(this->TasksByPriority).field_0x34 = 0;
  *(undefined4 *)&(this->TasksByPriority).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TasksByPriority).field_0x40 = 0;
  *(undefined4 *)&(this->TasksByPriority).field_0x48 = 0;
  return this;
}

// GetPriorityMessageFormat @ 14e5fc330

FText * __cdecl
FGLTFTaskBuilder::GetPriorityMessageFormat(FText *__return_storage_ptr__,EGLTFTaskPriority param_1)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  if (param_1 == Animation) {
    pwVar5 = L"Animation(s): {0}";
    pwVar4 = L"AnimationTaskMessage";
  }
  else if (param_1 == Mesh) {
    pwVar5 = L"Mesh(es): {0}";
    pwVar4 = L"MeshTaskMessage";
  }
  else if (param_1 == Material) {
    pwVar5 = L"Material(s): {0}";
    pwVar4 = L"MaterialTaskMessage";
  }
  else {
    if (param_1 != Texture) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Builders\\GLTFTaskBuilder.cpp"
                         ,0x54,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FText *)(*pcVar1)();
        return pFVar3;
      }
      FText::FText(__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    pwVar5 = L"Texture(s): {0}";
    pwVar4 = L"TextureTaskMessage";
  }
  FText::AsLocalizable_Advanced_LocText(__return_storage_ptr__,L"GLTFExporter",pwVar4,pwVar5);
  return __return_storage_ptr__;
}

// ProcessSlowTasks @ 14e609500

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FGLTFTaskBuilder::ProcessSlowTasks(FGLTFTaskBuilder *this,FFeedbackContext *param_1)

{
  TMap<EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined8 *puVar1;
  undefined1 *puVar2;
  ITextData *pIVar3;
  code *pcVar4;
  longlong lVar5;
  float fVar6;
  bool bVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FString *pFVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  uint uVar17;
  longlong *plVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1e8;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1d8;
  FText local_1c8;
  undefined1 local_1b8 [8];
  FText local_1b0;
  FText local_1a0;
  FTextFormat local_190;
  FText local_180;
  FTextFormat local_170;
  FText local_160;
  FFormatArgumentValue local_150;
  FFormatArgumentValue local_130;
  void *local_110 [3];
  FSlowTask local_f8;
  FText local_98;
  FTextFormat local_88;
  FTextFormat local_78 [3];
  ulonglong uVar18;
  
  fVar6 = __real_3f800000;
  this_00 = &this->TasksByPriority;
  uVar18 = 0;
  do {
    this->PriorityIndexLock = (int)uVar18;
    if (*(int *)&(this->TasksByPriority).field_0x8 != *(int *)&(this->TasksByPriority).field_0x34) {
      puVar2 = *(undefined1 **)&(this->TasksByPriority).field_0x40;
      puVar12 = &(this->TasksByPriority).field_0x38;
      if (puVar2 != (undefined1 *)0x0) {
        puVar12 = puVar2;
      }
      iVar14 = *(int *)(puVar12 +
                       ((ulonglong)(*(int *)&(this->TasksByPriority).field_0x48 - 1) & uVar18 & 0xff
                       ) * 4);
      if (iVar14 != -1) {
LAB_14e6095a1:
        pcVar11 = (char *)(*(longlong *)this_00 + (longlong)iVar14 * 0x20);
        if (*pcVar11 != (char)uVar18) break;
        plVar19 = (longlong *)(pcVar11 + 8);
        if (pcVar11 == (char *)0x0) {
          plVar19 = (longlong *)0x0;
        }
        if (plVar19 != (longlong *)0x0) {
          if (param_1 == (FFeedbackContext *)0x0) {
            puVar13 = (undefined8 *)*plVar19;
            lVar5 = plVar19[1];
            puVar1 = puVar13 + (int)lVar5;
            while( true ) {
              if ((int)plVar19[1] != (int)lVar5) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_res20);
              }
              if (puVar13 == puVar1) break;
              (**(code **)(*(longlong *)*puVar13 + 0x10))();
              puVar13 = puVar13 + 1;
            }
          }
          else {
            if ((char)uVar18 == '\0') {
              pwVar16 = L"Animation(s): {0}";
              pwVar15 = L"AnimationTaskMessage";
LAB_14e609661:
              FText::AsLocalizable_Advanced_LocText(&local_1c8,L"GLTFExporter",pwVar15,pwVar16);
            }
            else {
              iVar14 = (int)(uVar18 & 0xff);
              if (iVar14 == 1) {
                pwVar16 = L"Mesh(es): {0}";
                pwVar15 = L"MeshTaskMessage";
                goto LAB_14e609661;
              }
              if (iVar14 == 2) {
                pwVar16 = L"Material(s): {0}";
                pwVar15 = L"MaterialTaskMessage";
                goto LAB_14e609661;
              }
              if (iVar14 == 3) {
                pwVar16 = L"Texture(s): {0}";
                pwVar15 = L"TextureTaskMessage";
                goto LAB_14e609661;
              }
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!\"Enclosing block should never be called\"",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Builders\\GLTFTaskBuilder.cpp"
                                 ,0x54,L"");
              if (bVar7) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              FText::FText(&local_1c8);
            }
            lVar5 = plVar19[1];
            pFVar8 = FText::FText(&local_98);
            pFVar9 = FTextFormat::FTextFormat(&local_88,&local_1c8,Default);
            local_150.Type = Text;
            FText::FText((FText *)&local_150.TextValue,pFVar8);
            if ((local_150.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0xbd,
                                      L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                     ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1e8.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_1e8.AllocatorInstance,1,&local_1e8.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_1e8.AllocatorInstance.Data,&local_150,1);
            local_190.TextFormatData.Object = (pFVar9->TextFormatData).Object;
            local_190.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_190.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_190.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_180,&local_190,&local_1e8);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
            if ((FFormatArgumentValue *)local_1e8.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_1e8.AllocatorInstance.Data);
            }
            if (local_150.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_150.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar3 = (pFVar8->TextData).Reference;
            if (pIVar3 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar3 + 0x10))();
            }
            FSlowTask::FSlowTask(&local_f8,(float)(int)lVar5,&local_180,true,param_1);
            FSlowTask::Initialize(&local_f8);
            if (local_180.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
            }
            FSlowTask::MakeDialog(&local_f8,false,false);
            puVar13 = (undefined8 *)*plVar19;
            lVar5 = plVar19[1];
            puVar1 = puVar13 + (int)lVar5;
            while( true ) {
              if ((int)plVar19[1] != (int)lVar5) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,int,0>
                ::operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              if (puVar13 == puVar1) break;
              pFVar10 = (FString *)
                        (**(code **)(*(longlong *)*puVar13 + 8))((longlong *)*puVar13,local_110);
              FText::FromString(&local_1a0,pFVar10);
              if (local_110[0] != (void *)0x0) {
                FMemory::Free(local_110[0]);
              }
              local_1b0.TextData.Reference = local_1a0.TextData.Reference;
              if (local_1a0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1a0.TextData.Reference + 8))
                          (local_1a0.TextData.Reference,local_1b8);
              }
              local_1b0.Flags = local_1a0.Flags;
              pFVar9 = FTextFormat::FTextFormat(local_78,&local_1c8,Default);
              local_130.Type = Text;
              FText::FText((FText *)&local_130.TextValue,&local_1b0);
              if ((local_130.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
                 && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsSet()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                        ,0xbd,
                                        L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                       ), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1d8.ArrayNum = 1;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,1,0,&local_1d8.AllocatorInstance,1,&local_1d8.ArrayMax);
              ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                        (local_1d8.AllocatorInstance.Data,&local_130,1);
              local_170.TextFormatData.Object = (pFVar9->TextFormatData).Object;
              local_170.TextFormatData.SharedReferenceCount.ReferenceController =
                   (pFVar9->TextFormatData).SharedReferenceCount.ReferenceController;
              if (local_170.TextFormatData.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_170.TextFormatData.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_170.TextFormatData.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FText::Format(&local_160,&local_170,&local_1d8);
              DestructItems<FFormatArgumentValue,int>
                        ((FFormatArgumentValue *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum
                        );
              if ((FFormatArgumentValue *)local_1d8.AllocatorInstance.Data !=
                  (FFormatArgumentValue *)0x0) {
                FMemory::Free(local_1d8.AllocatorInstance.Data);
              }
              if (local_130.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)
              {
                (**(code **)((longlong)
                             *(ITextData *)
                              local_130.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
                          ();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((pFVar9->TextFormatData).SharedReferenceCount.ReferenceController);
              if (local_1b0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1b0.TextData.Reference + 0x10))();
              }
              FSlowTask::EnterProgressFrame(&local_f8,fVar6,&local_160);
              (**(code **)(*(longlong *)*puVar13 + 0x10))();
              if (local_160.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
              }
              if (local_1a0.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_1a0.TextData.Reference + 0x10))();
              }
              puVar13 = puVar13 + 1;
            }
            FSlowTask::Destroy(&local_f8);
            if (local_f8.FrameMessage.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f8.FrameMessage.TextData.Reference + 0x10))();
            }
            if (local_f8.DefaultMessage.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f8.DefaultMessage.TextData.Reference + 0x10))();
            }
            if (local_1c8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
            }
          }
        }
      }
    }
LAB_14e609a01:
    uVar17 = (int)uVar18 + 1;
    uVar18 = (ulonglong)uVar17;
    if (3 < (int)uVar17) {
      bVar7 = 1 < *(int *)&(this->TasksByPriority).field_0x48;
      if (!bVar7) {
        TSet<TTuple<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this_00,0,*(int *)&(this->TasksByPriority).field_0x8);
      *(undefined4 *)&(this->TasksByPriority).field_0x8 = 0;
      if (*(int *)&(this->TasksByPriority).field_0xc != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->TasksByPriority).field_0xc
                  );
      }
      *(undefined4 *)&(this->TasksByPriority).field_0x34 = 0;
      *(undefined4 *)&(this->TasksByPriority).field_0x30 = 0xffffffff;
      iVar14 = *(int *)&(this->TasksByPriority).field_0x2c;
      *(undefined4 *)&(this->TasksByPriority).field_0x28 = 0;
      if ((iVar14 < 0) || (0x80 < iVar14)) {
        *(undefined4 *)&(this->TasksByPriority).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TasksByPriority).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->TasksByPriority).field_0x48 = 1;
        TSet<TTuple<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      this->PriorityIndexLock = -1;
      return;
    }
  } while( true );
  iVar14 = *(int *)(pcVar11 + 0x18);
  if (iVar14 == -1) goto LAB_14e609a01;
  goto LAB_14e6095a1;
}

// ScheduleSlowTask @ 14e613110

bool __thiscall
FGLTFTaskBuilder::ScheduleSlowTask
          (FGLTFTaskBuilder *this,
          TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_> param_1)

{
  TMap<EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  byte local_res10 [8];
  int local_res18 [2];
  byte *local_res20;
  
  local_res10[0] = *(byte *)((param_1.Ptr)->_padding_ + 8);
  if (local_res10[0] < 4) {
    if (this->PriorityIndexLock < (int)(uint)local_res10[0]) {
      this_00 = &this->TasksByPriority;
      if (*(int *)&(this->TasksByPriority).field_0x8 != *(int *)&(this->TasksByPriority).field_0x34)
      {
        puVar7 = *(undefined1 **)&(this->TasksByPriority).field_0x40;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = &(this->TasksByPriority).field_0x38;
        }
        iVar5 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->TasksByPriority).field_0x48 - 1) &
                                  (ulonglong)local_res10[0]) * 4);
        if (iVar5 != -1) {
          do {
            pbVar6 = (byte *)((longlong)iVar5 * 0x20 + *(longlong *)this_00);
            if (*pbVar6 == local_res10[0]) {
              if (pbVar6 != (byte *)0x0) goto LAB_14e6131ff;
              break;
            }
            iVar5 = *(int *)(pbVar6 + 0x18);
          } while (iVar5 != -1);
        }
      }
      local_res20 = local_res10;
      TSet<TTuple<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_EGLTFTaskPriority,TArray<TUniquePtr<FGLTFDelayedTask,TDefaultDelete<FGLTFDelayedTask>_>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EGLTFTaskPriority_const_&>_>
                (this_00,(uint)local_res18,
                 (TKeyInitializer<EGLTFTaskPriority_const_&> *)(ulonglong)local_res10[0],
                 (bool *)&local_res20);
      pbVar6 = (byte *)((longlong)local_res18[0] * 0x20 + *(longlong *)this_00);
LAB_14e6131ff:
      if (((*(FGLTFDelayedTask **)(pbVar6 + 8) <= param_1.Ptr) &&
          (param_1.Ptr <
           (FGLTFDelayedTask *)
           (&(*(FGLTFDelayedTask **)(pbVar6 + 8))->_padding_ + *(int *)(pbVar6 + 0x14)))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      iVar5 = *(int *)(pbVar6 + 0x10);
      if (iVar5 == *(int *)(pbVar6 + 0x14)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(pbVar6 + 8),(int *)(pbVar6 + 0x14));
      }
      *(int *)(pbVar6 + 0x10) = iVar5 + 1;
      *(longlong *)(((ForAnyElementType *)(pbVar6 + 8))->Data + (longlong)iVar5 * 8) =
           (param_1.Ptr)->_padding_;
      (param_1.Ptr)->_padding_ = 0;
      return true;
    }
    iVar5 = 0x43;
  }
  else {
    iVar5 = 0x3d;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Enterprise\\GLTFExporter\\Source\\GLTFExporter\\Private\\Builders\\GLTFTaskBuilder.cpp"
                     ,iVar5,L"");
  if (!bVar3) {
    puVar1 = (undefined8 *)(param_1.Ptr)->_padding_;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

