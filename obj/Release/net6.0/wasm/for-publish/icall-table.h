#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
187,
194,
195,
196,
197,
198,
199,
200,
201,
202,
205,
206,
375,
376,
378,
407,
408,
409,
429,
430,
431,
432,
433,
524,
525,
526,
529,
570,
571,
572,
575,
577,
579,
581,
586,
594,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
610,
611,
612,
613,
614,
615,
616,
617,
618,
619,
620,
706,
707,
708,
709,
710,
711,
712,
713,
714,
715,
716,
717,
718,
719,
720,
721,
722,
723,
724,
725,
726,
727,
728,
729,
730,
864,
865,
873,
876,
878,
884,
885,
887,
888,
892,
894,
895,
896,
897,
899,
900,
901,
904,
905,
908,
909,
910,
985,
986,
988,
996,
997,
998,
999,
1000,
1004,
1005,
1006,
1007,
1008,
1009,
1011,
1012,
1013,
1015,
1016,
1018,
1022,
1023,
1024,
1297,
1513,
1514,
8333,
8334,
8336,
8337,
8338,
8339,
8340,
8342,
8344,
8346,
8347,
8348,
8356,
8358,
8362,
8363,
8365,
8367,
8369,
8382,
8391,
8392,
8394,
8395,
8396,
8397,
8398,
8400,
8402,
9460,
9464,
9466,
9467,
9468,
9469,
9539,
9540,
9541,
9542,
9561,
9562,
9563,
9564,
9598,
9647,
9650,
9659,
9660,
9661,
9662,
10066,
10067,
10072,
10073,
10124,
10125,
10126,
10154,
10160,
10167,
10177,
10181,
10273,
10283,
10284,
10297,
10298,
10299,
10300,
10301,
10302,
10303,
10310,
10326,
10347,
10348,
10357,
10359,
10366,
10367,
10370,
10372,
10377,
10383,
10384,
10391,
10393,
10403,
10406,
10407,
10408,
10419,
10431,
10437,
10438,
10439,
10441,
10442,
10452,
10471,
10493,
10494,
10495,
10496,
10497,
10514,
10519,
10524,
10525,
10526,
10563,
10564,
11068,
11069,
11152,
11231,
11492,
11493,
11502,
11503,
11504,
11510,
11589,
11761,
11762,
12532,
12533,
13361,
13380,
13387,
13388,
13390,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw (int,int,int);
int ves_icall_property_info_get_default_value_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 187,
ves_icall_System_Array_InternalCreate,
// token 194,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 195,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 196,
ves_icall_System_Array_CanChangePrimitive,
// token 197,
ves_icall_System_Array_FastCopy_raw,
// token 198,
ves_icall_System_Array_GetLength_raw,
// token 199,
ves_icall_System_Array_GetLowerBound_raw,
// token 200,
ves_icall_System_Array_GetGenericValue_icall,
// token 201,
ves_icall_System_Array_GetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetGenericValue_icall,
// token 205,
ves_icall_System_Array_SetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 375,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 376,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 378,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 407,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 408,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 409,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 429,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 430,
ves_icall_System_Enum_ToObject_raw,
// token 431,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 432,
ves_icall_System_Enum_get_underlying_type_raw,
// token 433,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 524,
ves_icall_System_Environment_get_ProcessorCount,
// token 525,
ves_icall_System_Environment_get_TickCount,
// token 526,
ves_icall_System_Environment_get_TickCount64,
// token 529,
ves_icall_System_Environment_FailFast_raw,
// token 570,
ves_icall_System_GC_GetCollectionCount,
// token 571,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 572,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 575,
ves_icall_System_GC_SuppressFinalize_raw,
// token 577,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 579,
ves_icall_System_GC_GetGCMemoryInfo,
// token 581,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 586,
ves_icall_System_Object_MemberwiseClone_raw,
// token 594,
ves_icall_System_Math_Abs_double,
// token 595,
ves_icall_System_Math_Abs_single,
// token 596,
ves_icall_System_Math_Acos,
// token 597,
ves_icall_System_Math_Acosh,
// token 598,
ves_icall_System_Math_Asin,
// token 599,
ves_icall_System_Math_Asinh,
// token 600,
ves_icall_System_Math_Atan,
// token 601,
ves_icall_System_Math_Atan2,
// token 602,
ves_icall_System_Math_Atanh,
// token 603,
ves_icall_System_Math_Cbrt,
// token 604,
ves_icall_System_Math_Ceiling,
// token 605,
ves_icall_System_Math_Cos,
// token 606,
ves_icall_System_Math_Cosh,
// token 607,
ves_icall_System_Math_Exp,
// token 608,
ves_icall_System_Math_Floor,
// token 609,
ves_icall_System_Math_Log,
// token 610,
ves_icall_System_Math_Log10,
// token 611,
ves_icall_System_Math_Pow,
// token 612,
ves_icall_System_Math_Sin,
// token 613,
ves_icall_System_Math_Sinh,
// token 614,
ves_icall_System_Math_Sqrt,
// token 615,
ves_icall_System_Math_Tan,
// token 616,
ves_icall_System_Math_Tanh,
// token 617,
ves_icall_System_Math_FusedMultiplyAdd,
// token 618,
ves_icall_System_Math_ILogB,
// token 619,
ves_icall_System_Math_Log2,
// token 620,
ves_icall_System_Math_ModF,
// token 706,
ves_icall_System_MathF_Acos,
// token 707,
ves_icall_System_MathF_Acosh,
// token 708,
ves_icall_System_MathF_Asin,
// token 709,
ves_icall_System_MathF_Asinh,
// token 710,
ves_icall_System_MathF_Atan,
// token 711,
ves_icall_System_MathF_Atan2,
// token 712,
ves_icall_System_MathF_Atanh,
// token 713,
ves_icall_System_MathF_Cbrt,
// token 714,
ves_icall_System_MathF_Ceiling,
// token 715,
ves_icall_System_MathF_Cos,
// token 716,
ves_icall_System_MathF_Cosh,
// token 717,
ves_icall_System_MathF_Exp,
// token 718,
ves_icall_System_MathF_Floor,
// token 719,
ves_icall_System_MathF_Log,
// token 720,
ves_icall_System_MathF_Log10,
// token 721,
ves_icall_System_MathF_Pow,
// token 722,
ves_icall_System_MathF_Sin,
// token 723,
ves_icall_System_MathF_Sinh,
// token 724,
ves_icall_System_MathF_Sqrt,
// token 725,
ves_icall_System_MathF_Tan,
// token 726,
ves_icall_System_MathF_Tanh,
// token 727,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 728,
ves_icall_System_MathF_ILogB,
// token 729,
ves_icall_System_MathF_Log2,
// token 730,
ves_icall_System_MathF_ModF,
// token 864,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 865,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 873,
ves_icall_RuntimeType_make_array_type_raw,
// token 876,
ves_icall_RuntimeType_make_byref_type_raw,
// token 878,
ves_icall_RuntimeType_MakePointerType_raw,
// token 884,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 885,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 887,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 888,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 892,
ves_icall_RuntimeType_GetPacking_raw,
// token 894,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 895,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 896,
ves_icall_System_RuntimeType_getFullName_raw,
// token 897,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 899,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 900,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 901,
ves_icall_RuntimeType_GetFields_native_raw,
// token 904,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 905,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 908,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 909,
ves_icall_RuntimeType_get_Name_raw,
// token 910,
ves_icall_RuntimeType_get_Namespace_raw,
// token 985,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 986,
ves_icall_reflection_get_token_raw,
// token 988,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 996,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 997,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 998,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 999,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1004,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1005,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1006,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1007,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1008,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1009,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1011,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1012,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1013,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1015,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1016,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1018,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1022,
ves_icall_System_String_FastAllocateString_raw,
// token 1023,
ves_icall_System_String_InternalIsInterned_raw,
// token 1024,
ves_icall_System_String_InternalIntern_raw,
// token 1297,
ves_icall_System_Type_internal_from_handle_raw,
// token 1513,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1514,
ves_icall_System_ValueType_Equals_raw,
// token 8333,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8334,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8336,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8337,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8338,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8339,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8340,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8342,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8344,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8346,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 8347,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8348,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8356,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8358,
mono_monitor_exit_icall_raw,
// token 8362,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8363,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8365,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8367,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8369,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8382,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8391,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8392,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8394,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8395,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8396,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8397,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8398,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8400,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8402,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9460,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9464,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9466,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9467,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9468,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9469,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9539,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9540,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9541,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9542,
ves_icall_System_GCHandle_InternalSet_raw,
// token 9561,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9562,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9563,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9564,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9598,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9647,
mono_object_hash_icall_raw,
// token 9650,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9659,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9660,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9661,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9662,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 10066,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 10067,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 10072,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 10073,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 10124,
mono_digest_get_public_token,
// token 10125,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 10126,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 10154,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 10160,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 10167,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 10177,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 10181,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 10273,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 10283,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 10284,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 10297,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 10298,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 10299,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 10300,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 10301,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 10302,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 10303,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 10310,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 10326,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 10347,
ves_icall_reflection_get_token_raw,
// token 10348,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 10357,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 10359,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 10366,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 10367,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 10370,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 10372,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 10377,
ves_icall_reflection_get_token_raw,
// token 10383,
ves_icall_get_method_info_raw,
// token 10384,
ves_icall_get_method_attributes,
// token 10391,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 10393,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 10403,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 10406,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 10407,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 10408,
ves_icall_reflection_get_token_raw,
// token 10419,
ves_icall_InternalInvoke_raw,
// token 10431,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10437,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10438,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10439,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10441,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10442,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10452,
ves_icall_InternalInvoke_raw,
// token 10471,
ves_icall_reflection_get_token_raw,
// token 10493,
ves_icall_reflection_get_token_raw,
// token 10494,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10495,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10496,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10497,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10514,
ves_icall_reflection_get_token_raw,
// token 10519,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10524,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10525,
ves_icall_RuntimePropertyInfo_GetTypeModifiers_raw,
// token 10526,
ves_icall_property_info_get_default_value_raw,
// token 10563,
ves_icall_reflection_get_token_raw,
// token 10564,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 11068,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 11069,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 11152,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 11231,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11492,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11493,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11502,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11503,
ves_icall_ModuleBuilder_getToken_raw,
// token 11504,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11510,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11589,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11761,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11762,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 12532,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 12533,
ves_icall_System_Diagnostics_Debugger_Log,
// token 13361,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13380,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13387,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13388,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13390,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
