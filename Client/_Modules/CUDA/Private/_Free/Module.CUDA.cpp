// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CUDA
// Functions: 9

// `dynamic_initializer_for_'LogCUDA'' @ 1411684c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCUDA__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogCUDA,L"LogCUDA",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCUDA__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCUDA'' @ 141168500

void __cdecl _dynamic_initializer_for__ModuleRegistrantCUDA__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CUDA";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CUDA",4);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCUDAModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 148cfba70

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

void * __thiscall FCUDAModule::_scalar_deleting_destructor_(FCUDAModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->contextMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->contextMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,CUctx_st_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,CUctx_st_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,CUctx_st_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->contextMap);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPostCUDAInit).field_0x8,*(int *)&(this->OnPostCUDAInit).field_0x10);
  pvVar1 = *(void **)&(this->OnPostCUDAInit).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostCUDAInit);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xac8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cfc020

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCUDAModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCUDAModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// CloseCudaLibrary @ 148cfd5a0

void __cdecl CloseCudaLibrary(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141aa6fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FreeLibrary(param_1);
  return;
}

// IMPLEMENT_MODULE_CUDA @ 148cfd5b0

void __cdecl IMPLEMENT_MODULE_CUDA(void)

{
  return;
}

// LoadCudaDriverFunctions @ 148cfd5c0

/* WARNING: Enum "CUdevice_attribute_enum": Some values do not have unique names */
/* WARNING: Enum "CUdevice_P2PAttribute_enum": Some values do not have unique names */

bool __cdecl LoadCudaDriverFunctions(void *param_1,CUDA_DRIVER_API_FUNCTION_LIST *param_2)

{
  _func___cdecl_cudaError_enum_cudaError_enum_char_ptr_ptr *p_Var1;
  _func___cdecl_cudaError_enum_uint *p_Var2;
  _func___cdecl_cudaError_enum_int_ptr *p_Var3;
  _func___cdecl_cudaError_enum_int_ptr_int *p_Var4;
  _func___cdecl_cudaError_enum_char_ptr_int_int *p_Var5;
  _func___cdecl_cudaError_enum_CUuuid_st_ptr_int *p_Var6;
  _func___cdecl_cudaError_enum_char_ptr_uint_ptr_int *p_Var7;
  _func___cdecl_cudaError_enum_ulong64_ptr_int *p_Var8;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUarray_format_enum_uint_int *p_Var9;
  _func___cdecl_cudaError_enum_int_ptr_CUdevice_attribute_enum_int *p_Var10;
  _func___cdecl_cudaError_enum_void_ptr_int_int *p_Var11;
  _func___cdecl_cudaError_enum_int_CUmemPoolHandle_st_ptr *p_Var12;
  _func___cdecl_cudaError_enum_CUmemPoolHandle_st_ptr_ptr_int *p_Var13;
  _func___cdecl_cudaError_enum_CUdevprop_st_ptr_int *p_Var14;
  _func___cdecl_cudaError_enum_int_ptr_int_ptr_int *p_Var15;
  _func___cdecl_cudaError_enum_CUctx_st_ptr_ptr_int *p_Var16;
  _func___cdecl_cudaError_enum_int *p_Var17;
  _func___cdecl_cudaError_enum_int_uint *p_Var18;
  _func___cdecl_cudaError_enum_int_uint_ptr_int_ptr *p_Var19;
  _func___cdecl_cudaError_enum_CUctx_st_ptr_ptr_uint_int *p_Var20;
  _func___cdecl_cudaError_enum_CUctx_st_ptr *p_Var21;
  _func___cdecl_cudaError_enum_CUctx_st_ptr_ptr *p_Var22;
  _func___cdecl_cudaError_enum_uint_ptr *p_Var23;
  _func___cdecl_cudaError_enum *p_Var24;
  _func___cdecl_cudaError_enum_CUlimit_enum_ulong64 *p_Var25;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUlimit_enum *p_Var26;
  _func___cdecl_cudaError_enum_CUfunc_cache_enum_ptr *p_Var27;
  _func___cdecl_cudaError_enum_CUfunc_cache_enum *p_Var28;
  _func___cdecl_cudaError_enum_CUsharedconfig_enum_ptr *p_Var29;
  _func___cdecl_cudaError_enum_CUsharedconfig_enum *p_Var30;
  _func___cdecl_cudaError_enum_CUctx_st_ptr_uint_ptr *p_Var31;
  _func___cdecl_cudaError_enum_int_ptr_int_ptr *p_Var32;
  _func___cdecl_cudaError_enum_CUctx_st_ptr_ptr_uint *p_Var33;
  _func___cdecl_cudaError_enum_CUmod_st_ptr_ptr_char_ptr *p_Var34;
  _func___cdecl_cudaError_enum_CUmod_st_ptr_ptr_void_ptr *p_Var35;
  _func___cdecl_cudaError_enum_CUmod_st_ptr_ptr_void_ptr_uint_CUjit_option_enum_ptr_void_ptr_ptr
  *p_Var36;
  _func___cdecl_cudaError_enum_CUmod_st_ptr *p_Var37;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_ptr_CUmod_st_ptr_char_ptr *p_Var38;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_ptr_CUmod_st_ptr_char_ptr *p_Var39;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_ptr_CUmod_st_ptr_char_ptr *p_Var40;
  _func___cdecl_cudaError_enum_CUsurfref_st_ptr_ptr_CUmod_st_ptr_char_ptr *p_Var41;
  _func___cdecl_cudaError_enum_uint_CUjit_option_enum_ptr_void_ptr_ptr_CUlinkState_st_ptr_ptr
  *p_Var42;
  _func___cdecl_cudaError_enum_CUlinkState_st_ptr_CUjitInputType_enum_void_ptr_ulong64_char_ptr_uint_CUjit_option_enum_ptr_void_ptr_ptr
  *p_Var43;
  _func___cdecl_cudaError_enum_CUlinkState_st_ptr_CUjitInputType_enum_char_ptr_uint_CUjit_option_enum_ptr_void_ptr_ptr
  *p_Var44;
  _func___cdecl_cudaError_enum_CUlinkState_st_ptr_void_ptr_ptr_ulong64_ptr *p_Var45;
  _func___cdecl_cudaError_enum_CUlinkState_st_ptr *p_Var46;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_ptr *p_Var47;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64 *p_Var48;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_ptr_ulong64_ulong64_uint *p_Var49;
  _func___cdecl_cudaError_enum_ulong64 *p_Var50;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_ptr_ulong64 *p_Var51;
  _func___cdecl_cudaError_enum_void_ptr_ptr_ulong64 *p_Var52;
  _func___cdecl_cudaError_enum_void_ptr *p_Var53;
  _func___cdecl_cudaError_enum_void_ptr_ptr_ulong64_uint *p_Var54;
  _func___cdecl_cudaError_enum_ulong64_ptr_void_ptr_uint *p_Var55;
  _func___cdecl_cudaError_enum_uint_ptr_void_ptr *p_Var56;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_uint *p_Var57;
  _func___cdecl_cudaError_enum_int_ptr_char_ptr *p_Var58;
  _func___cdecl_cudaError_enum_CUipcEventHandle_st_ptr_CUevent_st_ptr *p_Var59;
  _func___cdecl_cudaError_enum_CUevent_st_ptr_ptr_CUipcEventHandle_st *p_Var60;
  _func___cdecl_cudaError_enum_CUipcMemHandle_st_ptr_ulong64 *p_Var61;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUipcMemHandle_st_uint *p_Var62;
  _func___cdecl_cudaError_enum_void_ptr_ulong64_uint *p_Var63;
  _func___cdecl_cudaError_enum_ulong64_ulong64_ulong64 *p_Var64;
  _func___cdecl_cudaError_enum_ulong64_CUctx_st_ptr_ulong64_CUctx_st_ptr_ulong64 *p_Var65;
  _func___cdecl_cudaError_enum_ulong64_void_ptr_ulong64 *p_Var66;
  _func___cdecl_cudaError_enum_void_ptr_ulong64_ulong64 *p_Var67;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ulong64_ulong64_ulong64 *p_Var68;
  _func___cdecl_cudaError_enum_ulong64_CUarray_st_ptr_ulong64_ulong64 *p_Var69;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ulong64_void_ptr_ulong64 *p_Var70;
  _func___cdecl_cudaError_enum_void_ptr_CUarray_st_ptr_ulong64_ulong64 *p_Var71;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ulong64_CUarray_st_ptr_ulong64_ulong64 *p_Var72;
  _func___cdecl_cudaError_enum_CUDA_MEMCPY2D_st_ptr *p_Var73;
  _func___cdecl_cudaError_enum_CUDA_MEMCPY3D_st_ptr *p_Var74;
  _func___cdecl_cudaError_enum_CUDA_MEMCPY3D_PEER_st_ptr *p_Var75;
  _func___cdecl_cudaError_enum_ulong64_ulong64_ulong64_CUstream_st_ptr *p_Var76;
  _func___cdecl_cudaError_enum_ulong64_CUctx_st_ptr_ulong64_CUctx_st_ptr_ulong64_CUstream_st_ptr
  *p_Var77;
  _func___cdecl_cudaError_enum_ulong64_void_ptr_ulong64_CUstream_st_ptr *p_Var78;
  _func___cdecl_cudaError_enum_void_ptr_ulong64_ulong64_CUstream_st_ptr *p_Var79;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ulong64_void_ptr_ulong64_CUstream_st_ptr *p_Var80;
  _func___cdecl_cudaError_enum_void_ptr_CUarray_st_ptr_ulong64_ulong64_CUstream_st_ptr *p_Var81;
  _func___cdecl_cudaError_enum_CUDA_MEMCPY2D_st_ptr_CUstream_st_ptr *p_Var82;
  _func___cdecl_cudaError_enum_CUDA_MEMCPY3D_st_ptr_CUstream_st_ptr *p_Var83;
  _func___cdecl_cudaError_enum_CUDA_MEMCPY3D_PEER_st_ptr_CUstream_st_ptr *p_Var84;
  _func___cdecl_cudaError_enum_ulong64_uchar_ulong64 *p_Var85;
  _func___cdecl_cudaError_enum_ulong64_ushort_ulong64 *p_Var86;
  _func___cdecl_cudaError_enum_ulong64_uint_ulong64 *p_Var87;
  _func___cdecl_cudaError_enum_ulong64_ulong64_uchar_ulong64_ulong64 *p_Var88;
  _func___cdecl_cudaError_enum_ulong64_ulong64_ushort_ulong64_ulong64 *p_Var89;
  _func___cdecl_cudaError_enum_ulong64_ulong64_uint_ulong64_ulong64 *p_Var90;
  _func___cdecl_cudaError_enum_ulong64_uchar_ulong64_CUstream_st_ptr *p_Var91;
  _func___cdecl_cudaError_enum_ulong64_ushort_ulong64_CUstream_st_ptr *p_Var92;
  _func___cdecl_cudaError_enum_ulong64_uint_ulong64_CUstream_st_ptr *p_Var93;
  _func___cdecl_cudaError_enum_ulong64_ulong64_uchar_ulong64_ulong64_CUstream_st_ptr *p_Var94;
  _func___cdecl_cudaError_enum_ulong64_ulong64_ushort_ulong64_ulong64_CUstream_st_ptr *p_Var95;
  _func___cdecl_cudaError_enum_ulong64_ulong64_uint_ulong64_ulong64_CUstream_st_ptr *p_Var96;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ptr_CUDA_ARRAY_DESCRIPTOR_st_ptr *p_Var97;
  _func___cdecl_cudaError_enum_CUDA_ARRAY_DESCRIPTOR_st_ptr_CUarray_st_ptr *p_Var98;
  _func___cdecl_cudaError_enum_CUDA_ARRAY_SPARSE_PROPERTIES_st_ptr_CUarray_st_ptr *p_Var99;
  _func___cdecl_cudaError_enum_CUDA_ARRAY_SPARSE_PROPERTIES_st_ptr_CUmipmappedArray_st_ptr *p_Var100
  ;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ptr_CUarray_st_ptr_uint *p_Var101;
  _func___cdecl_cudaError_enum_CUarray_st_ptr *p_Var102;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ptr_CUDA_ARRAY3D_DESCRIPTOR_st_ptr *p_Var103;
  _func___cdecl_cudaError_enum_CUDA_ARRAY3D_DESCRIPTOR_st_ptr_CUarray_st_ptr *p_Var104;
  _func___cdecl_cudaError_enum_CUmipmappedArray_st_ptr_ptr_CUDA_ARRAY3D_DESCRIPTOR_st_ptr_uint
  *p_Var105;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ptr_CUmipmappedArray_st_ptr_uint *p_Var106;
  _func___cdecl_cudaError_enum_CUmipmappedArray_st_ptr *p_Var107;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_ulong64_ulong64_ulong64 *p_Var108;
  _func___cdecl_cudaError_enum_ulong64_ulong64 *p_Var109;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_CUmemAllocationProp_st_ptr_ulong64 *p_Var110;
  _func___cdecl_cudaError_enum_ulong64_ulong64_ulong64_ulong64_ulong64 *p_Var111;
  _func___cdecl_cudaError_enum_CUarrayMapInfo_st_ptr_uint_CUstream_st_ptr *p_Var112;
  _func___cdecl_cudaError_enum_ulong64_ulong64_CUmemAccessDesc_st_ptr_ulong64 *p_Var113;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUmemLocation_st_ptr_ulong64 *p_Var114;
  _func___cdecl_cudaError_enum_void_ptr_ulong64_CUmemAllocationHandleType_enum_ulong64 *p_Var115;
  _func___cdecl_cudaError_enum_ulong64_ptr_void_ptr_CUmemAllocationHandleType_enum *p_Var116;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUmemAllocationProp_st_ptr_CUmemAllocationGranularity_flags_enum
  *p_Var117;
  _func___cdecl_cudaError_enum_CUmemAllocationProp_st_ptr_ulong64 *p_Var118;
  _func___cdecl_cudaError_enum_ulong64_ptr_void_ptr *p_Var119;
  _func___cdecl_cudaError_enum_ulong64_CUstream_st_ptr *p_Var120;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_CUstream_st_ptr *p_Var121;
  _func___cdecl_cudaError_enum_CUmemPoolHandle_st_ptr_ulong64 *p_Var122;
  _func___cdecl_cudaError_enum_CUmemPoolHandle_st_ptr_CUmemPool_attribute_enum_void_ptr *p_Var123;
  _func___cdecl_cudaError_enum_CUmemPoolHandle_st_ptr_CUmemAccessDesc_st_ptr_ulong64 *p_Var124;
  _func___cdecl_cudaError_enum_CUmemAccess_flags_enum_ptr_CUmemPoolHandle_st_ptr_CUmemLocation_st_ptr
  *p_Var125;
  _func___cdecl_cudaError_enum_CUmemPoolHandle_st_ptr_ptr_CUmemPoolProps_st_ptr *p_Var126;
  _func___cdecl_cudaError_enum_CUmemPoolHandle_st_ptr *p_Var127;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_CUmemPoolHandle_st_ptr_CUstream_st_ptr *p_Var128;
  _func___cdecl_cudaError_enum_void_ptr_CUmemPoolHandle_st_ptr_CUmemAllocationHandleType_enum_ulong64
  *p_Var129;
  _func___cdecl_cudaError_enum_CUmemPoolHandle_st_ptr_ptr_void_ptr_CUmemAllocationHandleType_enum_ulong64
  *p_Var130;
  _func___cdecl_cudaError_enum_CUmemPoolPtrExportData_st_ptr_ulong64 *p_Var131;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUmemPoolHandle_st_ptr_CUmemPoolPtrExportData_st_ptr
  *p_Var132;
  _func___cdecl_cudaError_enum_void_ptr_CUpointer_attribute_enum_ulong64 *p_Var133;
  _func___cdecl_cudaError_enum_ulong64_ulong64_int_CUstream_st_ptr *p_Var134;
  _func___cdecl_cudaError_enum_ulong64_ulong64_CUmem_advise_enum_int *p_Var135;
  _func___cdecl_cudaError_enum_void_ptr_ulong64_CUmem_range_attribute_enum_ulong64_ulong64 *p_Var136
  ;
  _func___cdecl_cudaError_enum_void_ptr_ptr_ulong64_ptr_CUmem_range_attribute_enum_ptr_ulong64_ulong64_ulong64
  *p_Var137;
  _func___cdecl_cudaError_enum_uint_CUpointer_attribute_enum_ptr_void_ptr_ptr_ulong64 *p_Var138;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_ptr_uint *p_Var139;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_ptr_uint_int *p_Var140;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_int_ptr *p_Var141;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_uint_ptr *p_Var142;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUctx_st_ptr_ptr *p_Var143;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUevent_st_ptr_uint *p_Var144;
  _func___cdecl_cudaError_enum_CUstream_st_ptr__func___cdecl_void_CUstream_st_ptr_cudaError_enum_void_ptr_ptr_void_ptr_uint
  *p_Var145;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUstreamCaptureMode_enum *p_Var146;
  _func___cdecl_cudaError_enum_CUstreamCaptureMode_enum_ptr *p_Var147;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUgraph_st_ptr_ptr *p_Var148;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUstreamCaptureStatus_enum_ptr *p_Var149;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUstreamCaptureStatus_enum_ptr_ulong64_ptr *p_Var150;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_ulong64_ulong64_uint *p_Var151;
  _func___cdecl_cudaError_enum_CUstream_st_ptr *p_Var152;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUstream_st_ptr *p_Var153;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_CUstreamAttrID_enum_CUstreamAttrValue_union_ptr
  *p_Var154;
  _func___cdecl_cudaError_enum_CUevent_st_ptr_ptr_uint *p_Var155;
  _func___cdecl_cudaError_enum_CUevent_st_ptr_CUstream_st_ptr *p_Var156;
  _func___cdecl_cudaError_enum_CUevent_st_ptr_CUstream_st_ptr_uint *p_Var157;
  _func___cdecl_cudaError_enum_CUevent_st_ptr *p_Var158;
  _func___cdecl_cudaError_enum_float_ptr_CUevent_st_ptr_CUevent_st_ptr *p_Var159;
  _func___cdecl_cudaError_enum_CUextMemory_st_ptr_ptr_CUDA_EXTERNAL_MEMORY_HANDLE_DESC_st_ptr
  *p_Var160;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUextMemory_st_ptr_CUDA_EXTERNAL_MEMORY_BUFFER_DESC_st_ptr
  *p_Var161;
  _func___cdecl_cudaError_enum_CUmipmappedArray_st_ptr_ptr_CUextMemory_st_ptr_CUDA_EXTERNAL_MEMORY_MIPMAPPED_ARRAY_DESC_st_ptr
  *p_Var162;
  _func___cdecl_cudaError_enum_CUextMemory_st_ptr *p_Var163;
  _func___cdecl_cudaError_enum_CUextSemaphore_st_ptr_ptr_CUDA_EXTERNAL_SEMAPHORE_HANDLE_DESC_st_ptr
  *p_Var164;
  _func___cdecl_cudaError_enum_CUextSemaphore_st_ptr_ptr_CUDA_EXTERNAL_SEMAPHORE_SIGNAL_PARAMS_st_ptr_uint_CUstream_st_ptr
  *p_Var165;
  _func___cdecl_cudaError_enum_CUextSemaphore_st_ptr_ptr_CUDA_EXTERNAL_SEMAPHORE_WAIT_PARAMS_st_ptr_uint_CUstream_st_ptr
  *p_Var166;
  _func___cdecl_cudaError_enum_CUextSemaphore_st_ptr *p_Var167;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_ulong64_uint_uint *p_Var168;
  _func___cdecl_cudaError_enum_CUstream_st_ptr_uint_CUstreamBatchMemOpParams_union_ptr_uint
  *p_Var169;
  _func___cdecl_cudaError_enum_int_ptr_CUfunction_attribute_enum_CUfunc_st_ptr *p_Var170;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_CUfunction_attribute_enum_int *p_Var171;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_CUfunc_cache_enum *p_Var172;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_CUsharedconfig_enum *p_Var173;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_uint_uint_uint_uint_uint_uint_uint_CUstream_st_ptr_void_ptr_ptr_void_ptr_ptr
  *p_Var174;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_uint_uint_uint_uint_uint_uint_uint_CUstream_st_ptr_void_ptr_ptr
  *p_Var175;
  _func___cdecl_cudaError_enum_CUDA_LAUNCH_PARAMS_st_ptr_uint_uint *p_Var176;
  _func___cdecl_cudaError_enum_CUstream_st_ptr__func___cdecl_void_void_ptr_ptr_void_ptr *p_Var177;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_int_int_int *p_Var178;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_uint *p_Var179;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_int_uint *p_Var180;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_int_float *p_Var181;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_int_void_ptr_uint *p_Var182;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr *p_Var183;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_int_int *p_Var184;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_int_int_CUstream_st_ptr *p_Var185;
  _func___cdecl_cudaError_enum_CUfunc_st_ptr_int_CUtexref_st_ptr *p_Var186;
  _func___cdecl_cudaError_enum_CUgraph_st_ptr_ptr_uint *p_Var187;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUDA_KERNEL_NODE_PARAMS_st_ptr
  *p_Var188;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUDA_KERNEL_NODE_PARAMS_st_ptr *p_Var189;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUDA_MEMCPY3D_st_ptr_CUctx_st_ptr
  *p_Var190;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUDA_MEMCPY3D_st_ptr *p_Var191;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUDA_MEMSET_NODE_PARAMS_st_ptr_CUctx_st_ptr
  *p_Var192;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUDA_MEMSET_NODE_PARAMS_st_ptr *p_Var193;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUDA_HOST_NODE_PARAMS_st_ptr
  *p_Var194;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUDA_HOST_NODE_PARAMS_st_ptr *p_Var195;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUgraph_st_ptr
  *p_Var196;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUgraph_st_ptr_ptr *p_Var197;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64
  *p_Var198;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUevent_st_ptr
  *p_Var199;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUevent_st_ptr_ptr *p_Var200;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUevent_st_ptr *p_Var201;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUDA_EXT_SEM_SIGNAL_NODE_PARAMS_st_ptr
  *p_Var202;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUDA_EXT_SEM_SIGNAL_NODE_PARAMS_st_ptr *p_Var203;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_CUDA_EXT_SEM_WAIT_NODE_PARAMS_st_ptr
  *p_Var204;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUDA_EXT_SEM_WAIT_NODE_PARAMS_st_ptr *p_Var205;
  _func___cdecl_cudaError_enum_CUgraph_st_ptr_ptr_CUgraph_st_ptr *p_Var206;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_ptr_CUgraphNode_st_ptr_CUgraph_st_ptr *p_Var207;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUgraphNodeType_enum_ptr *p_Var208;
  _func___cdecl_cudaError_enum_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_ptr *p_Var209;
  _func___cdecl_cudaError_enum_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_CUgraphNode_st_ptr_ptr_ulong64_ptr
  *p_Var210;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUgraphNode_st_ptr_ptr_ulong64_ptr *p_Var211;
  _func___cdecl_cudaError_enum_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_CUgraphNode_st_ptr_ptr_ulong64
  *p_Var212;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr *p_Var213;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_char_ptr_ulong64
  *p_Var214;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUDA_KERNEL_NODE_PARAMS_st_ptr
  *p_Var215;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUDA_MEMCPY3D_st_ptr_CUctx_st_ptr
  *p_Var216;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUDA_MEMSET_NODE_PARAMS_st_ptr_CUctx_st_ptr
  *p_Var217;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUDA_HOST_NODE_PARAMS_st_ptr
  *p_Var218;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUgraph_st_ptr *p_Var219;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUevent_st_ptr *p_Var220;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUDA_EXT_SEM_SIGNAL_NODE_PARAMS_st_ptr
  *p_Var221;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraphNode_st_ptr_CUDA_EXT_SEM_WAIT_NODE_PARAMS_st_ptr
  *p_Var222;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUstream_st_ptr *p_Var223;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr *p_Var224;
  _func___cdecl_cudaError_enum_CUgraph_st_ptr *p_Var225;
  _func___cdecl_cudaError_enum_CUgraphExec_st_ptr_CUgraph_st_ptr_CUgraphNode_st_ptr_ptr_CUgraphExecUpdateResult_enum_ptr
  *p_Var226;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUgraphNode_st_ptr *p_Var227;
  _func___cdecl_cudaError_enum_CUgraphNode_st_ptr_CUkernelNodeAttrID_enum_CUkernelNodeAttrValue_union_ptr
  *p_Var228;
  _func___cdecl_cudaError_enum_int_ptr_CUfunc_st_ptr_int_ulong64 *p_Var229;
  _func___cdecl_cudaError_enum_int_ptr_CUfunc_st_ptr_int_ulong64_uint *p_Var230;
  _func___cdecl_cudaError_enum_int_ptr_int_ptr_CUfunc_st_ptr__func___cdecl_ulong64_int_ptr_ulong64_int
  *p_Var231;
  _func___cdecl_cudaError_enum_int_ptr_int_ptr_CUfunc_st_ptr__func___cdecl_ulong64_int_ptr_ulong64_int_uint
  *p_Var232;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUfunc_st_ptr_int_int *p_Var233;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_CUarray_st_ptr_uint *p_Var234;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_CUmipmappedArray_st_ptr_uint *p_Var235;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUtexref_st_ptr_ulong64_ulong64 *p_Var236;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_CUDA_ARRAY_DESCRIPTOR_st_ptr_ulong64_ulong64
  *p_Var237;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_CUarray_format_enum_int *p_Var238;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_int_CUaddress_mode_enum *p_Var239;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_CUfilter_mode_enum *p_Var240;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_float *p_Var241;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_float_float *p_Var242;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_uint *p_Var243;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_float_ptr *p_Var244;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUtexref_st_ptr *p_Var245;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ptr_CUtexref_st_ptr *p_Var246;
  _func___cdecl_cudaError_enum_CUmipmappedArray_st_ptr_ptr_CUtexref_st_ptr *p_Var247;
  _func___cdecl_cudaError_enum_CUaddress_mode_enum_ptr_CUtexref_st_ptr_int *p_Var248;
  _func___cdecl_cudaError_enum_CUfilter_mode_enum_ptr_CUtexref_st_ptr *p_Var249;
  _func___cdecl_cudaError_enum_CUarray_format_enum_ptr_int_ptr_CUtexref_st_ptr *p_Var250;
  _func___cdecl_cudaError_enum_float_ptr_CUtexref_st_ptr *p_Var251;
  _func___cdecl_cudaError_enum_float_ptr_float_ptr_CUtexref_st_ptr *p_Var252;
  _func___cdecl_cudaError_enum_int_ptr_CUtexref_st_ptr *p_Var253;
  _func___cdecl_cudaError_enum_uint_ptr_CUtexref_st_ptr *p_Var254;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr_ptr *p_Var255;
  _func___cdecl_cudaError_enum_CUtexref_st_ptr *p_Var256;
  _func___cdecl_cudaError_enum_CUsurfref_st_ptr_CUarray_st_ptr_uint *p_Var257;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ptr_CUsurfref_st_ptr *p_Var258;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUDA_RESOURCE_DESC_st_ptr_CUDA_TEXTURE_DESC_st_ptr_CUDA_RESOURCE_VIEW_DESC_st_ptr
  *p_Var259;
  _func___cdecl_cudaError_enum_CUDA_RESOURCE_DESC_st_ptr_ulong64 *p_Var260;
  _func___cdecl_cudaError_enum_CUDA_TEXTURE_DESC_st_ptr_ulong64 *p_Var261;
  _func___cdecl_cudaError_enum_CUDA_RESOURCE_VIEW_DESC_st_ptr_ulong64 *p_Var262;
  _func___cdecl_cudaError_enum_ulong64_ptr_CUDA_RESOURCE_DESC_st_ptr *p_Var263;
  _func___cdecl_cudaError_enum_int_ptr_int_int *p_Var264;
  _func___cdecl_cudaError_enum_CUctx_st_ptr_uint *p_Var265;
  _func___cdecl_cudaError_enum_int_ptr_CUdevice_P2PAttribute_enum_int_int *p_Var266;
  _func___cdecl_cudaError_enum_CUgraphicsResource_st_ptr *p_Var267;
  _func___cdecl_cudaError_enum_CUarray_st_ptr_ptr_CUgraphicsResource_st_ptr_uint_uint *p_Var268;
  _func___cdecl_cudaError_enum_CUmipmappedArray_st_ptr_ptr_CUgraphicsResource_st_ptr *p_Var269;
  _func___cdecl_cudaError_enum_ulong64_ptr_ulong64_ptr_CUgraphicsResource_st_ptr *p_Var270;
  _func___cdecl_cudaError_enum_CUgraphicsResource_st_ptr_uint *p_Var271;
  _func___cdecl_cudaError_enum_uint_CUgraphicsResource_st_ptr_ptr_CUstream_st_ptr *p_Var272;
  _func___cdecl_cudaError_enum_void_ptr_ptr_CUuuid_st_ptr *p_Var273;
  _func___cdecl_cudaError_enum_CUmod_st_ptr_ptr_CUfunc_st_ptr *p_Var274;
  
  if ((param_1 != (void *)0x0) && (param_2 != (CUDA_DRIVER_API_FUNCTION_LIST *)0x0)) {
    p_Var1 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGetErrorString");
    param_2->cuGetErrorString = p_Var1;
    p_Var1 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGetErrorName");
    param_2->cuGetErrorName = p_Var1;
    p_Var2 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuInit");
    param_2->cuInit = p_Var2;
    p_Var3 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDriverGetVersion");
    param_2->cuDriverGetVersion = p_Var3;
    p_Var4 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGet");
    param_2->cuDeviceGet = p_Var4;
    p_Var3 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetCount");
    param_2->cuDeviceGetCount = p_Var3;
    p_Var5 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetName");
    param_2->cuDeviceGetName = p_Var5;
    p_Var6 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetUuid");
    param_2->cuDeviceGetUuid = p_Var6;
    p_Var7 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetLuid");
    param_2->cuDeviceGetLuid = p_Var7;
    p_Var8 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceTotalMem_v2");
    param_2->cuDeviceTotalMem = p_Var8;
    p_Var9 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetTexture1DLinearMaxWidth");
    param_2->cuDeviceGetTexture1DLinearMaxWidth = p_Var9;
    p_Var10 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetAttribute");
    param_2->cuDeviceGetAttribute = p_Var10;
    p_Var11 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetNvSciSyncAttributes");
    param_2->cuDeviceGetNvSciSyncAttributes = p_Var11;
    p_Var12 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceSetMemPool");
    param_2->cuDeviceSetMemPool = p_Var12;
    p_Var13 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetMemPool");
    param_2->cuDeviceGetMemPool = p_Var13;
    p_Var13 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetDefaultMemPool");
    param_2->cuDeviceGetDefaultMemPool = p_Var13;
    p_Var14 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetProperties");
    param_2->cuDeviceGetProperties = p_Var14;
    p_Var15 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceComputeCapability");
    param_2->cuDeviceComputeCapability = p_Var15;
    p_Var16 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDevicePrimaryCtxRetain");
    param_2->cuDevicePrimaryCtxRetain = p_Var16;
    p_Var17 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDevicePrimaryCtxRelease_v2");
    param_2->cuDevicePrimaryCtxRelease = p_Var17;
    p_Var18 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDevicePrimaryCtxSetFlags_v2");
    param_2->cuDevicePrimaryCtxSetFlags = p_Var18;
    p_Var19 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDevicePrimaryCtxGetState");
    param_2->cuDevicePrimaryCtxGetState = p_Var19;
    p_Var17 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDevicePrimaryCtxReset_v2");
    param_2->cuDevicePrimaryCtxReset = p_Var17;
    p_Var20 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxCreate_v2");
    param_2->cuCtxCreate = p_Var20;
    p_Var21 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxDestroy_v2");
    param_2->cuCtxDestroy = p_Var21;
    p_Var21 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxPushCurrent_v2");
    param_2->cuCtxPushCurrent = p_Var21;
    p_Var22 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxPopCurrent_v2");
    param_2->cuCtxPopCurrent = p_Var22;
    p_Var21 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxSetCurrent");
    param_2->cuCtxSetCurrent = p_Var21;
    p_Var22 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetCurrent");
    param_2->cuCtxGetCurrent = p_Var22;
    p_Var3 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetDevice");
    param_2->cuCtxGetDevice = p_Var3;
    p_Var23 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetFlags");
    param_2->cuCtxGetFlags = p_Var23;
    p_Var24 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxSynchronize");
    param_2->cuCtxSynchronize = p_Var24;
    p_Var25 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxSetLimit");
    param_2->cuCtxSetLimit = p_Var25;
    p_Var26 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetLimit");
    param_2->cuCtxGetLimit = p_Var26;
    p_Var27 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetCacheConfig");
    param_2->cuCtxGetCacheConfig = p_Var27;
    p_Var28 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxSetCacheConfig");
    param_2->cuCtxSetCacheConfig = p_Var28;
    p_Var29 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetSharedMemConfig");
    param_2->cuCtxGetSharedMemConfig = p_Var29;
    p_Var30 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxSetSharedMemConfig");
    param_2->cuCtxSetSharedMemConfig = p_Var30;
    p_Var31 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetApiVersion");
    param_2->cuCtxGetApiVersion = p_Var31;
    p_Var32 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxGetStreamPriorityRange");
    param_2->cuCtxGetStreamPriorityRange = p_Var32;
    p_Var24 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxResetPersistingL2Cache");
    param_2->cuCtxResetPersistingL2Cache = p_Var24;
    p_Var33 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxAttach");
    param_2->cuCtxAttach = p_Var33;
    p_Var21 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxDetach");
    param_2->cuCtxDetach = p_Var21;
    p_Var34 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleLoad");
    param_2->cuModuleLoad = p_Var34;
    p_Var35 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleLoadData");
    param_2->cuModuleLoadData = p_Var35;
    p_Var36 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleLoadDataEx");
    param_2->cuModuleLoadDataEx = p_Var36;
    p_Var35 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleLoadFatBinary");
    param_2->cuModuleLoadFatBinary = p_Var35;
    p_Var37 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleUnload");
    param_2->cuModuleUnload = p_Var37;
    p_Var38 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleGetFunction");
    param_2->cuModuleGetFunction = p_Var38;
    p_Var39 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleGetGlobal_v2");
    param_2->cuModuleGetGlobal = p_Var39;
    p_Var40 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleGetTexRef");
    param_2->cuModuleGetTexRef = p_Var40;
    p_Var41 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuModuleGetSurfRef");
    param_2->cuModuleGetSurfRef = p_Var41;
    p_Var42 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLinkCreate_v2");
    param_2->cuLinkCreate = p_Var42;
    p_Var43 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLinkAddData_v2");
    param_2->cuLinkAddData = p_Var43;
    p_Var44 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLinkAddFile_v2");
    param_2->cuLinkAddFile = p_Var44;
    p_Var45 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLinkComplete");
    param_2->cuLinkComplete = p_Var45;
    p_Var46 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLinkDestroy");
    param_2->cuLinkDestroy = p_Var46;
    p_Var47 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemGetInfo_v2");
    param_2->cuMemGetInfo = p_Var47;
    p_Var48 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAlloc_v2");
    param_2->cuMemAlloc = p_Var48;
    p_Var49 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAllocPitch_v2");
    param_2->cuMemAllocPitch = p_Var49;
    p_Var50 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemFree_v2");
    param_2->cuMemFree = p_Var50;
    p_Var51 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemGetAddressRange_v2");
    param_2->cuMemGetAddressRange = p_Var51;
    p_Var52 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAllocHost_v2");
    param_2->cuMemAllocHost = p_Var52;
    p_Var53 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemFreeHost");
    param_2->cuMemFreeHost = p_Var53;
    p_Var54 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemHostAlloc");
    param_2->cuMemHostAlloc = p_Var54;
    p_Var55 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemHostGetDevicePointer_v2");
    param_2->cuMemHostGetDevicePointer = p_Var55;
    p_Var56 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemHostGetFlags");
    param_2->cuMemHostGetFlags = p_Var56;
    p_Var57 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAllocManaged");
    param_2->cuMemAllocManaged = p_Var57;
    p_Var58 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetByPCIBusId");
    param_2->cuDeviceGetByPCIBusId = p_Var58;
    p_Var5 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetPCIBusId");
    param_2->cuDeviceGetPCIBusId = p_Var5;
    p_Var59 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuIpcGetEventHandle");
    param_2->cuIpcGetEventHandle = p_Var59;
    p_Var60 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuIpcOpenEventHandle");
    param_2->cuIpcOpenEventHandle = p_Var60;
    p_Var61 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuIpcGetMemHandle");
    param_2->cuIpcGetMemHandle = p_Var61;
    p_Var62 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuIpcOpenMemHandle_v2");
    param_2->cuIpcOpenMemHandle = p_Var62;
    p_Var50 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuIpcCloseMemHandle");
    param_2->cuIpcCloseMemHandle = p_Var50;
    p_Var63 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemHostRegister_v2");
    param_2->cuMemHostRegister = p_Var63;
    p_Var53 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemHostUnregister");
    param_2->cuMemHostUnregister = p_Var53;
    p_Var64 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy");
    param_2->cuMemcpy = p_Var64;
    p_Var65 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyPeer");
    param_2->cuMemcpyPeer = p_Var65;
    p_Var66 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyHtoD_v2");
    param_2->cuMemcpyHtoD = p_Var66;
    p_Var67 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyDtoH_v2");
    param_2->cuMemcpyDtoH = p_Var67;
    p_Var64 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyDtoD_v2");
    param_2->cuMemcpyDtoD = p_Var64;
    p_Var68 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyDtoA_v2");
    param_2->cuMemcpyDtoA = p_Var68;
    p_Var69 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyAtoD_v2");
    param_2->cuMemcpyAtoD = p_Var69;
    p_Var70 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyHtoA_v2");
    param_2->cuMemcpyHtoA = p_Var70;
    p_Var71 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyAtoH_v2");
    param_2->cuMemcpyAtoH = p_Var71;
    p_Var72 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyAtoA_v2");
    param_2->cuMemcpyAtoA = p_Var72;
    p_Var73 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy2D_v2");
    param_2->cuMemcpy2D = p_Var73;
    p_Var73 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy2DUnaligned_v2");
    param_2->cuMemcpy2DUnaligned = p_Var73;
    p_Var74 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy3D_v2");
    param_2->cuMemcpy3D = p_Var74;
    p_Var75 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy3DPeer");
    param_2->cuMemcpy3DPeer = p_Var75;
    p_Var76 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyAsync");
    param_2->cuMemcpyAsync = p_Var76;
    p_Var77 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyPeerAsync");
    param_2->cuMemcpyPeerAsync = p_Var77;
    p_Var78 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyHtoDAsync_v2");
    param_2->cuMemcpyHtoDAsync = p_Var78;
    p_Var79 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyDtoHAsync_v2");
    param_2->cuMemcpyDtoHAsync = p_Var79;
    p_Var76 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyDtoDAsync_v2");
    param_2->cuMemcpyDtoDAsync = p_Var76;
    p_Var80 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyHtoAAsync_v2");
    param_2->cuMemcpyHtoAAsync = p_Var80;
    p_Var81 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpyAtoHAsync_v2");
    param_2->cuMemcpyAtoHAsync = p_Var81;
    p_Var82 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy2DAsync_v2");
    param_2->cuMemcpy2DAsync = p_Var82;
    p_Var83 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy3DAsync_v2");
    param_2->cuMemcpy3DAsync = p_Var83;
    p_Var84 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemcpy3DPeerAsync");
    param_2->cuMemcpy3DPeerAsync = p_Var84;
    p_Var85 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD8_v2");
    param_2->cuMemsetD8 = p_Var85;
    p_Var86 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD16_v2");
    param_2->cuMemsetD16 = p_Var86;
    p_Var87 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD32_v2");
    param_2->cuMemsetD32 = p_Var87;
    p_Var88 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD2D8_v2");
    param_2->cuMemsetD2D8 = p_Var88;
    p_Var89 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD2D16_v2");
    param_2->cuMemsetD2D16 = p_Var89;
    p_Var90 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD2D32_v2");
    param_2->cuMemsetD2D32 = p_Var90;
    p_Var91 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD8Async");
    param_2->cuMemsetD8Async = p_Var91;
    p_Var92 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD16Async");
    param_2->cuMemsetD16Async = p_Var92;
    p_Var93 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD32Async");
    param_2->cuMemsetD32Async = p_Var93;
    p_Var94 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD2D8Async");
    param_2->cuMemsetD2D8Async = p_Var94;
    p_Var95 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD2D16Async");
    param_2->cuMemsetD2D16Async = p_Var95;
    p_Var96 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemsetD2D32Async");
    param_2->cuMemsetD2D32Async = p_Var96;
    p_Var97 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuArrayCreate_v2");
    param_2->cuArrayCreate = p_Var97;
    p_Var98 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuArrayGetDescriptor_v2");
    param_2->cuArrayGetDescriptor = p_Var98;
    p_Var99 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuArrayGetSparseProperties");
    param_2->cuArrayGetSparseProperties = p_Var99;
    p_Var100 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMipmappedArrayGetSparseProperties")
    ;
    param_2->cuMipmappedArrayGetSparseProperties = p_Var100;
    p_Var101 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuArrayGetPlane");
    param_2->cuArrayGetPlane = p_Var101;
    p_Var102 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuArrayDestroy");
    param_2->cuArrayDestroy = p_Var102;
    p_Var103 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuArray3DCreate_v2");
    param_2->cuArray3DCreate = p_Var103;
    p_Var104 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuArray3DGetDescriptor_v2");
    param_2->cuArray3DGetDescriptor = p_Var104;
    p_Var105 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMipmappedArrayCreate");
    param_2->cuMipmappedArrayCreate = p_Var105;
    p_Var106 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMipmappedArrayGetLevel");
    param_2->cuMipmappedArrayGetLevel = p_Var106;
    p_Var107 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMipmappedArrayDestroy");
    param_2->cuMipmappedArrayDestroy = p_Var107;
    p_Var108 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAddressReserve");
    param_2->cuMemAddressReserve = p_Var108;
    p_Var109 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAddressFree");
    param_2->cuMemAddressFree = p_Var109;
    p_Var110 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemCreate");
    param_2->cuMemCreate = p_Var110;
    p_Var50 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemRelease");
    param_2->cuMemRelease = p_Var50;
    p_Var111 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemMap");
    param_2->cuMemMap = p_Var111;
    p_Var112 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemMapArrayAsync");
    param_2->cuMemMapArrayAsync = p_Var112;
    p_Var109 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemUnmap");
    param_2->cuMemUnmap = p_Var109;
    p_Var113 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemSetAccess");
    param_2->cuMemSetAccess = p_Var113;
    p_Var114 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemGetAccess");
    param_2->cuMemGetAccess = p_Var114;
    p_Var115 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemExportToShareableHandle");
    param_2->cuMemExportToShareableHandle = p_Var115;
    p_Var116 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemImportFromShareableHandle");
    param_2->cuMemImportFromShareableHandle = p_Var116;
    p_Var117 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemGetAllocationGranularity");
    param_2->cuMemGetAllocationGranularity = p_Var117;
    p_Var118 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuMemGetAllocationPropertiesFromHandle");
    param_2->cuMemGetAllocationPropertiesFromHandle = p_Var118;
    p_Var119 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemRetainAllocationHandle");
    param_2->cuMemRetainAllocationHandle = p_Var119;
    p_Var120 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemFreeAsync");
    param_2->cuMemFreeAsync = p_Var120;
    p_Var121 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAllocAsync");
    param_2->cuMemAllocAsync = p_Var121;
    p_Var122 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolTrimTo");
    param_2->cuMemPoolTrimTo = p_Var122;
    p_Var123 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolSetAttribute");
    param_2->cuMemPoolSetAttribute = p_Var123;
    p_Var123 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolGetAttribute");
    param_2->cuMemPoolGetAttribute = p_Var123;
    p_Var124 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolSetAccess");
    param_2->cuMemPoolSetAccess = p_Var124;
    p_Var125 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolGetAccess");
    param_2->cuMemPoolGetAccess = p_Var125;
    p_Var126 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolCreate");
    param_2->cuMemPoolCreate = p_Var126;
    p_Var127 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolDestroy");
    param_2->cuMemPoolDestroy = p_Var127;
    p_Var128 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAllocFromPoolAsync");
    param_2->cuMemAllocFromPoolAsync = p_Var128;
    p_Var129 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolExportToShareableHandle");
    param_2->cuMemPoolExportToShareableHandle = p_Var129;
    p_Var130 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolImportFromShareableHandle");
    param_2->cuMemPoolImportFromShareableHandle = p_Var130;
    p_Var131 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolExportPointer");
    param_2->cuMemPoolExportPointer = p_Var131;
    p_Var132 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPoolImportPointer");
    param_2->cuMemPoolImportPointer = p_Var132;
    p_Var133 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuPointerGetAttribute");
    param_2->cuPointerGetAttribute = p_Var133;
    p_Var134 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemPrefetchAsync");
    param_2->cuMemPrefetchAsync = p_Var134;
    p_Var135 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemAdvise");
    param_2->cuMemAdvise = p_Var135;
    p_Var136 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemRangeGetAttribute");
    param_2->cuMemRangeGetAttribute = p_Var136;
    p_Var137 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuMemRangeGetAttributes");
    param_2->cuMemRangeGetAttributes = p_Var137;
    p_Var133 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuPointerSetAttribute");
    param_2->cuPointerSetAttribute = p_Var133;
    p_Var138 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuPointerGetAttributes");
    param_2->cuPointerGetAttributes = p_Var138;
    p_Var139 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamCreate");
    param_2->cuStreamCreate = p_Var139;
    p_Var140 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamCreateWithPriority");
    param_2->cuStreamCreateWithPriority = p_Var140;
    p_Var141 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamGetPriority");
    param_2->cuStreamGetPriority = p_Var141;
    p_Var142 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamGetFlags");
    param_2->cuStreamGetFlags = p_Var142;
    p_Var143 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamGetCtx");
    param_2->cuStreamGetCtx = p_Var143;
    p_Var144 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamWaitEvent");
    param_2->cuStreamWaitEvent = p_Var144;
    p_Var145 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamAddCallback");
    param_2->cuStreamAddCallback = p_Var145;
    p_Var146 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamBeginCapture_v2");
    param_2->cuStreamBeginCapture = p_Var146;
    p_Var147 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuThreadExchangeStreamCaptureMode");
    param_2->cuThreadExchangeStreamCaptureMode = p_Var147;
    p_Var148 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamEndCapture");
    param_2->cuStreamEndCapture = p_Var148;
    p_Var149 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamIsCapturing");
    param_2->cuStreamIsCapturing = p_Var149;
    p_Var150 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamGetCaptureInfo");
    param_2->cuStreamGetCaptureInfo = p_Var150;
    p_Var151 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamAttachMemAsync");
    param_2->cuStreamAttachMemAsync = p_Var151;
    p_Var152 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamQuery");
    param_2->cuStreamQuery = p_Var152;
    p_Var152 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamSynchronize");
    param_2->cuStreamSynchronize = p_Var152;
    p_Var152 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamDestroy_v2");
    param_2->cuStreamDestroy = p_Var152;
    p_Var153 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamCopyAttributes");
    param_2->cuStreamCopyAttributes = p_Var153;
    p_Var154 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamGetAttribute");
    param_2->cuStreamGetAttribute = p_Var154;
    p_Var154 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamSetAttribute");
    param_2->cuStreamSetAttribute = p_Var154;
    p_Var155 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuEventCreate");
    param_2->cuEventCreate = p_Var155;
    p_Var156 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuEventRecord");
    param_2->cuEventRecord = p_Var156;
    p_Var157 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuEventRecordWithFlags");
    param_2->cuEventRecordWithFlags = p_Var157;
    p_Var158 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuEventQuery");
    param_2->cuEventQuery = p_Var158;
    p_Var158 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuEventSynchronize");
    param_2->cuEventSynchronize = p_Var158;
    p_Var158 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuEventDestroy_v2");
    param_2->cuEventDestroy = p_Var158;
    p_Var159 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuEventElapsedTime");
    param_2->cuEventElapsedTime = p_Var159;
    p_Var160 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuImportExternalMemory");
    param_2->cuImportExternalMemory = p_Var160;
    p_Var161 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuExternalMemoryGetMappedBuffer");
    param_2->cuExternalMemoryGetMappedBuffer = p_Var161;
    p_Var162 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuExternalMemoryGetMappedMipmappedArray");
    param_2->cuExternalMemoryGetMappedMipmappedArray = p_Var162;
    p_Var163 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDestroyExternalMemory");
    param_2->cuDestroyExternalMemory = p_Var163;
    p_Var164 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuImportExternalSemaphore");
    param_2->cuImportExternalSemaphore = p_Var164;
    p_Var165 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuSignalExternalSemaphoresAsync");
    param_2->cuSignalExternalSemaphoresAsync = p_Var165;
    p_Var166 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuWaitExternalSemaphoresAsync");
    param_2->cuWaitExternalSemaphoresAsync = p_Var166;
    p_Var167 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDestroyExternalSemaphore");
    param_2->cuDestroyExternalSemaphore = p_Var167;
    p_Var168 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamWaitValue32");
    param_2->cuStreamWaitValue32 = p_Var168;
    p_Var151 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamWaitValue64");
    param_2->cuStreamWaitValue64 = p_Var151;
    p_Var168 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamWriteValue32");
    param_2->cuStreamWriteValue32 = p_Var168;
    p_Var151 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamWriteValue64");
    param_2->cuStreamWriteValue64 = p_Var151;
    p_Var169 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuStreamBatchMemOp");
    param_2->cuStreamBatchMemOp = p_Var169;
    p_Var170 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuFuncGetAttribute");
    param_2->cuFuncGetAttribute = p_Var170;
    p_Var171 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuFuncSetAttribute");
    param_2->cuFuncSetAttribute = p_Var171;
    p_Var172 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuFuncSetCacheConfig");
    param_2->cuFuncSetCacheConfig = p_Var172;
    p_Var173 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuFuncSetSharedMemConfig");
    param_2->cuFuncSetSharedMemConfig = p_Var173;
    p_Var174 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLaunchKernel");
    param_2->cuLaunchKernel = p_Var174;
    p_Var175 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLaunchCooperativeKernel");
    param_2->cuLaunchCooperativeKernel = p_Var175;
    p_Var176 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuLaunchCooperativeKernelMultiDevice");
    param_2->cuLaunchCooperativeKernelMultiDevice = p_Var176;
    p_Var177 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLaunchHostFunc");
    param_2->cuLaunchHostFunc = p_Var177;
    p_Var178 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuFuncSetBlockShape");
    param_2->cuFuncSetBlockShape = p_Var178;
    p_Var179 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuFuncSetSharedSize");
    param_2->cuFuncSetSharedSize = p_Var179;
    p_Var179 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuParamSetSize");
    param_2->cuParamSetSize = p_Var179;
    p_Var180 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuParamSeti");
    param_2->cuParamSeti = p_Var180;
    p_Var181 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuParamSetf");
    param_2->cuParamSetf = p_Var181;
    p_Var182 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuParamSetv");
    param_2->cuParamSetv = p_Var182;
    p_Var183 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLaunch");
    param_2->cuLaunch = p_Var183;
    p_Var184 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLaunchGrid");
    param_2->cuLaunchGrid = p_Var184;
    p_Var185 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuLaunchGridAsync");
    param_2->cuLaunchGridAsync = p_Var185;
    p_Var186 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuParamSetTexRef");
    param_2->cuParamSetTexRef = p_Var186;
    p_Var187 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphCreate");
    param_2->cuGraphCreate = p_Var187;
    p_Var188 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddKernelNode");
    param_2->cuGraphAddKernelNode = p_Var188;
    p_Var189 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphKernelNodeGetParams");
    param_2->cuGraphKernelNodeGetParams = p_Var189;
    p_Var189 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphKernelNodeSetParams");
    param_2->cuGraphKernelNodeSetParams = p_Var189;
    p_Var190 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddMemcpyNode");
    param_2->cuGraphAddMemcpyNode = p_Var190;
    p_Var191 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphMemcpyNodeGetParams");
    param_2->cuGraphMemcpyNodeGetParams = p_Var191;
    p_Var191 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphMemcpyNodeSetParams");
    param_2->cuGraphMemcpyNodeSetParams = p_Var191;
    p_Var192 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddMemsetNode");
    param_2->cuGraphAddMemsetNode = p_Var192;
    p_Var193 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphMemsetNodeGetParams");
    param_2->cuGraphMemsetNodeGetParams = p_Var193;
    p_Var193 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphMemsetNodeSetParams");
    param_2->cuGraphMemsetNodeSetParams = p_Var193;
    p_Var194 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddHostNode");
    param_2->cuGraphAddHostNode = p_Var194;
    p_Var195 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphHostNodeGetParams");
    param_2->cuGraphHostNodeGetParams = p_Var195;
    p_Var195 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphHostNodeSetParams");
    param_2->cuGraphHostNodeSetParams = p_Var195;
    p_Var196 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddChildGraphNode");
    param_2->cuGraphAddChildGraphNode = p_Var196;
    p_Var197 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphChildGraphNodeGetGraph");
    param_2->cuGraphChildGraphNodeGetGraph = p_Var197;
    p_Var198 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddEmptyNode");
    param_2->cuGraphAddEmptyNode = p_Var198;
    p_Var199 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddEventRecordNode");
    param_2->cuGraphAddEventRecordNode = p_Var199;
    p_Var200 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphEventRecordNodeGetEvent");
    param_2->cuGraphEventRecordNodeGetEvent = p_Var200;
    p_Var201 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphEventRecordNodeSetEvent");
    param_2->cuGraphEventRecordNodeSetEvent = p_Var201;
    p_Var199 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddEventWaitNode");
    param_2->cuGraphAddEventWaitNode = p_Var199;
    p_Var200 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphEventWaitNodeGetEvent");
    param_2->cuGraphEventWaitNodeGetEvent = p_Var200;
    p_Var201 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphEventWaitNodeSetEvent");
    param_2->cuGraphEventWaitNodeSetEvent = p_Var201;
    p_Var202 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphAddExternalSemaphoresSignalNode");
    param_2->cuGraphAddExternalSemaphoresSignalNode = p_Var202;
    p_Var203 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphExternalSemaphoresSignalNodeGetParams");
    param_2->cuGraphExternalSemaphoresSignalNodeGetParams = p_Var203;
    p_Var203 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphExternalSemaphoresSignalNodeSetParams");
    param_2->cuGraphExternalSemaphoresSignalNodeSetParams = p_Var203;
    p_Var204 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphAddExternalSemaphoresWaitNode");
    param_2->cuGraphAddExternalSemaphoresWaitNode = p_Var204;
    p_Var205 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphExternalSemaphoresWaitNodeGetParams");
    param_2->cuGraphExternalSemaphoresWaitNodeGetParams = p_Var205;
    p_Var205 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphExternalSemaphoresWaitNodeSetParams");
    param_2->cuGraphExternalSemaphoresWaitNodeSetParams = p_Var205;
    p_Var206 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphClone");
    param_2->cuGraphClone = p_Var206;
    p_Var207 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphNodeFindInClone");
    param_2->cuGraphNodeFindInClone = p_Var207;
    p_Var208 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphNodeGetType");
    param_2->cuGraphNodeGetType = p_Var208;
    p_Var209 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphGetNodes");
    param_2->cuGraphGetNodes = p_Var209;
    p_Var209 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphGetRootNodes");
    param_2->cuGraphGetRootNodes = p_Var209;
    p_Var210 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphGetEdges");
    param_2->cuGraphGetEdges = p_Var210;
    p_Var211 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphNodeGetDependencies");
    param_2->cuGraphNodeGetDependencies = p_Var211;
    p_Var211 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphNodeGetDependentNodes");
    param_2->cuGraphNodeGetDependentNodes = p_Var211;
    p_Var212 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphAddDependencies");
    param_2->cuGraphAddDependencies = p_Var212;
    p_Var212 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphRemoveDependencies");
    param_2->cuGraphRemoveDependencies = p_Var212;
    p_Var213 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphDestroyNode");
    param_2->cuGraphDestroyNode = p_Var213;
    p_Var214 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphInstantiate_v2");
    param_2->cuGraphInstantiate = p_Var214;
    p_Var215 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecKernelNodeSetParams");
    param_2->cuGraphExecKernelNodeSetParams = p_Var215;
    p_Var216 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecMemcpyNodeSetParams");
    param_2->cuGraphExecMemcpyNodeSetParams = p_Var216;
    p_Var217 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecMemsetNodeSetParams");
    param_2->cuGraphExecMemsetNodeSetParams = p_Var217;
    p_Var218 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecHostNodeSetParams");
    param_2->cuGraphExecHostNodeSetParams = p_Var218;
    p_Var219 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecChildGraphNodeSetParams");
    param_2->cuGraphExecChildGraphNodeSetParams = p_Var219;
    p_Var220 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecEventRecordNodeSetEvent");
    param_2->cuGraphExecEventRecordNodeSetEvent = p_Var220;
    p_Var220 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecEventWaitNodeSetEvent");
    param_2->cuGraphExecEventWaitNodeSetEvent = p_Var220;
    p_Var221 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphExecExternalSemaphoresSignalNodeSetParams");
    param_2->cuGraphExecExternalSemaphoresSignalNodeSetParams = p_Var221;
    p_Var222 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphExecExternalSemaphoresWaitNodeSetParams");
    param_2->cuGraphExecExternalSemaphoresWaitNodeSetParams = p_Var222;
    p_Var223 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphUpload");
    param_2->cuGraphUpload = p_Var223;
    p_Var223 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphLaunch");
    param_2->cuGraphLaunch = p_Var223;
    p_Var224 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecDestroy");
    param_2->cuGraphExecDestroy = p_Var224;
    p_Var225 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphDestroy");
    param_2->cuGraphDestroy = p_Var225;
    p_Var226 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphExecUpdate");
    param_2->cuGraphExecUpdate = p_Var226;
    p_Var227 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphKernelNodeCopyAttributes");
    param_2->cuGraphKernelNodeCopyAttributes = p_Var227;
    p_Var228 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphKernelNodeGetAttribute");
    param_2->cuGraphKernelNodeGetAttribute = p_Var228;
    p_Var228 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphKernelNodeSetAttribute");
    param_2->cuGraphKernelNodeSetAttribute = p_Var228;
    p_Var229 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuOccupancyMaxActiveBlocksPerMultiprocessor");
    param_2->cuOccupancyMaxActiveBlocksPerMultiprocessor = p_Var229;
    p_Var230 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags");
    param_2->cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags = p_Var230;
    p_Var231 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuOccupancyMaxPotentialBlockSize");
    param_2->cuOccupancyMaxPotentialBlockSize = p_Var231;
    p_Var232 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuOccupancyMaxPotentialBlockSizeWithFlags");
    param_2->cuOccupancyMaxPotentialBlockSizeWithFlags = p_Var232;
    p_Var233 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuOccupancyAvailableDynamicSMemPerBlock");
    param_2->cuOccupancyAvailableDynamicSMemPerBlock = p_Var233;
    p_Var234 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetArray");
    param_2->cuTexRefSetArray = p_Var234;
    p_Var235 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetMipmappedArray");
    param_2->cuTexRefSetMipmappedArray = p_Var235;
    p_Var236 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetAddress_v2");
    param_2->cuTexRefSetAddress = p_Var236;
    p_Var237 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetAddress2D_v3");
    param_2->cuTexRefSetAddress2D = p_Var237;
    p_Var238 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetFormat");
    param_2->cuTexRefSetFormat = p_Var238;
    p_Var239 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetAddressMode");
    param_2->cuTexRefSetAddressMode = p_Var239;
    p_Var240 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetFilterMode");
    param_2->cuTexRefSetFilterMode = p_Var240;
    p_Var240 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetMipmapFilterMode");
    param_2->cuTexRefSetMipmapFilterMode = p_Var240;
    p_Var241 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetMipmapLevelBias");
    param_2->cuTexRefSetMipmapLevelBias = p_Var241;
    p_Var242 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetMipmapLevelClamp");
    param_2->cuTexRefSetMipmapLevelClamp = p_Var242;
    p_Var243 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetMaxAnisotropy");
    param_2->cuTexRefSetMaxAnisotropy = p_Var243;
    p_Var244 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetBorderColor");
    param_2->cuTexRefSetBorderColor = p_Var244;
    p_Var243 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefSetFlags");
    param_2->cuTexRefSetFlags = p_Var243;
    p_Var245 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetAddress_v2");
    param_2->cuTexRefGetAddress = p_Var245;
    p_Var246 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetArray");
    param_2->cuTexRefGetArray = p_Var246;
    p_Var247 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetMipmappedArray");
    param_2->cuTexRefGetMipmappedArray = p_Var247;
    p_Var248 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetAddressMode");
    param_2->cuTexRefGetAddressMode = p_Var248;
    p_Var249 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetFilterMode");
    param_2->cuTexRefGetFilterMode = p_Var249;
    p_Var250 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetFormat");
    param_2->cuTexRefGetFormat = p_Var250;
    p_Var249 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetMipmapFilterMode");
    param_2->cuTexRefGetMipmapFilterMode = p_Var249;
    p_Var251 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetMipmapLevelBias");
    param_2->cuTexRefGetMipmapLevelBias = p_Var251;
    p_Var252 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetMipmapLevelClamp");
    param_2->cuTexRefGetMipmapLevelClamp = p_Var252;
    p_Var253 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetMaxAnisotropy");
    param_2->cuTexRefGetMaxAnisotropy = p_Var253;
    p_Var251 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetBorderColor");
    param_2->cuTexRefGetBorderColor = p_Var251;
    p_Var254 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefGetFlags");
    param_2->cuTexRefGetFlags = p_Var254;
    p_Var255 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefCreate");
    param_2->cuTexRefCreate = p_Var255;
    p_Var256 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexRefDestroy");
    param_2->cuTexRefDestroy = p_Var256;
    p_Var257 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuSurfRefSetArray");
    param_2->cuSurfRefSetArray = p_Var257;
    p_Var258 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuSurfRefGetArray");
    param_2->cuSurfRefGetArray = p_Var258;
    p_Var259 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexObjectCreate");
    param_2->cuTexObjectCreate = p_Var259;
    p_Var50 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexObjectDestroy");
    param_2->cuTexObjectDestroy = p_Var50;
    p_Var260 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexObjectGetResourceDesc");
    param_2->cuTexObjectGetResourceDesc = p_Var260;
    p_Var261 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexObjectGetTextureDesc");
    param_2->cuTexObjectGetTextureDesc = p_Var261;
    p_Var262 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuTexObjectGetResourceViewDesc");
    param_2->cuTexObjectGetResourceViewDesc = p_Var262;
    p_Var263 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuSurfObjectCreate");
    param_2->cuSurfObjectCreate = p_Var263;
    p_Var50 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuSurfObjectDestroy");
    param_2->cuSurfObjectDestroy = p_Var50;
    p_Var260 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuSurfObjectGetResourceDesc");
    param_2->cuSurfObjectGetResourceDesc = p_Var260;
    p_Var264 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceCanAccessPeer");
    param_2->cuDeviceCanAccessPeer = p_Var264;
    p_Var265 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxEnablePeerAccess");
    param_2->cuCtxEnablePeerAccess = p_Var265;
    p_Var21 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuCtxDisablePeerAccess");
    param_2->cuCtxDisablePeerAccess = p_Var21;
    p_Var266 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuDeviceGetP2PAttribute");
    param_2->cuDeviceGetP2PAttribute = p_Var266;
    p_Var267 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphicsUnregisterResource");
    param_2->cuGraphicsUnregisterResource = p_Var267;
    p_Var268 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphicsSubResourceGetMappedArray")
    ;
    param_2->cuGraphicsSubResourceGetMappedArray = p_Var268;
    p_Var269 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphicsResourceGetMappedMipmappedArray");
    param_2->cuGraphicsResourceGetMappedMipmappedArray = p_Var269;
    p_Var270 = FWindowsPlatformProcess::GetDllExport
                         (param_1,L"cuGraphicsResourceGetMappedPointer_v2");
    param_2->cuGraphicsResourceGetMappedPointer = p_Var270;
    p_Var271 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphicsResourceSetMapFlags_v2");
    param_2->cuGraphicsResourceSetMapFlags = p_Var271;
    p_Var272 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphicsMapResources");
    param_2->cuGraphicsMapResources = p_Var272;
    p_Var272 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGraphicsUnmapResources");
    param_2->cuGraphicsUnmapResources = p_Var272;
    p_Var273 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuGetExportTable");
    param_2->cuGetExportTable = p_Var273;
    p_Var274 = FWindowsPlatformProcess::GetDllExport(param_1,L"cuFuncGetModule");
    param_2->cuFuncGetModule = p_Var274;
    return true;
  }
  return false;
}

// OpenCudaDriverLibrary @ 148cff200

void * __cdecl OpenCudaDriverLibrary(void)

{
  void *pvVar1;
  
  pvVar1 = FWindowsPlatformProcess::GetDllHandle(L"nvcuda.dll");
  return pvVar1;
}

// `dynamic_atexit_destructor_for_'LogCUDA'' @ 15040bc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCUDA__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCUDA);
  return;
}

